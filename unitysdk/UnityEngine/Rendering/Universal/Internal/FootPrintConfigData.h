#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Material; }

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int FootPrintConfigData_TypeDefinitionIndex = 26888;

	struct alignas(8) FootPrintConfigData
	{
		::System::Single offset; // 0x10
		::System::Boolean isLocalOffset; // 0x14
		::System::Single size; // 0x18
		::System::Boolean enableSpecialConfig; // 0x1C
		::UnityEngine::Vector4 scaleOffset; // 0x20
		::UnityEngine::Vector2 extraOffset; // 0x30
		::UnityEngine::Material* material; // 0x38
	};
}
