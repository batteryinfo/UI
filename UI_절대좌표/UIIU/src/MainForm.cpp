//
// Tizen C++ SDK
// Copyright (c) 2012 Samsung Electronics Co., Ltd.
//
// Licensed under the Flora License, Version 1.1 (the License);
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://floralicense.org/license/
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an AS IS BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#include <FApp.h>
#include <FIo.h>
#include "SceneRegister.h"
#include "MainForm.h"
#include "FormFactory.h"
#include <stdio.h>

using namespace Tizen::Base;
using namespace Tizen::Base::Collection;
using namespace Tizen::App;
using namespace Tizen::Graphics;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Ui::Scenes;
using namespace Tizen::Io;

int nfirst = 0;
int nsecond = 0;

String MainForm::__groupItemName[MainForm::GROUPED_LIST_VIEW_GROUP_ITEM_COUNT] =
{
		L"배터리 사용량",
		L"배터리 사용 세부정보"
};

String MainForm::__visualElementItemName[100] =
{
		L"배터리 사용 시간 5시간 14분",
		L"배터리 사용 가능 시간 약 24시간 14분 남음",
		L"마지막 3시간 배터리 사용량 10% 사용"
};

String MainForm::__animationItemName[100] = {
		L"Tizen OS: 52%",
		L"Wi-Fi: 16%",
		L"휴대폰 유휴 상태: 11%",
		L"대기 소모 전력 :11%",
		L"화면: 6%"
};

MainForm::MainForm(void)
{
	nfirst = 3;
	nsecond = 5;
}

MainForm::~MainForm(void)
{
}

bool
MainForm::Initialize(void)
{
	Form::Construct(FORM_STYLE_NORMAL | FORM_STYLE_INDICATOR | FORM_STYLE_HEADER);
	SetFormBackEventListener(this);

	return true;
}

