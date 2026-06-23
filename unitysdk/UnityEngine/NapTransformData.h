#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapTransformData_TypeDefinitionIndex = 6647;

	struct alignas(4) NapTransformData
	{
		::UnityEngine::Vector3 translation; // 0x10
		::System::Single padding0; // 0x1C
		::UnityEngine::Quaternion rotation; // 0x20
		::UnityEngine::Vector3 scale; // 0x30
		::System::Single padding1; // 0x3C
	};
}
