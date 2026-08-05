#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharElementType.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharStyleFlags.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_HighlightState.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_CharacterInfo_TypeDefinitionIndex = 69514;

	struct alignas(4) NAP_CharacterInfo
	{
		// static const ::System::Int32 MqiInvisible = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 MqiDeferredSentinel = 0xFFFFFFFE; // 0x0
		::System::Boolean isTruncated; // 0x10
		::System::Int32 characterIndex; // 0x14
		::System::Int32 lineNumber; // 0x18
		::UnityEngine::UI::Extension::NAP_CharElementType elementType; // 0x1C
		::UnityEngine::UI::Extension::NAP_CharStyleFlags style; // 0x1E
		::System::Single origin; // 0x20
		::System::Single xAdvance; // 0x24
		::UnityEngine::Vector2 topLeft; // 0x28
		::UnityEngine::Vector2 bottomLeft; // 0x30
		::UnityEngine::Vector2 topRight; // 0x38
		::UnityEngine::Vector2 bottomRight; // 0x40
		::System::Single pointSize; // 0x48
		::System::Single ascender; // 0x4C
		::System::Single descender; // 0x50
		::UnityEngine::UI::Extension::NAP_HighlightState highlightState; // 0x54
		::UnityEngine::Color32 color; // 0x68
		::UnityEngine::Color32 underlineColor; // 0x6C
		::System::Int32 meshQuadIndex; // 0x70
		::System::Boolean isDeferredIcon; // 0x74
	};
}
