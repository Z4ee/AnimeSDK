#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/TextItalicAdobeStyle.h"

#define UNITYENGINE_UI_EXTENSION_UIHOTFIXTEXT_TRYREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x150AC4B0)
#define UNITYENGINE_UI_EXTENSION_UIHOTFIXTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x150AC500)
#define UNITYENGINE_UI_EXTENSION_UIHOTFIXTEXT___BASE_TRYREBUILDADJUSTEDTEXT_OFFSET UNITYSDK_OFFSET(0x150AC560)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIHotfixText_TypeDefinitionIndex = 55369;

	class UIHotfixText : public ::UnityEngine::UI::TextItalicAdobeStyle
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIHOTFIXTEXT__CTOR_OFFSET))(this);
		}

		::System::Void TryRebuildAdjustedText(::System::Boolean shouldApplyModification)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIHOTFIXTEXT_TRYREBUILDADJUSTEDTEXT_OFFSET))(this, shouldApplyModification);
		}

		::System::Void __base_TryRebuildAdjustedText(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIHOTFIXTEXT___BASE_TRYREBUILDADJUSTEDTEXT_OFFSET))(this, P0);
		}
	};
}
