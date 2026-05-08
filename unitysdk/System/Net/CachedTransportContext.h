#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TransportContext.h"
#include "unitysdk/System/Security/Authentication/ExtendedProtection/ChannelBindingKind.h"

namespace System::Security::Authentication::ExtendedProtection { class ChannelBinding; }

#define SYSTEM_NET_CACHEDTRANSPORTCONTEXT_GETCHANNELBINDING_OFFSET UNITYSDK_OFFSET(0x19EE9DF0)
#define SYSTEM_NET_CACHEDTRANSPORTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x19EE9DE0)

namespace System::Net
{
	inline static constexpr unsigned int CachedTransportContext_TypeDefinitionIndex = 3335;

	class CachedTransportContext : public ::System::Net::TransportContext
	{
	public:
		::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding; // 0x10

		::System::Void _ctor(::System::Security::Authentication::ExtendedProtection::ChannelBinding* binding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ChannelBinding*))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHEDTRANSPORTCONTEXT__CTOR_OFFSET))(this, binding);
		}

		::System::Security::Authentication::ExtendedProtection::ChannelBinding* GetChannelBinding(::System::Security::Authentication::ExtendedProtection::ChannelBindingKind kind)
		{
			return ((::System::Security::Authentication::ExtendedProtection::ChannelBinding*(*)(::PVOID, ::System::Security::Authentication::ExtendedProtection::ChannelBindingKind))((::PBYTE)hIl2Cpp + SYSTEM_NET_CACHEDTRANSPORTCONTEXT_GETCHANNELBINDING_OFFSET))(this, kind);
		}
	};
}
