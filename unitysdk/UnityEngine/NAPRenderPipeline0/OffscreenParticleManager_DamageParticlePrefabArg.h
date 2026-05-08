#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AssetPathInSRP.h"

namespace UnityEngine { class GameObject; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OffscreenParticleManager_DamageParticlePrefabArg_TypeDefinitionIndex = 29765;

	struct alignas(8) OffscreenParticleManager_DamageParticlePrefabArg
	{
		::UnityEngine::GameObject* GO; // 0x10
		::UnityEngine::NAPRenderPipeline0::AssetPathInSRP AssetPath; // 0x18
		::System::Boolean IsPath; // 0x28
	};
}
