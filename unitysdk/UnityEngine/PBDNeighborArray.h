#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDNeighborArray_TypeDefinitionIndex = 24843;

	struct alignas(8) PBDNeighborArray
	{
		::Il2CppArray<::System::UInt32>* neighbors; // 0x10
	};
}
