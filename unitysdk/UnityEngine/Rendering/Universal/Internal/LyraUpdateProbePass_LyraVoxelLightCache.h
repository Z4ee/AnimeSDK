#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine { class ComputeBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_LYRAVOXELLIGHTCACHE_CLEAR_OFFSET UNITYSDK_OFFSET(0x95D630)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraUpdateProbePass_LyraVoxelLightCache_TypeDefinitionIndex = 26940;

	struct alignas(8) LyraUpdateProbePass_LyraVoxelLightCache
	{
		::UnityEngine::ComputeBuffer* LyraVoxelCacheRequiresBuffer; // 0x10
		::UnityEngine::ComputeBuffer* LyraVoxelHandlesBuffer; // 0x18
		::UnityEngine::ComputeBuffer* LyraVoxelCacheAllocator; // 0x20
		::UnityEngine::ComputeBuffer* LyraVoxelCacheIndexListBuffer; // 0x28
		::UnityEngine::ComputeBuffer* LyraVoxelCacheDataBuffer; // 0x30
		::UnityEngine::Vector3 voxelCenter; // 0x38

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAUPDATEPROBEPASS_LYRAVOXELLIGHTCACHE_CLEAR_OFFSET))(this);
		}
	};
}
