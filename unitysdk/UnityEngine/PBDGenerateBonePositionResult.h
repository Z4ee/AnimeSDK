#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/PBDNeighborArray.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDGenerateBonePositionResult_TypeDefinitionIndex = 19157;

	struct alignas(8) PBDGenerateBonePositionResult
	{
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0x10
		::Il2CppArray<::UnityEngine::PBDNeighborArray>* neighborArray; // 0x18
		::Il2CppArray<::System::Single>* massArray; // 0x20
		::Il2CppArray<::System::Single>* dampingArray; // 0x28
	};
}
