#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharElementType.h"
#include "unitysdk/UnityEngine/UI/Extension/NAP_CharStyleFlags.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int NAP_CharacterInfo_TypeDefinitionIndex = 56257;

	struct alignas(4) NAP_CharacterInfo
	{
		::System::Int32 characterIndex; // 0x10
		::System::Int32 lineNumber; // 0x14
		::UnityEngine::UI::Extension::NAP_CharElementType elementType; // 0x18
		::UnityEngine::UI::Extension::NAP_CharStyleFlags style; // 0x1A
		::UnityEngine::Vector2 topLeft; // 0x1C
		::UnityEngine::Vector2 bottomRight; // 0x24
		::System::Int32 vertexIndex; // 0x2C
		::UnityEngine::Color32 vertexColor; // 0x30
	};
}
