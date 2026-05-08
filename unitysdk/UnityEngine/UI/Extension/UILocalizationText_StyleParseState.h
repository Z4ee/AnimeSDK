#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharStyleFlags.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_STYLEPARSESTATE_BUILDSTYLEFLAGS_OFFSET UNITYSDK_OFFSET(0x8A6410)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UILocalizationText_StyleParseState_TypeDefinitionIndex = 70842;

	struct alignas(8) UILocalizationText_StyleParseState
	{
		::System::Int32 underlineDepth; // 0x10
		::System::Int32 linkDepth; // 0x14
		::System::Int32 boldDepth; // 0x18
		::System::Int32 italicDepth; // 0x1C
		::System::Int32 pendingLinkStartGi; // 0x20
		::System::String* pendingLinkId; // 0x28

		::UnityEngine::UI::Extension::NAP_CharStyleFlags BuildStyleFlags()
		{
			return ((::UnityEngine::UI::Extension::NAP_CharStyleFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UILOCALIZATIONTEXT_STYLEPARSESTATE_BUILDSTYLEFLAGS_OFFSET))(this);
		}
	};
}
