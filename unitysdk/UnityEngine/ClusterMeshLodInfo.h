#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/MeshClusterInfo.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ClusterMeshLodInfo_TypeDefinitionIndex = 4278;

	struct alignas(8) ClusterMeshLodInfo
	{
		::System::UInt64 MeshHash; // 0x10
		::UnityEngine::MeshClusterInfo* ClustersInfo; // 0x18
		::System::UInt32 ClustersInfoCount; // 0x20
		::System::Single MaxDistance; // 0x24
	};
}
