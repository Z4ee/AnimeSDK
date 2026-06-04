#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class NotImplementedException; }
namespace System { class NotSupportedException; }
namespace System::Net { class WebException; }

#define SYSTEM_NET_EXCEPTIONHELPER_GET_METHODNOTIMPLEMENTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF6A130)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTIMPLEMENTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF6A040)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTSUPPORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF6F040)
#define SYSTEM_NET_EXCEPTIONHELPER_GET_REQUESTABORTEDEXCEPTION_OFFSET UNITYSDK_OFFSET(0x1AF6F0E0)

namespace System::Net
{
	inline static constexpr unsigned int ExceptionHelper_TypeDefinitionIndex = 2739;

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

		static ::System::NotSupportedException* get_PropertyNotSupportedException()
		{
			return ((::System::NotSupportedException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_PROPERTYNOTSUPPORTEDEXCEPTION_OFFSET))();
		}

		static ::System::Net::WebException* get_RequestAbortedException()
		{
			return ((::System::Net::WebException*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_EXCEPTIONHELPER_GET_REQUESTABORTEDEXCEPTION_OFFSET))();
		}
	};
}
