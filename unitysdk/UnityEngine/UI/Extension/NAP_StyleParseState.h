#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharStyleFlags.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_FontStyleStack.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_HighlightState.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_TextProcessingStack_1.h"

namespace System { class String; }

#define UNITYENGINE_UI_EXTENSION_NAP_STYLEPARSESTATE_BUILDSTYLEFLAGS_OFFSET UNITYSDK_OFFSET(0x8B9520)
#define UNITYENGINE_UI_EXTENSION_NAP_STYLEPARSESTATE_GET_CURRENTHIGHLIGHTSTATE_OFFSET UNITYSDK_OFFSET(0x8B9430)
#define UNITYENGINE_UI_EXTENSION_NAP_STYLEPARSESTATE_GET_CURRENTPOINTSIZE_OFFSET UNITYSDK_OFFSET(0x8B94B0)
#define UNITYENGINE_UI_EXTENSION_NAP_STYLEPARSESTATE_GET_MARKDEPTH_OFFSET UNITYSDK_OFFSET(0x8B9420)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_StyleParseState_TypeDefinitionIndex = 73841;

	struct alignas(8) NAP_StyleParseState
	{
		::UnityEngine::UI::Extension::NAP_FontStyleStack fontStyleStack; // 0x10
		::UnityEngine::UI::Extension::NAP_CharStyleFlags fontStyleInternal; // 0x16
		::UnityEngine::UI::Extension::NAP_TextProcessingStack_1<::UnityEngine::UI::Extension::NAP_HighlightState> highlightStateStack; // 0x18
		::UnityEngine::UI::Extension::NAP_TextProcessingStack_1<::System::Single> sizeStack; // 0x48
		::System::Int32 pendingLinkStartGi; // 0x68
		::System::String* pendingLinkId; // 0x70

		::System::Int32 get_markDepth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_STYLEPARSESTATE_GET_MARKDEPTH_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::NAP_HighlightState get_currentHighlightState()
		{
			return ((::UnityEngine::UI::Extension::NAP_HighlightState(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_STYLEPARSESTATE_GET_CURRENTHIGHLIGHTSTATE_OFFSET))(this);
		}

		::System::Single get_currentPointSize()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_STYLEPARSESTATE_GET_CURRENTPOINTSIZE_OFFSET))(this);
		}

		::UnityEngine::UI::Extension::NAP_CharStyleFlags BuildStyleFlags()
		{
			return ((::UnityEngine::UI::Extension::NAP_CharStyleFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_NAP_STYLEPARSESTATE_BUILDSTYLEFLAGS_OFFSET))(this);
		}
	};
}
