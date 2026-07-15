#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine
{
	inline static constexpr unsigned int MeshClusterInfo_TypeDefinitionIndex = 4277;

	struct alignas(8) MeshClusterInfo
	{
		::System::UInt32* ClusterIndexData; // 0x10
		::System::UInt32 ClusterIndexDataCount; // 0x18
		::UnityEngine::Vector4* ClusterVertexData; // 0x20
		::System::UInt32 ClusterVertexDataCount; // 0x28
		::UnityEngine::Bounds ClusterAABB; // 0x2C
		::UnityEngine::Vector4 ClusterConeNormal; // 0x44
	};
}
