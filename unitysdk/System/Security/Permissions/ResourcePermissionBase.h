#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }
namespace System::Security::Permissions { class ResourcePermissionBaseEntry; }

#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ADDPERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1C8ABE90)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C8ABED0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_COPY_OFFSET UNITYSDK_OFFSET(0x1C8ABF10)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_FROMXML_OFFSET UNITYSDK_OFFSET(0x1C8ABF50)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GETPERMISSIONENTRIES_OFFSET UNITYSDK_OFFSET(0x1C8ABF90)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GET_PERMISSIONACCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1C8ABD90)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GET_TAGNAMES_OFFSET UNITYSDK_OFFSET(0x1C8ABE10)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1C8ABFD0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1C8AC010)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1C8AC050)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_REMOVEPERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1C8AC090)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_SET_PERMISSIONACCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1C8ABDD0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_SET_TAGNAMES_OFFSET UNITYSDK_OFFSET(0x1C8ABE50)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_TOXML_OFFSET UNITYSDK_OFFSET(0x1C8AC0D0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C8ABD50)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8ABD10)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int ResourcePermissionBase_TypeDefinitionIndex = 4084;

	class ResourcePermissionBase : public ::System::Security::CodeAccessPermission
	{
	public:
		// static const ::System::String* Any; // 0x0
		// static const ::System::String* Local; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE__CTOR_1_OFFSET))(this, state);
		}

		::System::Type* get_PermissionAccessType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GET_PERMISSIONACCESSTYPE_OFFSET))(this);
		}

		::System::Void set_PermissionAccessType(::System::Type* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_SET_PERMISSIONACCESSTYPE_OFFSET))(this, value);
		}

		::Il2CppArray<::System::String*>* get_TagNames()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GET_TAGNAMES_OFFSET))(this);
		}

		::System::Void set_TagNames(::Il2CppArray<::System::String*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_SET_TAGNAMES_OFFSET))(this, value);
		}

		::System::Void AddPermissionAccess(::System::Security::Permissions::ResourcePermissionBaseEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::ResourcePermissionBaseEntry*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ADDPERMISSIONACCESS_OFFSET))(this, entry);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_CLEAR_OFFSET))(this);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_COPY_OFFSET))(this);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_FROMXML_OFFSET))(this, securityElement);
		}

		::Il2CppArray<::System::Security::Permissions::ResourcePermissionBaseEntry*>* GetPermissionEntries()
		{
			return ((::Il2CppArray<::System::Security::Permissions::ResourcePermissionBaseEntry*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GETPERMISSIONENTRIES_OFFSET))(this);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_INTERSECT_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Void RemovePermissionAccess(::System::Security::Permissions::ResourcePermissionBaseEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::ResourcePermissionBaseEntry*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_REMOVEPERMISSIONACCESS_OFFSET))(this, entry);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_TOXML_OFFSET))(this);
		}
	};
}
