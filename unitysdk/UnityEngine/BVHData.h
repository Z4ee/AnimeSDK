#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/MinMaxAABB.h"
#include "unitysdk/UnityEngine/Sphere.h"

namespace UnityEngine
{
	inline static constexpr unsigned int BVHData_TypeDefinitionIndex = 4090;

	struct alignas(8) BVHData
	{
		::System::Boolean bLeaf; // 0x10
		::System::Single MinLODErrors; // 0x14
		::System::Single MaxParentLODErrors; // 0x18
		::System::UInt32 LeafNumClusters; // 0x1C
		::System::UInt32 LeafPartInstanceIndex; // 0x20
		::System::UInt32 ChildNodeIndex; // 0x24
		::UnityEngine::MinMaxAABB Bounds; // 0x28
		::UnityEngine::Sphere LODBounds; // 0x40
		::Il2CppArray<::System::UInt32>* ClusterIndices; // 0x50
	};
}
