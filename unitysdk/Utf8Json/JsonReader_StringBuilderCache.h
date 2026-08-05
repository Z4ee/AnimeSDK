#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UTF8JSON_JSONREADER_STRINGBUILDERCACHE_GETBUFFER_OFFSET UNITYSDK_OFFSET(0x1FB96090)
#define UTF8JSON_JSONREADER_STRINGBUILDERCACHE_GETCODEPOINTSTRINGBUFFER_OFFSET UNITYSDK_OFFSET(0x1FB961B0)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonReader_StringBuilderCache_TypeDefinitionIndex = 95012;

	class JsonReader_StringBuilderCache : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Char>** StaticGet_codePointStringBuffer()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(JsonReader_StringBuilderCache_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_buffer()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(JsonReader_StringBuilderCache_TypeDefinitionIndex)->GetStaticField(0x0);
		}

		static ::Il2CppArray<::System::Byte>* GetBuffer()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_STRINGBUILDERCACHE_GETBUFFER_OFFSET))();
		}

		static ::Il2CppArray<::System::Char>* GetCodePointStringBuffer()
		{
			return ((::Il2CppArray<::System::Char>*(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONREADER_STRINGBUILDERCACHE_GETCODEPOINTSTRINGBUFFER_OFFSET))();
		}
	};
}