result
MainForm::OnInitializing(void)
{

	result r = E_SUCCESS;

	Header* pHeader = GetHeader();
	pHeader->SetStyle(HEADER_STYLE_TITLE);
	pHeader->SetTitleText(L"Battery Status");

	FILE *f;
	int bi[100][2], li[100][2], wi[100][2];
	int bic = 0, lic = 0, wic = 0, max = 0;
	char appname[100];
	int pid, percent;

	f = fopen("/home/developer/battery_info", "r");
	while(0 < fscanf(f, "%d %s %d\n", &pid, appname, &percent)) {
		String list = String(appname) + ": ";
		list.Append(percent);
		list.Append("%");
		MainForm::__animationItemName[max] = list;
		max++;
	}
	nsecond = max;
	fclose(f);
	max = 0;

	f = fopen("/home/developer/BATTERY_State.txt", "r");

	while(0 < fscanf(f, "%d, %d\n", &bi[bic][0], &bi[bic][1])) {
		if(bi[bic][0] > max)
			max = bi[bic][0];
		if(bi[bic][1] == -1)
			bi[bic][1] = 100;
		//AppLog("ESLAB %d %d", bi[bic][0], bi[bic][1]);
		bic++;
	}
	fclose(f);

/*
	bi[1][0] = 100; bi[1][1] = 50;
	bic++;
	bi[2][0] = 700; bi[2][1] = 20;
		bic++;
		bi[3][0] = 750; bi[3][1] = 0;
				bic++;
		bi[4][0] = 800; bi[4][1] = 10;
			bic++;
			bi[5][0] = 1500; bi[5][1] = 90;
				bic++;
*/

	f = fopen("/home/developer/LCD_State.txt", "r");
		while(0 < fscanf(f, "%d, %d\n", &li[lic][0], &li[lic][1])) {
			if(li[lic][0] > max)
				max = li[lic][0];
			//AppLog("ESLAB %d %d", li[lic][0], li[lic][1]);
			lic++;
		}
	fclose(f);

	f = fopen("/home/developer/WIFI_State.txt", "r");
		while(0 < fscanf(f, "%d, %d\n", &wi[wic][0], &wi[wic][1])) {
			if(wi[wic][0] > max)
				max = wi[wic][0];
			//AppLog("ESLAB %d %d", wi[wic][0], wi[wic][1]);
			wic++;
		}
	fclose(f);

	AppLog("ESLAB %d %d %d %d", bic, lic, wic, max);

	__pCanvas = new Canvas();
	Rectangle c_bounds(0, 0, GetClientAreaBounds().width, 650);
		   r = __pCanvas->Construct(c_bounds);
		   if (r == E_SUCCESS)
		   {
		      __pCanvas->SetBackgroundColor(Color::GetColor(COLOR_ID_WHITE));
		      __pCanvas->Clear();
		      Invalidate(false);
		   }

		   {
		      if (__pCanvas)
		      {
		    	  Font font;
		    	  font.Construct(FONT_STYLE_PLAIN, 20);
		    	  __pCanvas->SetFont(font);
		    	  __pCanvas->DrawText(Point(20, 160), String(L"Battery state"));
		    	  //__pCanvas->DrawLine(FloatPoint(20, 180), FloatPoint(700, 180));
		    	  //__pCanvas->DrawLine(FloatPoint(20, 460), FloatPoint(700, 460));

		    	  //__pCanvas->DrawLine(FloatPoint(20, 480), FloatPoint(700, 480));
		    	  //__pCanvas->DrawLine(FloatPoint(20, 560), FloatPoint(700, 560));
		    	  __pCanvas->DrawText(Point(20, 460), String(L"LCD state"));
		    	  __pCanvas->DrawText(Point(20, 540), String(L"Wifi state"));

		    	  Font font2;
		    	  font2.Construct(FONT_STYLE_PLAIN, 10);
		    	  __pCanvas->SetFont(font2);
		    	  __pCanvas->DrawText(Point(10, 180), String(L"100%"));
		    	  __pCanvas->DrawText(Point(10, 440), String(L"0%"));

		    	  __pCanvas->SetForegroundColor(Color::GetColor(COLOR_ID_BLACK));
		    	  __pCanvas->SetLineWidth(2);
		    	  __pCanvas->DrawLine(Point(20, 180), Point(20, 450));
		    	  __pCanvas->DrawLine(Point(20, 450), Point(680, 450));

		    	  __pCanvas->SetForegroundColor(Color::GetColor(COLOR_ID_GREEN));
		    	  __pCanvas->SetLineWidth(4);


		    	  for(int i = 1; i < bic; i++) {
		    		  //AppLog("ESLAB %f, %f", 20 + (float)bi[i-1][0]/max*680, 460 - (float)bi[i-1][1]/100*280);
		    		  __pCanvas->DrawLine(FloatPoint(20 + (float)bi[i-1][0]/max*680, 450 - (float)bi[i-1][1]/100*260),
		    				  FloatPoint(20 + (float)bi[i][0]/max*680, 450 - (float)bi[i][1]/100*260));
		    	  }
		    	  if(bic >=1 && bic < max)
		    		  __pCanvas->DrawLine(FloatPoint(20 + (float)bi[bic-1][0]/max*680, 450 - (float)bi[bic-1][1]/100*260),
		    		  		    				  FloatPoint(20 + (float)680, 450 - (float)bi[bic-1][1]/100*260));

		    	  for(int i = 1; i < lic; i++) {
		    		  	  if(li[i-1][1] != 0)
		    		  		  __pCanvas->FillRectangle(Color(40, 120, 182, 0xFF),
		    		  				  FloatRectangle(20 + (float)li[i-1][0]/max*680, 480, ((float)li[i][0] - li[i-1][0])/max*680, 60));
	  		      }
		    	  if(lic >=1 && lic < max && li[lic-1][1] != 0)
		    	  //AppLog("ESLAB %f %f", 20 + (float)li[lic-1][0]/max*680, 480, ((float)max - li[lic-1][0])/max*680);
		    		  __pCanvas->FillRectangle(Color(40, 120, 182, 0xFF),
		    		  		    		  				  FloatRectangle(20 + (float)li[lic-1][0]/max*680, 480, ((float)max - li[lic-1][0])/max*680, 60));
		    	  for(int i = 1; i < wic; i++) {
		    	  		    		  	  if(wi[i-1][1] != 0)
		    	  		    		  		  __pCanvas->FillRectangle(Color(40, 120, 182, 0xFF),
		    	  		    		  				  FloatRectangle(20 + (float)wi[i-1][0]/max*680, 560, ((float)wi[i][0] - wi[i-1][0])/max*680, 60));
		    	  }
		    	  if(wic >=1 && wic < max && wi[wic-1][1] != 0)
		    	  		    		  __pCanvas->FillRectangle(Color(40, 120, 182, 0xFF),
		    	  		    		  		    		  				  FloatRectangle(20 + (float)wi[wic-1][0]/max*680, 560, ((float)max - wi[wic-1][0])/max*680, 60));


		      }
		   }
		   Invalidate(false);

	Rectangle bounds(0, 500, GetClientAreaBounds().width, GetClientAreaBounds().height - 500);
	__pGroupedListView = new (std::nothrow) GroupedListView();
	__pGroupedListView->Construct(bounds, GROUPED_LIST_VIEW_STYLE_INDEXED, true, false);
	__pGroupedListView->SetItemProvider(*this);
	__pGroupedListView->AddGroupedListViewItemEventListener(*this);
	AddControl(__pGroupedListView);

	return r;
}

