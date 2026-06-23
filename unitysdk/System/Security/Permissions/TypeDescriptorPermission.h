#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/Permissions/TypeDescriptorPermissionFlags.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x1C66F430)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x1C66F8E0)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C66F280)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1C66F5C0)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1C66F480)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C66F290)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_RESET_OFFSET UNITYSDK_OFFSET(0x1C66F250)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_SETUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C66F180)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1C66F260)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x1C66F720)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_UNION_OFFSET UNITYSDK_OFFSET(0x1C66F2A0)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_VERIFYACCESS_OFFSET UNITYSDK_OFFSET(0x1C66F1B0)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_VERIFYFLAGS_OFFSET UNITYSDK_OFFSET(0x1C66FC30)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C66F190)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C66F110)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int TypeDescriptorPermission_TypeDefinitionIndex = 3143;

	class TypeDescriptorPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Security::Permissions::TypeDescriptorPermissionFlags m_flags; // 0x10

		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Security::Permissions::TypeDescriptorPermissionFlags flag)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::TypeDescriptorPermissionFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION__CTOR_1_OFFSET))(this, flag);
		}

		::System::Void SetUnrestricted(::System::Boolean unrestricted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_SETUNRESTRICTED_OFFSET))(this, unrestricted);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_RESET_OFFSET))(this);
		}

		::System::Void set_Flags(::System::Security::Permissions::TypeDescriptorPermissionFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::TypeDescriptorPermissionFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Security::Permissions::TypeDescriptorPermissionFlags get_Flags()
		{
			return ((::System::Security::Permissions::TypeDescriptorPermissionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_GET_FLAGS_OFFSET))(this);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::IPermission* Union(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_UNION_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_COPY_OFFSET))(this);
		}

		::System::Void VerifyAccess(::System::Security::Permissions::TypeDescriptorPermissionFlags type)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::TypeDescriptorPermissionFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_VERIFYACCESS_OFFSET))(this, type);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_TOXML_OFFSET))(this);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_FROMXML_OFFSET))(this, securityElement);
		}

		static ::System::Void VerifyFlags(::System::Security::Permissions::TypeDescriptorPermissionFlags flags)
		{
			return ((::System::Void(*)(::System::Security::Permissions::TypeDescriptorPermissionFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSION_VERIFYFLAGS_OFFSET))(flags);
		}
	};
}
