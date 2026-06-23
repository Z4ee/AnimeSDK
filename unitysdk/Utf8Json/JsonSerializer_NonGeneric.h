#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ArraySegment_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Utf8Json/JsonReader.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::IO { class Stream; }
namespace Utf8Json { class IJsonFormatterResolver; }
namespace Utf8Json { class JsonSerializer_NonGeneric_CompiledMethods; }
namespace Utf8Json::Internal { template <typename T> class ThreadsafeTypeKeyHashTable_1; }

#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E56A590)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1E56A6D0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1E56A800)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x1E56A9E0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x1E56A890)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x1E56AA70)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x1E56AB00)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x1E56AC40)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_9_OFFSET UNITYSDK_OFFSET(0x1E56ACD0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E56A500)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_GETORADD_OFFSET UNITYSDK_OFFSET(0x1E5691B0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEUNSAFE_1_OFFSET UNITYSDK_OFFSET(0x1E569E60)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEUNSAFE_2_OFFSET UNITYSDK_OFFSET(0x1E56A060)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEUNSAFE_3_OFFSET UNITYSDK_OFFSET(0x1E569F00)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEUNSAFE_OFFSET UNITYSDK_OFFSET(0x1E569C70)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_10_OFFSET UNITYSDK_OFFSET(0x1E569A90)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E5694D0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_2_OFFSET UNITYSDK_OFFSET(0x1E569560)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_3_OFFSET UNITYSDK_OFFSET(0x1E569390)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_4_OFFSET UNITYSDK_OFFSET(0x1E569600)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_5_OFFSET UNITYSDK_OFFSET(0x1E5698B0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_6_OFFSET UNITYSDK_OFFSET(0x1E569950)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_7_OFFSET UNITYSDK_OFFSET(0x1E569760)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_8_OFFSET UNITYSDK_OFFSET(0x1E569A00)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_9_OFFSET UNITYSDK_OFFSET(0x1E569BD0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_OFFSET UNITYSDK_OFFSET(0x1E569240)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_TOJSONSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E56A2B0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_TOJSONSTRING_2_OFFSET UNITYSDK_OFFSET(0x1E56A480)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_TOJSONSTRING_3_OFFSET UNITYSDK_OFFSET(0x1E56A340)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_TOJSONSTRING_OFFSET UNITYSDK_OFFSET(0x1E56A1B0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5690F0)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer_NonGeneric_TypeDefinitionIndex = 91082;

	class JsonSerializer_NonGeneric : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Type*, ::Utf8Json::JsonSerializer_NonGeneric_CompiledMethods*>** StaticGet_CreateCompiledMethods()
		{
			return (::System::Func_2<::System::Type*, ::Utf8Json::JsonSerializer_NonGeneric_CompiledMethods*>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializer_NonGeneric_TypeDefinitionIndex)->GetStaticField(0x4F180);
		}
		static ::Utf8Json::Internal::ThreadsafeTypeKeyHashTable_1<::Utf8Json::JsonSerializer_NonGeneric_CompiledMethods*>** StaticGet_serializes()
		{
			return (::Utf8Json::Internal::ThreadsafeTypeKeyHashTable_1<::Utf8Json::JsonSerializer_NonGeneric_CompiledMethods*>**)Il2CppClass::FromTypeDefinitionIndex(JsonSerializer_NonGeneric_TypeDefinitionIndex)->GetStaticField(0x4F188);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC__CCTOR_OFFSET))();
		}

		static ::Utf8Json::JsonSerializer_NonGeneric_CompiledMethods* GetOrAdd(::System::Type* type)
		{
			return ((::Utf8Json::JsonSerializer_NonGeneric_CompiledMethods*(*)(::System::Type*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_GETORADD_OFFSET))(type);
		}

		static ::Il2CppArray<::System::Byte>* Serialize(::System::Object* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_OFFSET))(value);
		}

		static ::Il2CppArray<::System::Byte>* Serialize_1(::System::Type* type, ::System::Object* value)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_1_OFFSET))(type, value);
		}

		static ::Il2CppArray<::System::Byte>* Serialize_2(::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_2_OFFSET))(value, resolver);
		}

		static ::Il2CppArray<::System::Byte>* Serialize_3(::System::Type* type, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Type*, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_3_OFFSET))(type, value, resolver);
		}

		static ::System::Void Serialize_4(::System::IO::Stream* stream, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_4_OFFSET))(stream, value);
		}

		static ::System::Void Serialize_5(::System::Type* type, ::System::IO::Stream* stream, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IO::Stream*, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_5_OFFSET))(type, stream, value);
		}

		static ::System::Void Serialize_6(::System::IO::Stream* stream, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::System::IO::Stream*, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_6_OFFSET))(stream, value, resolver);
		}

		static ::System::Void Serialize_7(::System::Type* type, ::System::IO::Stream* stream, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::System::Type*, ::System::IO::Stream*, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_7_OFFSET))(type, stream, value, resolver);
		}

		static ::System::Void Serialize_8(::Utf8Json::JsonWriter& writer, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::Utf8Json::JsonWriter&, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_8_OFFSET))(writer, value, resolver);
		}

		static ::System::Void Serialize_9(::System::Type* type, ::Utf8Json::JsonWriter& writer, ::System::Object* value)
		{
			return ((::System::Void(*)(::System::Type*, ::Utf8Json::JsonWriter&, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_9_OFFSET))(type, writer, value);
		}

		static ::System::Void Serialize_10(::System::Type* type, ::Utf8Json::JsonWriter& writer, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::System::Type*, ::Utf8Json::JsonWriter&, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZE_10_OFFSET))(type, writer, value, resolver);
		}

		static ::System::ArraySegment_1<::System::Byte> SerializeUnsafe(::System::Object* value)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEUNSAFE_OFFSET))(value);
		}

		static ::System::ArraySegment_1<::System::Byte> SerializeUnsafe_1(::System::Type* type, ::System::Object* value)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEUNSAFE_1_OFFSET))(type, value);
		}

		static ::System::ArraySegment_1<::System::Byte> SerializeUnsafe_2(::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEUNSAFE_2_OFFSET))(value, resolver);
		}

		static ::System::ArraySegment_1<::System::Byte> SerializeUnsafe_3(::System::Type* type, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::ArraySegment_1<::System::Byte>(*)(::System::Type*, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEUNSAFE_3_OFFSET))(type, value, resolver);
		}

		static ::System::String* ToJsonString(::System::Object* value)
		{
			return ((::System::String*(*)(::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_TOJSONSTRING_OFFSET))(value);
		}

		static ::System::String* ToJsonString_1(::System::Type* type, ::System::Object* value)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_TOJSONSTRING_1_OFFSET))(type, value);
		}

		static ::System::String* ToJsonString_2(::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::String*(*)(::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_TOJSONSTRING_2_OFFSET))(value, resolver);
		}

		static ::System::String* ToJsonString_3(::System::Type* type, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::String*(*)(::System::Type*, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_TOJSONSTRING_3_OFFSET))(type, value, resolver);
		}

		static ::System::Object* Deserialize(::System::Type* type, ::System::String* json)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_OFFSET))(type, json);
		}

		static ::System::Object* Deserialize_1(::System::Type* type, ::System::String* json, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::String*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_1_OFFSET))(type, json, resolver);
		}

		static ::System::Object* Deserialize_2(::System::Type* type, ::Il2CppArray<::System::Byte>* bytes)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_2_OFFSET))(type, bytes);
		}

		static ::System::Object* Deserialize_3(::System::Type* type, ::Il2CppArray<::System::Byte>* bytes, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Byte>*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_3_OFFSET))(type, bytes, resolver);
		}

		static ::System::Object* Deserialize_4(::System::Type* type, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_4_OFFSET))(type, bytes, offset);
		}

		static ::System::Object* Deserialize_5(::System::Type* type, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 offset, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Object*(*)(::System::Type*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_5_OFFSET))(type, bytes, offset, resolver);
		}

		static ::System::Object* Deserialize_6(::System::Type* type, ::System::IO::Stream* stream)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_6_OFFSET))(type, stream);
		}

		static ::System::Object* Deserialize_7(::System::Type* type, ::System::IO::Stream* stream, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Object*(*)(::System::Type*, ::System::IO::Stream*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_7_OFFSET))(type, stream, resolver);
		}

		static ::System::Object* Deserialize_8(::System::Type* type, ::Utf8Json::JsonReader& reader)
		{
			return ((::System::Object*(*)(::System::Type*, ::Utf8Json::JsonReader&))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_8_OFFSET))(type, reader);
		}

		static ::System::Object* Deserialize_9(::System::Type* type, ::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Object*(*)(::System::Type*, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZE_9_OFFSET))(type, reader, resolver);
		}
	};
}
