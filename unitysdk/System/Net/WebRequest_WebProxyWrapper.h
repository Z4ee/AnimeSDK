#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebRequest_WebProxyWrapperOpaque.h"

namespace System::Net { class WebProxy; }

#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPER_GET_WEBPROXY_OFFSET UNITYSDK_OFFSET(0x1DD2CAD0)
#define SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD2CAC0)

namespace System::Net
{
	inline static constexpr unsigned int WebRequest_WebProxyWrapper_TypeDefinitionIndex = 3352;

	class WebRequest_WebProxyWrapper : public ::System::Net::WebRequest_WebProxyWrapperOpaque
	{
	public:
		::System::Void _ctor(::System::Net::WebProxy* webProxy)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::WebProxy*))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPER__CTOR_OFFSET))(this, webProxy);
		}

		::System::Net::WebProxy* get_WebProxy()
		{
			return ((::System::Net::WebProxy*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_WEBREQUEST_WEBPROXYWRAPPER_GET_WEBPROXY_OFFSET))(this);
		}
	};
}
