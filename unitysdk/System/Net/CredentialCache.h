#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Net { class ICredentials; }

#define SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTCREDENTIALS_OFFSET UNITYSDK_OFFSET(0x1B00DBD0)

namespace System::Net
{
	inline static constexpr unsigned int CredentialCache_TypeDefinitionIndex = 2728;

	class CredentialCache : public ::System::Object
	{
	public:
		static ::System::Net::ICredentials* get_DefaultCredentials()
		{
			return ((::System::Net::ICredentials*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_CREDENTIALCACHE_GET_DEFAULTCREDENTIALS_OFFSET))();
		}
	};
}
