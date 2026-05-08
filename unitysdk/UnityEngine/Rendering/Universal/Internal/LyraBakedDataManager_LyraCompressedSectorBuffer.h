#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CompressionType.h"

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedDataManager_LyraCompressedSectorBuffer_TypeDefinitionIndex = 30458;

	struct alignas(8) LyraBakedDataManager_LyraCompressedSectorBuffer
	{
		::Il2CppArray<::System::Byte>* compressedData; // 0x10
		::System::Int32 numBlocks; // 0x18
		::UnityEngine::CompressionType compressionType; // 0x1C
		::System::Int32 decompressedSize; // 0x20
	};
}
