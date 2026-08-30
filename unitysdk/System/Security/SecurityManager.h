#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_SECURITYMANAGER_CHECKELEVATEDPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x166D9780)
#define SYSTEM_SECURITY_SECURITYMANAGER_ENSUREELEVATEDPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x166D9790)
#define SYSTEM_SECURITY_SECURITYMANAGER_GET_SECURITYENABLED_OFFSET UNITYSDK_OFFSET(0x166D1C60)

namespace System::Security
{
	inline static constexpr unsigned int SecurityManager_TypeDefinitionIndex = 953;

	class SecurityManager : public ::System::Object
	{
	public:
		static ::System::Boolean get_SecurityEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYMANAGER_GET_SECURITYENABLED_OFFSET))();
		}

		static ::System::Boolean CheckElevatedPermissions()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYMANAGER_CHECKELEVATEDPERMISSIONS_OFFSET))();
		}

		static ::System::Void EnsureElevatedPermissions()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYMANAGER_ENSUREELEVATEDPERMISSIONS_OFFSET))();
		}
	};
}
