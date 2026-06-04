#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityPermissionFlag.h"

#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x185CF390)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_SET_SKIPVERIFICATION_OFFSET UNITYSDK_OFFSET(0x185CF380)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int SecurityPermissionAttribute_TypeDefinitionIndex = 961;

	class SecurityPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Security::Permissions::SecurityPermissionFlag m_Flags; // 0x18

		::System::Void set_SkipVerification(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_SET_SKIPVERIFICATION_OFFSET))(this, a1);
		}

		::System::Void set_Flags(::System::Security::Permissions::SecurityPermissionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityPermissionFlag))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_SET_FLAGS_OFFSET))(this, a1);
		}
	};
}
