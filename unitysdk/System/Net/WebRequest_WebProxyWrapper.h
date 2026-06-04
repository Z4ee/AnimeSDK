#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebRequest_WebProxyWrapperOpaque.h"

namespace System::Net { class WebProxy; }

#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPER_GET_WEBPROXY_OFFSET UNITYSDK_OFFSET(0x1AFCDD30)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_WebProxyWrapper_TypeDefinitionIndex = 2758;

	class WebRequest_WebProxyWrapper : public ::System::Net::WebRequest_WebProxyWrapperOpaque
	{
	public:
		::System::Net::WebProxy* get_WebProxy()
		{
			return ((::System::Net::WebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPER_GET_WEBPROXY_OFFSET))(this);
		}
	};
}
