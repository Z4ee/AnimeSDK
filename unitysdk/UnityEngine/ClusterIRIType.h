#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ClusterMeshLodInfo.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ClusterIRIType_TypeDefinitionIndex = 4279;

	struct alignas(8) ClusterIRIType
	{
		::System::UInt64 MaterialHash; // 0x10
		::UnityEngine::Vector4* MaterialParamData; // 0x18
		::System::UInt32 MaterialParamDataCount; // 0x20
		::System::UInt64 TexHashe0; // 0x28
		::System::UInt64 TexHashe1; // 0x30
		::System::UInt64 TexHashe2; // 0x38
		::System::Int32 Texture0; // 0x40
		::System::Int32 Texture1; // 0x44
		::System::Int32 Texture2; // 0x48
		::UnityEngine::Bounds MeshLocalAABB; // 0x4C
		::UnityEngine::ClusterMeshLodInfo* MeshLodInfos; // 0x68
		::System::UInt32 MeshLodInfosCount; // 0x70
		::System::UInt32 BeginInMatrixNativeArray; // 0x74
		::System::UInt32 CountInMatrixNativeArray; // 0x78
	};
}
