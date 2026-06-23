#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/CompressionType.h"

#define UNITYENGINE_COMPRESSION_DECOMPRESSMEMORY_OFFSET UNITYSDK_OFFSET(0x1E8760D0)

namespace UnityEngine
{
	inline static constexpr unsigned int Compression_TypeDefinitionIndex = 7673;

	class Compression : public ::System::Object
	{
	public:
		static ::System::Boolean DecompressMemory(::UnityEngine::CompressionType type, ::System::IntPtr compressed, ::System::Int64 compressedSize, ::System::IntPtr uncompressed, ::System::Int64 uncompressedSize)
		{
			return ((::System::Boolean(*)(::UnityEngine::CompressionType, ::System::IntPtr, ::System::Int64, ::System::IntPtr, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_COMPRESSION_DECOMPRESSMEMORY_OFFSET))(type, compressed, compressedSize, uncompressed, uncompressedSize);
		}
	};
}
