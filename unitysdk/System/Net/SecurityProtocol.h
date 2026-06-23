#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Authentication/SslProtocols.h"

#define SYSTEM_NET_SECURITYPROTOCOL_THROWONNOTALLOWED_OFFSET UNITYSDK_OFFSET(0x1C8A4EC0)

namespace System::Net
{
	inline static constexpr unsigned int SecurityProtocol_TypeDefinitionIndex = 3259;

	class SecurityProtocol : public ::System::Object
	{
	public:
		// static const ::System::Security::Authentication::SslProtocols AllowedSecurityProtocols; // 0x0
		// static const ::System::Security::Authentication::SslProtocols DefaultSecurityProtocols; // 0x0
		// static const ::System::Security::Authentication::SslProtocols SystemDefaultSecurityProtocols; // 0x0

		static ::System::Void ThrowOnNotAllowed(::System::Security::Authentication::SslProtocols protocols, ::System::Boolean allowNone)
		{
			return ((::System::Void(*)(::System::Security::Authentication::SslProtocols, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_SECURITYPROTOCOL_THROWONNOTALLOWED_OFFSET))(protocols, allowNone);
		}
	};
}
