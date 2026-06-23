#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/OffscreenParticleManager_DamageParticlePrefabArg.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_DAMAGEPARTICLEITEMDESC_EQUALSWITHOUTFRAMINDEX_OFFSET UNITYSDK_OFFSET(0x8BF930)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OffscreenParticleManager_DamageParticleItemDesc_TypeDefinitionIndex = 26718;

	struct alignas(8) OffscreenParticleManager_DamageParticleItemDesc
	{
		::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticlePrefabArg Prefab; // 0x10
		::UnityEngine::Bounds ScreenBounds; // 0x30
		::System::Int32 Width; // 0x48
		::System::Int32 Height; // 0x4C

		::System::Boolean EqualsWithoutFramIndex(::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc& other)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::OffscreenParticleManager_DamageParticleItemDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OFFSCREENPARTICLEMANAGER_DAMAGEPARTICLEITEMDESC_EQUALSWITHOUTFRAMINDEX_OFFSET))(this, other);
		}
	};
}
