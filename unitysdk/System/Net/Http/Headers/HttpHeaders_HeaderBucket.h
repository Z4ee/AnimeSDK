#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_GET_HASSTRINGVALUES_OFFSET UNITYSDK_OFFSET(0x19F63BC0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x19F62D80)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_PARSEDTOSTRING_OFFSET UNITYSDK_OFFSET(0x19F63B80)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_SET_VALUES_OFFSET UNITYSDK_OFFSET(0x19F64070)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x19F62D70)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaders_HeaderBucket_TypeDefinitionIndex = 4815;

	class HttpHeaders_HeaderBucket : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* values; // 0x10
		::System::Func_2<::System::Object*, ::System::String*>* CustomToString; // 0x18
		::System::Object* Parsed; // 0x20

		::System::Void _ctor(::System::Object* parsed, ::System::Func_2<::System::Object*, ::System::String*>* converter)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Func_2<::System::Object*, ::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET__CTOR_OFFSET))(this, parsed, converter);
		}

		::System::Boolean get_HasStringValues()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_GET_HASSTRINGVALUES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::String*>* get_Values()
		{
			return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_GET_VALUES_OFFSET))(this);
		}

		::System::Void set_Values(::System::Collections::Generic::List_1<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_SET_VALUES_OFFSET))(this, value);
		}

		::System::String* ParsedToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_PARSEDTOSTRING_OFFSET))(this);
		}
	};
}
