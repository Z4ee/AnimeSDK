#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Uri; }
namespace System::Net { class ICredentials; }
namespace System::Net { class WebProxy; }

#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GETPROXY_OFFSET UNITYSDK_OFFSET(0x1872F9C0)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_GET_CREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1872FAD0)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPEROPAQUE_ISBYPASSED_OFFSET UNITYSDK_OFFSET(0x1872F9E0)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_WebProxyWrapperOpaque_TypeDefinitionIndex = 2756;

	class WebRequest_WebProxyWrapperOpaque : public ::System::Object
	{
	public:
		::System::Net::WebProxy* webProxy; // 0x10

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
	};
}
