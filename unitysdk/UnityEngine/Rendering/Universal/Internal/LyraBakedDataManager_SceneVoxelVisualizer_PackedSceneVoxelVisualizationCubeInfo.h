#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_SceneVoxelVisualizer_PackedSceneVoxelVisualizationCubeInfo_TypeDefinitionIndex = 27319;

	struct alignas(8) LyraBakedDataManager_SceneVoxelVisualizer_PackedSceneVoxelVisualizationCubeInfo
	{
		// static const ::System::Int32 size = 0x20; // 0x0
		::System::UInt32 packedCoord; // 0x10
		::Il2CppArray<::System::UInt32>* packedFaceAlbedos; // 0x18
		::System::UInt32 padding; // 0x20
	};
}
