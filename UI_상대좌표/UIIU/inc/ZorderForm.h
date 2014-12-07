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

#ifndef _ZORDER_FORM_H_
#define _ZORDER_FORM_H_

#include "AnimationBaseForm.h"

class ZorderForm
	: public AnimationBaseForm
	, public Tizen::Ui::ITouchEventListener
	, public Tizen::Ui::Animations::VisualElementContentProvider
	, public Tizen::Ui::Controls::IGroupedListViewItemProvider
{
public:
	ZorderForm(void);
	virtual ~ZorderForm(void);

	virtual result OnInitializing(void);

	virtual void OnActionPerformed(const Tizen::Ui::Control& source, int actionId);
	virtual void  OnTouchFocusIn (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo){}
	virtual void  OnTouchFocusOut (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo){}
	virtual void  OnTouchLongPressed (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo){}
	virtual void  OnTouchMoved (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo){}
	virtual void  OnTouchPressed (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo);
	virtual void  OnTouchReleased (const Tizen::Ui::Control &source, const Tizen::Graphics::Point &currentPosition, const Tizen::Ui::TouchEventInfo &touchInfo){}

	virtual bool PrepareDraw(Tizen::Ui::Animations::VisualElement& target);
	virtual void DrawContent(Tizen::Ui::Animations::VisualElement& target, Tizen::Graphics::Canvas& canvas);
	virtual Tizen::Ui::Animations::HitTestResult HitTest(Tizen::Ui::Animations::VisualElement& target, const Tizen::Graphics::FloatPoint& point);

	virtual void OnGroupedListViewContextItemStateChanged(Tizen::Ui::Controls::GroupedListView &listView, int groupIndex, int itemIndex, int elementId, Tizen::Ui::Controls::ListContextItemStatus state);
		virtual void OnGroupedListViewItemStateChanged(Tizen::Ui::Controls::GroupedListView &listView, int groupIndex, int itemIndex, int elementId, Tizen::Ui::Controls::ListItemStatus state);
		virtual void OnGroupedListViewItemSwept(Tizen::Ui::Controls::GroupedListView &listView, int groupIndex,  int itemIndex, Tizen::Ui::Controls::SweepDirection direction);

		virtual int GetGroupCount(void);
		virtual int GetItemCount(int groupIndex);
		virtual Tizen::Ui::Controls::ListItemBase* CreateItem(int groupIndex, int itemIndex, int itemWidth);
		virtual Tizen::Ui::Controls::GroupItem* CreateGroupItem(int groupIndex, int itemWidth);
		virtual bool DeleteItem(int groupIndex, int itemIndex, Tizen::Ui::Controls::ListItemBase* pItem, int itemWidth);
		virtual bool DeleteGroupItem(int groupIndex, Tizen::Ui::Controls::GroupItem* pItem, int itemWidth);

private:
	void ChangeZorder(void);
	virtual void InitializeFooter(void);

private:
	Tizen::Ui::Animations::VisualElement* __pRed;
	Tizen::Ui::Animations::VisualElement* __pYellow;
	Tizen::Ui::Animations::VisualElement* __pGreen;

	Tizen::Ui::Controls::Label* __pLabel;

	static const int ID_FOOTER_BUTTON_ZORDER = 899;

	Tizen::Ui::Controls::GroupedListView* __pGroupedListView;

		static const int GROUPED_LIST_VIEW_CUSTOM_ITEM_TEXT_POS_X = 46;
		static const int GROUPED_LIST_VIEW_CUSTOM_ITEM_HEIGHT = 112;
		static const int GROUPED_LIST_VIEW_GROUP_ITEM_HEIGHT = 80;
		static const int GROUPED_LIST_VIEW_GROUP_ITEM_COUNT = 2;

		static const int VISUAL_ELEMENT_ITEM_COUNT = 5;
		static const int ANIMATION_ITEM_COUNT = 5;

		static Tizen::Base::String __groupItemName[GROUPED_LIST_VIEW_GROUP_ITEM_COUNT];
		static Tizen::Base::String __visualElementItemName[VISUAL_ELEMENT_ITEM_COUNT];
		static Tizen::Base::String __animationItemName[ANIMATION_ITEM_COUNT];
};

#endif // _ZORDER_FORM_H_
