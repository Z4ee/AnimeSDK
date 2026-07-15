#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_SECURITYMANAGER_CHECKELEVATEDPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x150BD3A0)
#define SYSTEM_SECURITY_SECURITYMANAGER_ENSUREELEVATEDPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x150BD3B0)
#define SYSTEM_SECURITY_SECURITYMANAGER_GET_SECURITYENABLED_OFFSET UNITYSDK_OFFSET(0x150B58E0)

namespace System::Security
{
	inline static constexpr unsigned int SecurityManager_TypeDefinitionIndex = 946;

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
