#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define UNITYENGINE_UI_TEXTEXTENSIONS_SAFEGETTEXT_OFFSET UNITYSDK_OFFSET(0x1DEAAD40)
#define UNITYENGINE_UI_TEXTEXTENSIONS_SAFESETACTIVE_OFFSET UNITYSDK_OFFSET(0x1DEAA7D0)
#define UNITYENGINE_UI_TEXTEXTENSIONS_SAFESETCOLOR_OFFSET UNITYSDK_OFFSET(0x1DEAB520)
#define UNITYENGINE_UI_TEXTEXTENSIONS_SAFESETTEXTWITHELLIPSIS_OFFSET UNITYSDK_OFFSET(0x1DEAAFF0)
#define UNITYENGINE_UI_TEXTEXTENSIONS_SAFESETTEXT_OFFSET UNITYSDK_OFFSET(0x1DEAAA80)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int TextExtensions_TypeDefinitionIndex = 58058;

	class TextExtensions : public ::System::Object
	{
	public:
		static ::System::Void SafeSetActive(::UnityEngine::UI::Text* text, ::System::Boolean value, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTEXTENSIONS_SAFESETACTIVE_OFFSET))(text, value, outputError);
		}

		static ::System::Void SafeSetText(::UnityEngine::UI::Text* text, ::System::String* str, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTEXTENSIONS_SAFESETTEXT_OFFSET))(text, str, outputError);
		}

		static ::System::String* SafeGetText(::UnityEngine::UI::Text* text, ::System::Boolean outputError)
		{
			return ((::System::String*(*)(::UnityEngine::UI::Text*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTEXTENSIONS_SAFEGETTEXT_OFFSET))(text, outputError);
		}

		static ::System::Void SafeSetTextWithEllipsis(::UnityEngine::UI::Text* text, ::System::String* str, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTEXTENSIONS_SAFESETTEXTWITHELLIPSIS_OFFSET))(text, str, outputError);
		}

		static ::System::Void SafeSetColor(::UnityEngine::UI::Text* text, ::UnityEngine::Color color, ::System::Boolean outputError)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Text*, ::UnityEngine::Color, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_TEXTEXTENSIONS_SAFESETCOLOR_OFFSET))(text, color, outputError);
		}
	};
}
