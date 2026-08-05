#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class NotImplementedException; }
namespace System { class NotSupportedException; }
namespace System::Net { class WebException; }

#define SYSTEM_NET_EXCEPTIONHELPER_GET_CACHEENTRYNOTFOUNDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD19F60)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_ISOLATEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD19D50)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_METHODNOTIMPLEMENTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD19A50)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_METHODNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD19BD0)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTIMPLEMENTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD19B10)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD19C90)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_REQUESTABORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD19E60)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_REQUESTPROHIBITEDBYCACHEPOLICYEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1DD1A060)

namespace System::Net
{
	inline static constexpr unsigned int ExceptionHelper_TypeDefinitionIndex = 3297;

	class ExceptionHelper : public ::System::Object
	{
	public:
		static ::System::NotImplementedException* get_MethodNotImplementedException()
		{
			return ((::System::NotImplementedException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_METHODNOTIMPLEMENTEDEXCEPTION_OFFSET))();
		}

		static ::System::NotImplementedException* get_PropertyNotImplementedException()
		{
			return ((::System::NotImplementedException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTIMPLEMENTEDEXCEPTION_OFFSET))();
		}

		static ::System::NotSupportedException* get_MethodNotSupportedException()
		{
			return ((::System::NotSupportedException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_METHODNOTSUPPORTEDEXCEPTION_OFFSET))();
		}

		static ::System::NotSupportedException* get_PropertyNotSupportedException()
		{
			return ((::System::NotSupportedException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTSUPPORTEDEXCEPTION_OFFSET))();
		}

		static ::System::Net::WebException* get_IsolatedException()
		{
			return ((::System::Net::WebException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_ISOLATEDEXCEPTION_OFFSET))();
		}

		static ::System::Net::WebException* get_RequestAbortedException()
		{
			return ((::System::Net::WebException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_REQUESTABORTEDEXCEPTION_OFFSET))();
		}

		static ::System::Net::WebException* get_CacheEntryNotFoundException()
		{
			return ((::System::Net::WebException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_CACHEENTRYNOTFOUNDEXCEPTION_OFFSET))();
		}

		static ::System::Net::WebException* get_RequestProhibitedByCachePolicyException()
		{
			return ((::System::Net::WebException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_REQUESTPROHIBITEDBYCACHEPOLICYEXCEPTION_OFFSET))();
		}
	};
}
