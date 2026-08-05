#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEJSONWRITER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1FAB3F80)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEJSONWRITER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1FAB4010)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEJSONWRITER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1FAB3C40)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEJSONWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FAB3C20)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer_NonGeneric_SerializeJsonWriter_TypeDefinitionIndex = 95016;

	class JsonSerializer_NonGeneric_SerializeJsonWriter : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEJSONWRITER__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::Utf8Json::JsonWriter& writer, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEJSONWRITER_INVOKE_OFFSET))(this, writer, value, resolver);
		}

		::System::IAsyncResult* BeginInvoke(::Utf8Json::JsonWriter& writer, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* resolver, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEJSONWRITER_BEGININVOKE_OFFSET))(this, writer, value, resolver, callback, object);
		}

		::System::Void EndInvoke(::Utf8Json::JsonWriter& writer, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_SERIALIZEJSONWRITER_ENDINVOKE_OFFSET))(this, writer, result);
		}
	};
}
