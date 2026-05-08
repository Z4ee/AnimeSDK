#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"

namespace System::Security { class IPermission; }

#define SYSTEM_NET_DNSPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET UNITYSDK_OFFSET(0x18FB39F0)
#define SYSTEM_NET_DNSPERMISSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x18FB39E0)

namespace System::Net
{
	inline static constexpr unsigned int DnsPermissionAttribute_TypeDefinitionIndex = 4112;

	class DnsPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSIONATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::Security::IPermission* CreatePermission()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNSPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET))(this);
		}
	};
}
