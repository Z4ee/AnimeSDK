#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Utf8Json/JsonReader.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZEJSONREADER_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C1D5950)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZEJSONREADER_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C1D59D0)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZEJSONREADER_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C1D5610)
#define UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZEJSONREADER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1D5600)

namespace Utf8Json
{
	inline static constexpr unsigned int JsonSerializer_NonGeneric_DeserializeJsonReader_TypeDefinitionIndex = 85510;

	class JsonSerializer_NonGeneric_DeserializeJsonReader : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZEJSONREADER__CTOR_OFFSET))(this, object, method);
		}

		::System::Object* Invoke(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* resolver)
		{
			return ((::System::Object*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZEJSONREADER_INVOKE_OFFSET))(this, reader, resolver);
		}

		::System::IAsyncResult* BeginInvoke(::Utf8Json::JsonReader& reader, ::Utf8Json::IJsonFormatterResolver* resolver, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Utf8Json::JsonReader&, ::Utf8Json::IJsonFormatterResolver*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZEJSONREADER_BEGININVOKE_OFFSET))(this, reader, resolver, callback, object);
		}

		::System::Object* EndInvoke(::Utf8Json::JsonReader& reader, ::System::IAsyncResult* result)
		{
			return ((::System::Object*(*)(::PVOID, ::Utf8Json::JsonReader&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UTF8JSON_JSONSERIALIZER_NONGENERIC_DESERIALIZEJSONREADER_ENDINVOKE_OFFSET))(this, reader, result);
		}
	};
}
