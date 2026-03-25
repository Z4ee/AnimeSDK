#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/Permissions/SecurityPermissionFlag.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_CAST_OFFSET UNITYSDK_OFFSET(0x161E9420)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISEMPTY_OFFSET UNITYSDK_OFFSET(0x161E9490)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x161E8F30)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x161E9410)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x161E94A0)
#define SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x161E93E0)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int SecurityPermission_TypeDefinitionIndex = 959;

	class SecurityPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Security::Permissions::SecurityPermissionFlag flags; // 0x10

		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_TOXML_OFFSET))(this);
		}

		::System::Boolean IsEmpty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_ISEMPTY_OFFSET))(this);
		}

		::System::Security::Permissions::SecurityPermission* Cast(::System::Security::IPermission* target)
		{
			return ((::System::Security::Permissions::SecurityPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_SECURITYPERMISSION_CAST_OFFSET))(this, target);
		}
	};
}
