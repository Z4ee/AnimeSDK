#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/UIText.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SETTEXT_OFFSET UNITYSDK_OFFSET(0x1AE4CE00)
#define UNITYENGINE_UI_EXTENSION_UIIMGTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE4CE50)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImgText_TypeDefinitionIndex = 44183;

	class UIImgText : public ::UnityEngine::UI::UIText
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT__CTOR_OFFSET))(this);
		}

		::System::Void SetText(::System::String* str)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMGTEXT_SETTEXT_OFFSET))(this, str);
		}
	};
}
