#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASEENTRY_GET_PERMISSIONACCESSPATH_OFFSET UNITYSDK_OFFSET(0x18FC8A10)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASEENTRY_GET_PERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x18FC89D0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASEENTRY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18FC8990)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASEENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x18FC8950)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int ResourcePermissionBaseEntry_TypeDefinitionIndex = 4086;

	class ResourcePermissionBaseEntry : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASEENTRY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 permissionAccess, ::Il2CppArray<::System::String*>* permissionAccessPath)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASEENTRY__CTOR_1_OFFSET))(this, permissionAccess, permissionAccessPath);
		}

		::System::Int32 get_PermissionAccess()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASEENTRY_GET_PERMISSIONACCESS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_PermissionAccessPath()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASEENTRY_GET_PERMISSIONACCESSPATH_OFFSET))(this);
		}
	};
}
