#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/Permissions/ReflectionPermissionFlag.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_CAST_OFFSET UNITYSDK_OFFSET(0x19EDB2D0)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x19EDAF70)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x19EDAFC0)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x19EDB100)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x19EDB350)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x19EDB340)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x19EDAED0)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x19EDB3F0)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_UNION_OFFSET UNITYSDK_OFFSET(0x19EDB560)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19EDAEC0)
#define SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x19EDAE90)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int ReflectionPermission_TypeDefinitionIndex = 956;

	class ReflectionPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Security::Permissions::ReflectionPermissionFlag flags; // 0x10

		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Security::Permissions::ReflectionPermissionFlag flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::ReflectionPermissionFlag))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION__CTOR_1_OFFSET))(this, flag);
		}

		::System::Void set_Flags(::System::Security::Permissions::ReflectionPermissionFlag value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::ReflectionPermissionFlag))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_COPY_OFFSET))(this);
		}

		::System::Void FromXml(::System::Security::SecurityElement* esd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_FROMXML_OFFSET))(this, esd);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_TOXML_OFFSET))(this);
		}

		::System::Security::IPermission* Union(::System::Security::IPermission* other)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_UNION_OFFSET))(this, other);
		}

		::System::Security::Permissions::ReflectionPermission* Cast(::System::Security::IPermission* target)
		{
			return ((::System::Security::Permissions::ReflectionPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_REFLECTIONPERMISSION_CAST_OFFSET))(this, target);
		}
	};
}
