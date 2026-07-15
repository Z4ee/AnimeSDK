#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextFormatState_TypeDefinitionIndex = 5041;

	struct alignas(4) TextFormatState
	{
		::UnityEngine::Color32 formatCharColor; // 0x10
		::UnityEngine::Vector3 charOffset; // 0x14
		::UnityEngine::Vector2 desiredExtents; // 0x20
		::System::Int32 characterIndex; // 0x28
		::System::Int32 whitespaceCount; // 0x2C
		::System::Int32 formatChange; // 0x30
		::System::Int32 endOfPrevWord; // 0x34
		::System::Int32 startOfWord; // 0x38
		::System::Int32 startOfLine; // 0x3C
		::System::Int32 startOfUnbreak; // 0x40
		::System::Int32 flags; // 0x44
		::System::Int32 alignment; // 0x48
		::System::Int32 savedFormatChange; // 0x4C
		::System::Int32 newUnderlinePos; // 0x50
		::System::Single startOfWordPos; // 0x54
		::System::Single wordLength; // 0x58
		::System::Single startOfUnbreakPos; // 0x5C
		::System::Single posX; // 0x60
		::System::Single indent; // 0x64
		::System::Single marginLeft; // 0x68
		::System::Single marginRight; // 0x6C
		::System::Single offsetX; // 0x70
	};
}
