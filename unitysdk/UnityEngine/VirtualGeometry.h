#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/BVHNode.h"
#include "unitysdk/UnityEngine/ClusterGroup.h"
#include "unitysdk/UnityEngine/ClusterGroupPart.h"
#include "unitysdk/UnityEngine/ClusterGroupPartInstance.h"
#include "unitysdk/UnityEngine/ClusterPage.h"

namespace UnityEngine { class Cluster; }

namespace UnityEngine
{
	inline static constexpr unsigned int VirtualGeometry_TypeDefinitionIndex = 4097;

	struct alignas(8) VirtualGeometry
	{
		::Il2CppArray<::UnityEngine::Cluster*>* Clusters; // 0x10
		::Il2CppArray<::UnityEngine::Cluster*>* MergedClusters; // 0x18
		::Il2CppArray<::UnityEngine::Cluster*>* SimplifiedClusters; // 0x20
		::Il2CppArray<::UnityEngine::ClusterGroup>* ClusterGroups; // 0x28
		::Il2CppArray<::UnityEngine::ClusterPage>* Pages; // 0x30
		::Il2CppArray<::UnityEngine::ClusterGroupPart>* GroupParts; // 0x38
		::Il2CppArray<::UnityEngine::ClusterGroupPartInstance>* GroupPartInstances; // 0x40
		::Il2CppArray<::UnityEngine::BVHNode>* BVHNodes; // 0x48
	};
}
