#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapIndexAssetRef_TypeDefinitionIndex = 7678;

	struct alignas(8) NapIndexAssetRef
	{
		::System::Int32 bundle; // 0x10
		::System::UInt64 pathHash; // 0x18
	};
}
