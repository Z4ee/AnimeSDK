#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int NapPhysicsRayData_TypeDefinitionIndex = 30395;

	struct alignas(4) NapPhysicsRayData
	{
		::UnityEngine::Vector3 originPosition; // 0x10
		::UnityEngine::Vector3 rayDirection; // 0x1C
		::System::Single rayLength; // 0x28
	};
}
