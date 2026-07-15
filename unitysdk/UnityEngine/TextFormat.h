#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace UnityEngine
{
	inline static constexpr unsigned int TextFormat_TypeDefinitionIndex = 5037;

	struct alignas(4) TextFormat
	{
		::System::Int32 style; // 0x10
		::UnityEngine::Color32 color; // 0x14
		::UnityEngine::Color32 formatCharColor; // 0x18
		::System::Int32 size; // 0x1C
		::System::Int32 deltaSize; // 0x20
		::System::Int32 material; // 0x24
		::UnityEngine::Rect imageRect; // 0x28
		::UnityEngine::Vector2 offset; // 0x38
		::UnityEngine::Vector2 extendsOffset; // 0x40
		::System::Single lineHeight; // 0x48
		::System::Int32 alignment; // 0x4C
	};
}
