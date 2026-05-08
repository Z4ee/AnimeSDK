#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/Utf8Json/JsonWriter.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace Utf8Json { class IJsonFormatterResolver; }

#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1C21B7E0)
#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1C21B880)
#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_INVOKE_OFFSET UNITYSDK_OFFSET(0x1C21B130)
#define UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD__CTOR_OFFSET UNITYSDK_OFFSET(0x1C21B120)

namespace Utf8Json::Formatters
{
	inline static constexpr unsigned int DynamicObjectTypeFallbackFormatter_SerializeMethod_TypeDefinitionIndex = 85747;

	class DynamicObjectTypeFallbackFormatter_SerializeMethod : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Object* dynamicFormatter, ::Utf8Json::JsonWriter& writer, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::Utf8Json::JsonWriter&, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_INVOKE_OFFSET))(this, dynamicFormatter, writer, value, formatterResolver);
		}

		::System::IAsyncResult* BeginInvoke(::System::Object* dynamicFormatter, ::Utf8Json::JsonWriter& writer, ::System::Object* value, ::Utf8Json::IJsonFormatterResolver* formatterResolver, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Object*, ::Utf8Json::JsonWriter&, ::System::Object*, ::Utf8Json::IJsonFormatterResolver*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_BEGININVOKE_OFFSET))(this, dynamicFormatter, writer, value, formatterResolver, callback, object);
		}

		::System::Void EndInvoke(::Utf8Json::JsonWriter& writer, ::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::Utf8Json::JsonWriter&, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + UTF8JSON_FORMATTERS_DYNAMICOBJECTTYPEFALLBACKFORMATTER_SERIALIZEMETHOD_ENDINVOKE_OFFSET))(this, writer, result);
		}
	};
}
