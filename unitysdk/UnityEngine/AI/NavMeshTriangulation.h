#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::AI
{
	inline static constexpr unsigned int NavMeshTriangulation_TypeDefinitionIndex = 27998;

	struct alignas(8) NavMeshTriangulation
	{
		::Il2CppArray<::UnityEngine::Vector3>* vertices; // 0x10
		::Il2CppArray<::System::Int32>* indices; // 0x18
		::Il2CppArray<::System::Int32>* areas; // 0x20
	};
}
