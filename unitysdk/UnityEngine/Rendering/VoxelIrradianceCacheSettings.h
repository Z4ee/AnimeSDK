#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/VoxelIrradianceCacheShadingFallback.h"
#include "unitysdk/UnityEngine/Rendering/VoxelIrradianceCacheShadingPass.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int VoxelIrradianceCacheSettings_TypeDefinitionIndex = 4845;

	struct alignas(4) VoxelIrradianceCacheSettings
	{
		::System::Boolean HalfRes; // 0x10
		::System::Boolean ForceDisableAO; // 0x11
		::System::Boolean HDRAmbientTex; // 0x12
		::System::Boolean SHCompression; // 0x13
		::System::Boolean EvalSHSimple; // 0x14
		::UnityEngine::Rendering::VoxelIrradianceCacheShadingPass ShadingPass; // 0x18
		::UnityEngine::Rendering::VoxelIrradianceCacheShadingFallback ShadingFallback; // 0x1C
	};
}
