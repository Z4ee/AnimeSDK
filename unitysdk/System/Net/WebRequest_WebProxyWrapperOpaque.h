#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class ICredentials; }
namespace System::Net { class ProxyChain; }
namespace System::Net { class WebProxy; }

#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GETPROXIES_OFFSET UNITYSDK_OFFSET(0x1E7EB9E0)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GETPROXY_OFFSET UNITYSDK_OFFSET(0x1E7EB960)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1E7EB9A0)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x1E7EB980)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_SET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1E7EB9C0)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7EB950)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_WebProxyWrapperOpaque_TypeDefinitionIndex = 3351;

	class WebRequest_WebProxyWrapperOpaque : public ::System::Object
	{
	public:
		::System::Net::WebProxy* webProxy; // 0x10

		::System::Void _ctor(::System::Net::WebProxy* webProxy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE__CTOR_OFFSET))(this, webProxy);
		}

		::System::Uri* GetProxy(::System::Uri* destination)
		{
			return ((::System::Uri*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GETPROXY_OFFSET))(this, destination);
		}

		::System::Boolean IsBypassed(::System::Uri* host)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_ISBYPASSED_OFFSET))(this, host);
		}

		::System::Net::ICredentials* get_Credentials()
		{
			return ((::System::Net::ICredentials*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GET_CREDENTIALS_OFFSET))(this);
		}

		::System::Void set_Credentials(::System::Net::ICredentials* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::ICredentials*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_SET_CREDENTIALS_OFFSET))(this, value);
		}

		::System::Net::ProxyChain* GetProxies(::System::Uri* destination)
		{
			return ((::System::Net::ProxyChain*(*)(::PVOID, ::System::Uri*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GETPROXIES_OFFSET))(this, destination);
		}
	};
}
