#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::NAPRenderPipeline0 { class VolumeComponent; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int VolumeApplyHistory_TypeDefinitionIndex = 6074;

	struct alignas(8) VolumeApplyHistory
	{
		::System::Single Weight; // 0x10
		::System::Int32 Version; // 0x14
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* Components; // 0x18
	};
}
