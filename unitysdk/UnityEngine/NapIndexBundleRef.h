#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapIndexBundleRef_TypeDefinitionIndex = 7679;

	struct alignas(8) NapIndexBundleRef
	{
		::System::UInt32 blockIndex; // 0x10
		::System::UInt64 bundleHashName; // 0x18
		::System::UInt64 bundleHash; // 0x20
		::System::UInt32 offset; // 0x28
		::System::UInt32 childrenStartIndex; // 0x2C
		::System::UInt32 childrenEndIndex; // 0x30
		::System::UInt32 directChildrenStartIndex; // 0x34
		::System::UInt32 directChildrenEndIndex; // 0x38
		::System::UInt32 fileSize; // 0x3C
	};
}
