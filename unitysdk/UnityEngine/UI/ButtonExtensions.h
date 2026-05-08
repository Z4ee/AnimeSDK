#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace UnityEngine::UI { class Button; }

#define UNITYENGINE_UI_BUTTONEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x150A91C0)
#define UNITYENGINE_UI_BUTTONEXTENSIONS_SAFESETINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x150A9490)
#define UNITYENGINE_UI_BUTTONEXTENSIONS_SAFESETNORMALCOLOR_OFFSET UNITYSDK_OFFSET(0x150A9740)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ButtonExtensions_TypeDefinitionIndex = 53614;

	class ButtonExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetActive(::UnityEngine::UI::Button* btn, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Button*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTONEXTENSIONS_SAFESETACTIVE_OFFSET))(btn, value, outputError);
		}

		static ::System::Void SafeSetInteractable(::UnityEngine::UI::Button* btn, ::System::Boolean enable, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Button*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTONEXTENSIONS_SAFESETINTERACTABLE_OFFSET))(btn, enable, outputError);
		}

		static ::System::Void SafeSetNormalColor(::UnityEngine::UI::Button* btn, ::UnityEngine::Color color, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Button*, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_BUTTONEXTENSIONS_SAFESETNORMALCOLOR_OFFSET))(btn, color, outputError);
		}
	};
}
