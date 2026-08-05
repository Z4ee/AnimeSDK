#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UTF8JSON_JSONSERIALIZER_MEMORYPOOL_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1F95A460)
#define UTF8JSON_JSONSERIALIZER_MEMORYPOOL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F95A580)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer_MemoryPool_TypeDefinitionIndex = 95021;

	class JsonSerializer_MemoryPool : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_buffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializer_MemoryPool_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_MEMORYPOOL__CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_MEMORYPOOL_GETBUFFER_OFFSET))();
		}
	};
}
