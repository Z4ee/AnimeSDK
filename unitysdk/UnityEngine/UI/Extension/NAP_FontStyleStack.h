#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharStyleFlags.h"

#define UNITYENGINE_UI_EXTENSION_NAP_FONTSTYLESTACK_ADD_OFFSET UNITYSDK_OFFSET(0x9AEB40)
#define UNITYENGINE_UI_EXTENSION_NAP_FONTSTYLESTACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x9AEAF0)
#define UNITYENGINE_UI_EXTENSION_NAP_FONTSTYLESTACK_REMOVE_OFFSET UNITYSDK_OFFSET(0x9AEB50)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_FontStyleStack_TypeDefinitionIndex = 50819;

	struct alignas(1) NAP_FontStyleStack
	{
		::System::Byte bold; // 0x10
		::System::Byte italic; // 0x11
		::System::Byte underline; // 0x12
		::System::Byte highlight; // 0x13
		::System::Byte link; // 0x14

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_FONTSTYLESTACK_CLEAR_OFFSET))(this);
		}

		::System::Byte Add(::UnityEngine::UI::Extension::NAP_CharStyleFlags style)
		{
			return ((::System::Byte(*)(::PVOID, ::UnityEngine::UI::Extension::NAP_CharStyleFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_FONTSTYLESTACK_ADD_OFFSET))(this, style);
		}

		::System::Byte Remove(::UnityEngine::UI::Extension::NAP_CharStyleFlags style)
		{
			return ((::System::Byte(*)(::PVOID, ::UnityEngine::UI::Extension::NAP_CharStyleFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_FONTSTYLESTACK_REMOVE_OFFSET))(this, style);
		}
	};
}
