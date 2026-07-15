#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int Sphere_TypeDefinitionIndex = 4088;

	struct alignas(4) Sphere
	{
		::UnityEngine::Vector3 Center; // 0x10
		::System::Single Radius; // 0x1C
	};
}
