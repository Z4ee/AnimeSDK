#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebProxy; }

#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GETPROXY_OFFSET UNITYSDK_OFFSET(0x1AFCDD40)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1AFCDE50)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x1AFCDD60)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_WebProxyWrapperOpaque_TypeDefinitionIndex = 2757;

	class WebRequest_WebProxyWrapperOpaque : public ::System::Object
	{
	public:
		::System::Net::WebProxy* webProxy; // 0x10

		::System::Uri* GetProxy(::System::Uri* a1)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GETPROXY_OFFSET))(this, a1);
		}

		::System::Boolean IsBypassed(::System::Uri* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_ISBYPASSED_OFFSET))(this, a1);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GET_CREDENTIALS_OFFSET))(this);
		}
	};
}
