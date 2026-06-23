#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/ETextFontBestFitPrefer.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextBestFitSpec.h"

namespace System { class String; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GETPREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x9308A0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GET_FONTTEXTUREDIRTY_OFFSET UNITYSDK_OFFSET(0x930880)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x4900A0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x45B300)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GET_TEXT_OFFSET UNITYSDK_OFFSET(0x2A99F0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_SET_FONTTEXTUREDIRTY_OFFSET UNITYSDK_OFFSET(0x930890)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_SET_PIXELSPERUNIT_OFFSET UNITYSDK_OFFSET(0x4900B0)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_SET_PREFERREDWIDTH_OFFSET UNITYSDK_OFFSET(0x55FE60)
#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_SET_TEXT_OFFSET UNITYSDK_OFFSET(0x446DA0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_PreferredCache_TypeDefinitionIndex = 45426;

	struct alignas(8) UILocalizationText_PreferredCache
	{
		::System::Single _PreferredWidth_k__BackingField; // 0x10
		::System::String* _Text_k__BackingField; // 0x18
		::UnityEngine::UI::Extension::ETextFontBestFitPrefer BestFitPrefer; // 0x20
		::UnityEngine::UI::Extension::UITextBestFitSpec FontBestFit; // 0x24
		::System::Single _PixelsPerUnit_k__BackingField; // 0x34
		::System::Boolean _FontTextureDirty_k__BackingField; // 0x38

		::System::Single get_PreferredWidth()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GET_PREFERREDWIDTH_OFFSET))(this);
		}

		::System::Void set_PreferredWidth(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_SET_PREFERREDWIDTH_OFFSET))(this, value);
		}

		::System::String* get_Text()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GET_TEXT_OFFSET))(this);
		}

		::System::Void set_Text(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_SET_TEXT_OFFSET))(this, value);
		}

		::System::Single get_PixelsPerUnit()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GET_PIXELSPERUNIT_OFFSET))(this);
		}

		::System::Void set_PixelsPerUnit(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_SET_PIXELSPERUNIT_OFFSET))(this, value);
		}

		::System::Boolean get_FontTextureDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GET_FONTTEXTUREDIRTY_OFFSET))(this);
		}

		::System::Void set_FontTextureDirty(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_SET_FONTTEXTUREDIRTY_OFFSET))(this, value);
		}

		::System::Single GetPreferredWidth(::UnityEngine::UI::Extension::UILocalizationText* uiLocalizationText, ::System::Boolean useRawText, ::UnityEngine::UI::Extension::ETextFontBestFitPrefer bestFitPrefer, ::System::Boolean muteNoWordBreak)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*, ::System::Boolean, ::UnityEngine::UI::Extension::ETextFontBestFitPrefer, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_PREFERREDCACHE_GETPREFERREDWIDTH_OFFSET))(this, uiLocalizationText, useRawText, bestFitPrefer, muteNoWordBreak);
		}
	};
}
