#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Extension/UITextPluginBase.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UITEXTPLUGINFORMAT__CTOR_OFFSET UNITYSDK_OFFSET(0x12AA7990)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITextPluginFormat_TypeDefinitionIndex = 75731;

	class UITextPluginFormat : public ::UnityEngine::UI::Extension::UITextPluginBase
	{
	public:
		::System::String* format; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UITEXTPLUGINFORMAT__CTOR_OFFSET))(this);
		}
	};
}
