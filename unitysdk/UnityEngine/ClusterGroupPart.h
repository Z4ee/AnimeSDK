#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ClusterGroupPart_TypeDefinitionIndex = 4092;

	struct alignas(8) ClusterGroupPart
	{
		::System::UInt32 GroupIndex; // 0x10
		::System::UInt32 PageIndex; // 0x14
		::System::UInt32 PageClusterOffset; // 0x18
		::Il2CppArray<::System::UInt32>* Clusters; // 0x20
		::System::UInt32 FirtInstanceIndex; // 0x28
		::System::UInt32 NumInstances; // 0x2C
	};
}
