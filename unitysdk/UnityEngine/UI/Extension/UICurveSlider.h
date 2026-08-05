#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/UISlider.h"

namespace UnityEngine { class RectTransform; }

#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_ISVALID_OFFSET UNITYSDK_OFFSET(0x1BC46F60)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_REFRESHHANDLE_OFFSET UNITYSDK_OFFSET(0x1BC47600)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC47560)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC479C0)
#define UNITYENGINE_UI_EXTENSION_UICURVESLIDER___BASE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC479D0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UICurveSlider_TypeDefinitionIndex = 81988;

	class UICurveSlider : public ::UnityEngine::UI::Extension::UISlider
	{
	public:
		::UnityEngine::RectTransform* startTangent; // 0x1D8
		::UnityEngine::RectTransform* endTangent; // 0x1E0
		::UnityEngine::RectTransform* startPoint; // 0x1E8
		::UnityEngine::RectTransform* endPoint; // 0x1F0
		::UnityEngine::RectTransform* handleInCurve; // 0x1F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER__CTOR_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_ISVALID_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void RefreshHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER_REFRESHHANDLE_OFFSET))(this);
		}

		::System::Void __base_set_value(::System::Single P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UICURVESLIDER___BASE_SET_VALUE_OFFSET))(this, P0);
		}
	};
}
