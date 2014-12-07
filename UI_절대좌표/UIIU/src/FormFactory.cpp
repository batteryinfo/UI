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

#include "FormFactory.h"
#include "MainForm.h"

#include "ZorderForm.h"

using namespace Tizen::Base;
using namespace Tizen::Ui::Controls;
using namespace Tizen::Ui::Scenes;

const wchar_t* FORM_MAIN_MENU = L"FormMainMenu";

const wchar_t* FORM_ZORDER = L"FormZorder";
const wchar_t* FORM_CLIP = L"FormClip";
const wchar_t* FORM_TRANSFORM_MATRIX = L"FormTransformMatrix";
const wchar_t* FORM_SURFACE = L"FormSurface";
const wchar_t* FORM_EVENT_LISTENER = L"FormEventListener";
const wchar_t* FORM_ANIMATION_PROVIDER = L"FormAnimationProvider";

const wchar_t* FORM_PROPERTY_ANIMATION = L"FormPropertyAnimation";
const wchar_t* FORM_VALUE_ANIMATION = L"FormValueAnimation";
const wchar_t* FORM_KEY_FRAME_ANIMATION = L"FormKeyFrameAnimation";
const wchar_t* FORM_GROUP_ANIMATION = L"FormGroupAnimation";
const wchar_t* FORM_INTERPOLATOR = L"FormInterpolator";
const wchar_t* FORM_TRANSACTION = L"FormTransaction";
const wchar_t* FORM_GALLERY = L"FormGallery";

FormFactory::FormFactory(void)
{
}

FormFactory::~FormFactory(void)
{
}

Form*
FormFactory::CreateFormN(const String& formId, const SceneId& sceneId)
{
	Form* pNewForm = null;

	if (formId == FORM_MAIN_MENU)
	{
		MainForm* pMainForm = new (std::nothrow) MainForm();
		pMainForm->Initialize();
		pNewForm = pMainForm;
	}
	else
	{
		AnimationBaseForm* pAnimationForm = null;

		if (formId == FORM_ZORDER || true)
		{
			pAnimationForm = new (std::nothrow) ZorderForm();
		}

		pAnimationForm->Initialize();
		pNewForm = pAnimationForm;
	}

	return pNewForm;
}
