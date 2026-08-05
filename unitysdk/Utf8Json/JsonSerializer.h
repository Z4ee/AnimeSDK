#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace System::IO { class Stream; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_JSONSERIALIZER_FILLFROMSTREAM_OFFSET UNITYSDK_OFFSET(0x1F53A5A0)
#define UTF8JSON_JSONSERIALIZER_GET_DEFAULTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1F5389E0)
#define UTF8JSON_JSONSERIALIZER_GET_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1F538AF0)
#define UTF8JSON_JSONSERIALIZER_PRETTYPRINTBYTEARRAY_1_OFFSET UNITYSDK_OFFSET(0x1F539AF0)
#define UTF8JSON_JSONSERIALIZER_PRETTYPRINTBYTEARRAY_2_OFFSET UNITYSDK_OFFSET(0x1F539C40)
#define UTF8JSON_JSONSERIALIZER_PRETTYPRINTBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1F539A90)
#define UTF8JSON_JSONSERIALIZER_PRETTYPRINT_1_OFFSET UNITYSDK_OFFSET(0x1F538C10)
#define UTF8JSON_JSONSERIALIZER_PRETTYPRINT_2_OFFSET UNITYSDK_OFFSET(0x1F539830)
#define UTF8JSON_JSONSERIALIZER_PRETTYPRINT_OFFSET UNITYSDK_OFFSET(0x1F538BB0)
#define UTF8JSON_JSONSERIALIZER_SETDEFAULTRESOLVER_OFFSET UNITYSDK_OFFSET(0x1F538B50)
#define UTF8JSON_JSONSERIALIZER_WRITEPRITTYPRINT_OFFSET UNITYSDK_OFFSET(0x1F538DA0)
#define UTF8JSON_JSONSERIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F53A630)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer_TypeDefinitionIndex = 95014;

	class JsonSerializer : public ::System::Object
	{
	public:
		static ::Il2CppArray<::Il2CppArray<::System::Byte>*>** StaticGet_indent()
		{
			return (::Il2CppArray<::Il2CppArray<::System::Byte>*>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializer_TypeDefinitionIndex)->GetStaticField(0x53270);
		}
		static ::Utf8Json::IJsonFormatterResolver** StaticGet_defaultResolver()
		{
			return (::Utf8Json::IJsonFormatterResolver**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializer_TypeDefinitionIndex)->GetStaticField(0x53278);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_newLine()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializer_TypeDefinitionIndex)->GetStaticField(0x53280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER__CCTOR_OFFSET))();
		}

		static ::Utf8Json::IJsonFormatterResolver* get_DefaultResolver()
		{
			return ((::Utf8Json::IJsonFormatterResolver*(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_GET_DEFAULTRESOLVER_OFFSET))();
		}

		static ::System::Boolean get_IsInitialized()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_GET_ISINITIALIZED_OFFSET))();
		}

		static ::System::Void SetDefaultResolver(::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_SETDEFAULTRESOLVER_OFFSET))(resolver);
		}

		static ::System::String* PrettyPrint(::Il2CppArray<::System::Byte>* json)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_PRETTYPRINT_OFFSET))(json);
		}

		static ::System::String* PrettyPrint_1(::Il2CppArray<::System::Byte>* json, ::System::Int32 offset)
		{
			return ((::System::String*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_PRETTYPRINT_1_OFFSET))(json, offset);
		}

		static ::System::String* PrettyPrint_2(::System::String* json)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_PRETTYPRINT_2_OFFSET))(json);
		}

		static ::Il2CppArray<::System::Byte>* PrettyPrintByteArray(::Il2CppArray<::System::Byte>* json)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_PRETTYPRINTBYTEARRAY_OFFSET))(json);
		}

		static ::Il2CppArray<::System::Byte>* PrettyPrintByteArray_1(::Il2CppArray<::System::Byte>* json, ::System::Int32 offset)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_PRETTYPRINTBYTEARRAY_1_OFFSET))(json, offset);
		}

		static ::Il2CppArray<::System::Byte>* PrettyPrintByteArray_2(::System::String* json)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_PRETTYPRINTBYTEARRAY_2_OFFSET))(json);
		}

		static ::System::Void WritePrittyPrint(::Utf8Json::JsonReader& reader, ::Utf8Json::JsonWriter& writer, ::System::Int32 depth)
		{
			return ((::System::Void(*)(::Utf8Json::JsonReader&, ::Utf8Json::JsonWriter&, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_WRITEPRITTYPRINT_OFFSET))(reader, writer, depth);
		}

		static ::System::Int32 FillFromStream(::System::IO::Stream* input, ::Il2CppArray<::System::Byte>*& buffer)
		{
			return ((::System::Int32(*)(::System::IO::Stream*, ::Il2CppArray<::System::Byte>*&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_FILLFROMSTREAM_OFFSET))(input, buffer);
		}
	};
}