result
MainForm::OnTerminating(void)
{
	return E_SUCCESS;
}

void
MainForm::OnFormBackRequested(Form& source)
{
	UiApp* pApp = UiApp::GetInstance();
	AppAssert(pApp);
	pApp->Terminate();
}

void
MainForm::OnGroupedListViewContextItemStateChanged(GroupedListView &listView, int groupIndex, int itemIndex, int elementId, ListContextItemStatus state)
{
}

void
MainForm::OnGroupedListViewItemStateChanged(GroupedListView &listView, int groupIndex, int itemIndex, int elementId, ListItemStatus state)
{
	return;

	if(groupIndex == 0)
		return;

	String filePath(App::GetInstance()->GetAppDataPath() + L"index");
	File file;
	char buffer[2];
	file.Construct(filePath, "w");
	buffer[0] = (char)groupIndex;
	buffer[1] = (char)itemIndex;
	file.Write(buffer, 2);

	file.Seek(FILESEEKPOSITION_BEGIN, 0);

	SceneManager::GetInstance()->GoForward(ForwardSceneTransition(String(SCENE_ZORDER)), null);
}

void
MainForm::OnGroupedListViewItemSwept(GroupedListView &listView, int groupIndex,  int itemIndex, SweepDirection direction)
{
}

int
MainForm::GetGroupCount(void)
{
	return 1;
}

int
MainForm::GetItemCount(int groupIndex)
{
	int itemCount = 0;

	switch (groupIndex)
	{
	case 0:
		itemCount = nsecond;
		break;

	default:
		break;
    }

    return itemCount;
}

ListItemBase*
MainForm::CreateItem(int groupIndex, int itemIndex, int itemWidth)
{
	String elementText;

	switch(groupIndex)
	{
	case 0:
		elementText = __animationItemName[itemIndex];
		break;
	default:
		break;
	}

	CustomItem* pItem = new (std::nothrow) CustomItem();
	pItem->Construct(Dimension(itemWidth, GROUPED_LIST_VIEW_CUSTOM_ITEM_HEIGHT), LIST_ANNEX_STYLE_NORMAL);

	Rectangle textRect = Rectangle(GROUPED_LIST_VIEW_CUSTOM_ITEM_TEXT_POS_X, 0, itemWidth - GROUPED_LIST_VIEW_CUSTOM_ITEM_TEXT_POS_X, GROUPED_LIST_VIEW_CUSTOM_ITEM_HEIGHT);
	pItem->AddElement(textRect, 0, elementText, true);

	return pItem;
}

GroupItem*
MainForm::CreateGroupItem(int groupIndex, int itemWidth)
{
	GroupItem* pItem = new (std::nothrow) GroupItem();
	pItem->Construct(Dimension(itemWidth, GROUPED_LIST_VIEW_GROUP_ITEM_HEIGHT));
	pItem->SetElement(__groupItemName[groupIndex], null);

	return pItem;
}

bool
MainForm::DeleteItem(int groupIndex, int itemIndex, ListItemBase* pItem, int itemWidth)
{
	delete pItem;
	pItem = null;

	return true;
}

bool
MainForm::DeleteGroupItem(int groupIndex, GroupItem* pItem, int itemWidth)
{
	delete pItem;
	pItem = null;

	return true;
}

void
MainForm::OnSceneActivatedN(const SceneId& previousSceneId, const SceneId& currentSceneId, IList* pArgs)
{
}

void
MainForm::OnSceneDeactivated(const SceneId& currentSceneId, const SceneId& nextSceneId)
{
}

result
MainForm::OnDraw(void)
{
	Canvas* pCanvas = GetCanvasN();

	   if (pCanvas)
	   {
	      pCanvas->Copy(Point(GetClientAreaBounds().x, GetClientAreaBounds().y),
	                    *__pCanvas, GetClientAreaBounds());
	      delete pCanvas;
	   }
		return E_SUCCESS;

}
