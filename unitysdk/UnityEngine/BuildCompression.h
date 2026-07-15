#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CompressionLevel.h"
#include "unitysdk/UnityEngine/CompressionType.h"

#define UNITYENGINE_BUILDCOMPRESSION_SET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x38C2BD0)
#define UNITYENGINE_BUILDCOMPRESSION_SET_COMPRESSION_OFFSET UNITYSDK_OFFSET(0x167520)
#define UNITYENGINE_BUILDCOMPRESSION_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xA4B350)
#define UNITYENGINE_BUILDCOMPRESSION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D2FA820)
#define UNITYENGINE_BUILDCOMPRESSION__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED5C0)

namespace UnityEngine
{
	inline static constexpr unsigned int BuildCompression_TypeDefinitionIndex = 5703;

	struct alignas(4) BuildCompression
	{
		static ::UnityEngine::BuildCompression* StaticGet_LZ4Runtime()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x3C0);
		}
		static ::UnityEngine::BuildCompression* StaticGet_LZMA()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x3CC);
		}
		static ::UnityEngine::BuildCompression* StaticGet_Uncompressed()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x3D8);
		}
		static ::UnityEngine::BuildCompression* StaticGet_LZ4()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x3E4);
		}
		static ::UnityEngine::BuildCompression* StaticGet_UncompressedRuntime()
		{
			return (::UnityEngine::BuildCompression*)Il2CppClass::FromTypeDefinitionIndex(BuildCompression_TypeDefinitionIndex)->GetStaticField(0x3F0);
		}
		::UnityEngine::CompressionType _compression; // 0x10
		::UnityEngine::CompressionLevel _level; // 0x14
		::System::UInt32 _blockSize; // 0x18

		::System::Void _ctor(::UnityEngine::CompressionType a1, ::UnityEngine::CompressionLevel a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CompressionType, ::UnityEngine::CompressionLevel, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION__CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION__CCTOR_OFFSET))();
		}

		::System::Void set_compression(::UnityEngine::CompressionType a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CompressionType))((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION_SET_COMPRESSION_OFFSET))(this, a1);
		}

		::System::Void set_level(::UnityEngine::CompressionLevel a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::CompressionLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Void set_blockSize(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_BUILDCOMPRESSION_SET_BLOCKSIZE_OFFSET))(this, a1);
		}
	};
}
