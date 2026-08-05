#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"
#include "unitysdk/System/Security/Permissions/TypeDescriptorPermissionFlags.h"

namespace System::Security { class IPermission; }

#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET UNITYSDK_OFFSET(0x1DED0120)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_GET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1DED0020)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_GET_RESTRICTEDREGISTRATIONACCESS_OFFSET UNITYSDK_OFFSET(0x1DED00A0)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_SET_FLAGS_OFFSET UNITYSDK_OFFSET(0x1DED0060)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_SET_RESTRICTEDREGISTRATIONACCESS_OFFSET UNITYSDK_OFFSET(0x1DED00E0)
#define SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DED0010)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int TypeDescriptorPermissionAttribute_TypeDefinitionIndex = 4107;

	class TypeDescriptorPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::Security::Permissions::TypeDescriptorPermissionFlags get_Flags()
		{
			return ((::System::Security::Permissions::TypeDescriptorPermissionFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_GET_FLAGS_OFFSET))(this);
		}

		::System::Void set_Flags(::System::Security::Permissions::TypeDescriptorPermissionFlags value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::TypeDescriptorPermissionFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_SET_FLAGS_OFFSET))(this, value);
		}

		::System::Boolean get_RestrictedRegistrationAccess()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_GET_RESTRICTEDREGISTRATIONACCESS_OFFSET))(this);
		}

		::System::Void set_RestrictedRegistrationAccess(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_SET_RESTRICTEDREGISTRATIONACCESS_OFFSET))(this, value);
		}

		::System::Security::IPermission* CreatePermission()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_TYPEDESCRIPTORPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET))(this);
		}
	};
}
