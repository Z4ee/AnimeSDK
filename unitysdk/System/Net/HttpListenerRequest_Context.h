#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TransportContext.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/ChannelBindingKind.h"

namespace System::Security::Authentication::ExtendedProtection { class ChannelBinding; }

#define SYSTEM_NET_HTTPLISTENERREQUEST_CONTEXT_GETCHANNELBINDING_OFFSET UNITYSDK_OFFSET(0x1DEC1290)
#define SYSTEM_NET_HTTPLISTENERREQUEST_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEC12E0)

namespace System::Net
{
	inline static constexpr unsigned int HttpListenerRequest_Context_TypeDefinitionIndex = 3528;

	class HttpListenerRequest_Context : public ::System::Net::TransportContext
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_CONTEXT__CTOR_OFFSET))(this);
		}

		::System::Security::Authentication::ExtendedProtection::ChannelBinding* GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind kind)
		{
			return ((::System::Security::Authentication::ExtendedProtection::ChannelBinding*(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPLISTENERREQUEST_CONTEXT_GETCHANNELBINDING_OFFSET))(this, kind);
		}
	};
}
