#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CompressionLevel.h"
#include "unitysdk/UnityEngine/CompressionType.h"

#define UNITYENGINE_BUILDCOMPRESSION_SET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0xD260)
#define UNITYENGINE_BUILDCOMPRESSION_SET_COMPRESSION_OFFSET UNITYSDK_OFFSET(0x29130)
#define UNITYENGINE_BUILDCOMPRESSION_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D50)
#define UNITYENGINE_BUILDCOMPRESSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x189DFB80)
#define UNITYENGINE_BUILDCOMPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x7B070)

namespace UnityEngine
{
	inline static constexpr unsigned int BuildCompression_TypeDefinitionIndex = 5410;

	struct alignas(4) BuildCompression
	{
		static ::UnityEngine::BuildCompression* StaticGet_Uncompressed()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x320);
		}
		static ::UnityEngine::BuildCompression* StaticGet_LZ4()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x32C);
		}
		static ::UnityEngine::BuildCompression* StaticGet_LZMA()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x338);
		}
		static ::UnityEngine::BuildCompression* StaticGet_LZ4Runtime()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x344);
		}
		static ::UnityEngine::BuildCompression* StaticGet_UncompressedRuntime()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x350);
		}
		::UnityEngine::CompressionType _compression; // 0x10
		::UnityEngine::CompressionLevel _level; // 0x14
		::System::UInt32 _blockSize; // 0x18

		::System::Void _ctor(::UnityEngine::CompressionType in_compression, ::UnityEngine::CompressionLevel in_level, ::System::UInt32 in_blockSize)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CompressionType, ::UnityEngine::CompressionLevel, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION__CTOR_OFFSET))(this, in_compression, in_level, in_blockSize);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION__CCTOR_OFFSET))();
		}

		::System::Void set_compression(::UnityEngine::CompressionType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CompressionType))((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION_SET_COMPRESSION_OFFSET))(this, value);
		}

		::System::Void set_level(::UnityEngine::CompressionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CompressionLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Void set_blockSize(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION_SET_BLOCKSIZE_OFFSET))(this, value);
		}
	};
}
