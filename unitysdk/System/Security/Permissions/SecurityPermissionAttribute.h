#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityPermissionFlag.h"

#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x161E9580)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_SET_SKIPVERIFICATION_OFFSET UNITYSDK_OFFSET(0x161E9570)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int SecurityPermissionAttribute_TypeDefinitionIndex = 960;

	class SecurityPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Security::Permissions::SecurityPermissionFlag m_Flags; // 0x18

		::System::Void set_SkipVerification(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_SET_SKIPVERIFICATION_OFFSET))(this, value);
		}

		::System::Void set_Flags(::System::Security::Permissions::SecurityPermissionFlag value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityPermissionFlag))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSIONATTRIBUTE_SET_FLAGS_OFFSET))(this, value);
		}
	};
}
