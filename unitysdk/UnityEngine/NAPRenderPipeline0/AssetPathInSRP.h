#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int AssetPathInSRP_TypeDefinitionIndex = 26739;

	struct alignas(8) AssetPathInSRP
	{
		::System::UInt64 HashPath; // 0x10
		::System::String* StringPath; // 0x18
	};
}
