#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapResourceFileType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int NapBundleInfo_TypeDefinitionIndex = 7682;

	struct alignas(8) NapBundleInfo
	{
		::System::UInt64 hashName; // 0x10
		::System::UInt32 offset; // 0x18
		::System::UInt32 fileSize; // 0x1C
		::System::UInt64 fileHash; // 0x20
		::System::Byte locationIndex; // 0x28
		::UnityEngine::NapResourceFileType resourceFileType; // 0x2C
	};
}
