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

#include "ZorderForm.h"
#include <FIo.h>
#include <FApp.h>

using namespace Tizen::Base;
using namespace Tizen::Graphics;
using namespace Tizen::Ui;
using namespace Tizen::Ui::Animations;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Io;
using namespace Tizen::App;

String ZorderForm::__groupItemName[ZorderForm::GROUPED_LIST_VIEW_GROUP_ITEM_COUNT] =
{
		L"사용 세부정보",
		L"기타"
};

String ZorderForm::__visualElementItemName[ZorderForm::VISUAL_ELEMENT_ITEM_COUNT] =
{
};

String ZorderForm::__animationItemName[ZorderForm::ANIMATION_ITEM_COUNT] = {
};

ZorderForm::ZorderForm(void)
	: __pRed(null)
	, __pYellow(null)
	, __pGreen(null)
	, __pLabel(null)
{
}

ZorderForm::~ZorderForm(void)
{
}

result
ZorderForm::OnInitializing(void)
{
	result r = E_SUCCESS;

	Header* pHeader = Form::GetHeader();
	pHeader->SetStyle(HEADER_STYLE_TITLE);
	pHeader->SetTitleText(L"사용 세부정보");

	String filePath(App::GetInstance()->GetAppDataPath() + L"index");
	File file;
	char buffer[2];
	file.Construct(filePath, "r");
	file.Seek(FILESEEKPOSITION_BEGIN, 0);
	file.Read(buffer, 2);
	AppLog("ESLAB %d %d", (int)buffer[0], (int)buffer[1]);

	if(buffer[0] == 1) {
		if(buffer[1] == 0) {
			ZorderForm::__visualElementItemName[0] = "Tizen OS";
		}
		else if(buffer[1] == 1) {
			ZorderForm::__visualElementItemName[0] = "Wi-Fi";
		}
		else if(buffer[1] == 2) {
			ZorderForm::__visualElementItemName[0] = "휴대폰 유휴 상태";
		}
		else if(buffer[1] == 3) {
			ZorderForm::__visualElementItemName[0] = "대기 소모 전력";
		}
		else if(buffer[1] == 4) {
			ZorderForm::__visualElementItemName[0] = "화면";
		}
	}


	Rectangle bounds(0, 0, GetClientAreaBounds().width, GetClientAreaBounds().height);
		__pGroupedListView = new (std::nothrow) GroupedListView();
		__pGroupedListView->Construct(bounds, GROUPED_LIST_VIEW_STYLE_INDEXED, true, false);
		__pGroupedListView->SetItemProvider(*this);
		AddControl(__pGroupedListView);

	return r;
}

void
ZorderForm::OnActionPerformed(const Control& source, int actionId)
{
	switch(actionId)
	{
	case ID_FOOTER_BUTTON_ZORDER:
		ChangeZorder();
		break;

	default:
		break;
	}
}

void
ZorderForm::InitializeFooter(void)
{
}

void
ZorderForm::OnTouchPressed (const Control &source, const Point &currentPosition, const TouchEventInfo &touchInfo)
{
	VisualElement* pTarget = _pFormElement->GetChildAt(FloatPoint(currentPosition.x, currentPosition.y));
	String labelString(L"Hit Test: ");

	if (pTarget)
	{
		if (pTarget->GetName()==L"Red")
		{
			labelString.Append(L"Red rectangle pressed");
		}
		else if (pTarget->GetName()==L"Yellow")
		{
			labelString.Append(L"Yellow rectangle pressed");
		}
		else if (pTarget->GetName()==L"Green")
		{
			labelString.Append(L"Green rectangle pressed");
		}
		else
		{
			labelString.Append(L"None");
		}
	}
	else
	{
		labelString.Append(L"None");
	}

	__pLabel->SetText(labelString);
	__pLabel->Draw();
}

void
ZorderForm::ChangeZorder(void)
{
	if (__pRed->GetZOrderGroup() > __pGreen->GetZOrderGroup())
	{
		__pRed->SetZOrderGroup(VisualElement::Z_ORDER_GROUP_LOWEST);
		__pYellow->SetZOrderGroup(VisualElement::Z_ORDER_GROUP_NORMAL);
		__pGreen->SetZOrderGroup(VisualElement::Z_ORDER_GROUP_HIGHEST);
	}
	else
	{
		__pGreen->SetZOrderGroup(VisualElement::Z_ORDER_GROUP_LOWEST);
		__pYellow->SetZOrderGroup(VisualElement::Z_ORDER_GROUP_NORMAL);
		__pRed->SetZOrderGroup(VisualElement::Z_ORDER_GROUP_HIGHEST);
	}
}

bool
ZorderForm::PrepareDraw(VisualElement& target)
{
	return true;
}

void
ZorderForm::DrawContent(VisualElement& target, Canvas& canvas)
{
	if (target.GetName() == L"Green")
	{
		canvas.SetBackgroundColor(Color(0, 0, 0, 63));
		canvas.SetForegroundColor(Color::GetColor(COLOR_ID_GREEN));
		canvas.Clear();
		canvas.DrawRectangle(Rectangle(0, 0, 375, 375));
		canvas.FillRectangle(Color::GetColor(COLOR_ID_GREEN), FloatRectangle(150.0f, 150.0f, 75.0f, 75.0f));
	}
}

HitTestResult
ZorderForm::HitTest(VisualElement& target, const FloatPoint& point)
{
	if ((point.x >= 150.0f && point.x <= 225.0f) && (point.y >= 150.0f && point.y <= 225.0f))
	{
		return HIT_TEST_MATCH;
	}
	else
	{
		return HIT_TEST_NOWHERE;
	}
}


void
ZorderForm::OnGroupedListViewContextItemStateChanged(GroupedListView &listView, int groupIndex, int itemIndex, int elementId, ListContextItemStatus state)
{
}

void
ZorderForm::OnGroupedListViewItemStateChanged(GroupedListView &listView, int groupIndex, int itemIndex, int elementId, ListItemStatus state)
{
}

void
ZorderForm::OnGroupedListViewItemSwept(GroupedListView &listView, int groupIndex,  int itemIndex, SweepDirection direction)
{
}

int
ZorderForm::GetGroupCount(void)
{
	return GROUPED_LIST_VIEW_GROUP_ITEM_COUNT;
}

int
ZorderForm::GetItemCount(int groupIndex)
{
	int itemCount = 0;

	switch (groupIndex)
	{
	case 0:
		itemCount = VISUAL_ELEMENT_ITEM_COUNT;
		break;

	case 1:
		itemCount = ANIMATION_ITEM_COUNT;
		break;

	default:
		break;
    }

    return itemCount;
}

ListItemBase*
ZorderForm::CreateItem(int groupIndex, int itemIndex, int itemWidth)
{
	String elementText;

	switch(groupIndex)
	{
	case 0:
		elementText = __visualElementItemName[itemIndex];
		break;

	case 1:
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
ZorderForm::CreateGroupItem(int groupIndex, int itemWidth)
{
	GroupItem* pItem = new (std::nothrow) GroupItem();
	pItem->Construct(Dimension(itemWidth, GROUPED_LIST_VIEW_GROUP_ITEM_HEIGHT));
	pItem->SetElement(__groupItemName[groupIndex], null);

	return pItem;
}

bool
ZorderForm::DeleteItem(int groupIndex, int itemIndex, ListItemBase* pItem, int itemWidth)
{
	delete pItem;
	pItem = null;

	return true;
}

bool
ZorderForm::DeleteGroupItem(int groupIndex, GroupItem* pItem, int itemWidth)
{
	delete pItem;
	pItem = null;

	return true;
}
