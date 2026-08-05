#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MdbSimWindData_TypeDefinitionIndex = 39956;

	struct alignas(4) MdbSimWindData
	{
		::UnityEngine::Vector3 SimWindOrigin; // 0x10
		::UnityEngine::Vector3 SimWindUnitDir; // 0x1C
		::System::Single SimWindSpeed; // 0x28
		::UnityEngine::Vector3 SimWindCirclePlaneNorm; // 0x2C
	};
}
