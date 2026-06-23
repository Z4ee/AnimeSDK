#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_GET_HASSTRINGVALUES_OFFSET UNITYSDK_OFFSET(0x1D48CA40)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_GET_VALUES_OFFSET UNITYSDK_OFFSET(0x1D48B580)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_PARSEDTOSTRING_OFFSET UNITYSDK_OFFSET(0x1D48C9C0)
#define SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET__CTOR_OFFSET UNITYSDK_OFFSET(0x1D48B570)

namespace System::Net::Http::Headers
{
	inline static constexpr unsigned int HttpHeaders_HeaderBucket_TypeDefinitionIndex = 26143;

	class HttpHeaders_HeaderBucket : public ::System::Object
	{
	public:
		::System::Func_2<::System::Object*, ::System::String*>* CustomToString; // 0x10
		::System::Object* Parsed; // 0x18
		::System::Collections::Generic::List_1<::System::String*>* values; // 0x20

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

		::System::String* ParsedToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTP_HEADERS_HTTPHEADERS_HEADERBUCKET_PARSEDTOSTRING_OFFSET))(this);
		}
	};
}
