#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LerpItem_TypeDefinitionIndex = 6078;

	struct alignas(8) LerpItem
	{
		::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* Components; // 0x10
		::Il2CppArray<::System::Single>* Weights; // 0x18
	};
}
