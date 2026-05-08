#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }
namespace System::Security::Permissions { class ResourcePermissionBaseEntry; }

#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ADDPERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1A58CBE0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A58CC20)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_COPY_OFFSET UNITYSDK_OFFSET(0x1A58CC60)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_FROMXML_OFFSET UNITYSDK_OFFSET(0x1A58CCA0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GETPERMISSIONENTRIES_OFFSET UNITYSDK_OFFSET(0x1A58CCE0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GET_PERMISSIONACCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1A58CAE0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_GET_TAGNAMES_OFFSET UNITYSDK_OFFSET(0x1A58CB60)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1A58CD20)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1A58CD60)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1A58CDA0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_REMOVEPERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1A58CDE0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_SET_PERMISSIONACCESSTYPE_OFFSET UNITYSDK_OFFSET(0x1A58CB20)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_SET_TAGNAMES_OFFSET UNITYSDK_OFFSET(0x1A58CBA0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE_TOXML_OFFSET UNITYSDK_OFFSET(0x1A58CE20)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A58CAA0)
#define SYSTEM_SECURITY_PERMISSIONS_RESOURCEPERMISSIONBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A58CA60)

namespace System::Security::Permissions
{
	inline static constexpr unsigned int ResourcePermissionBase_TypeDefinitionIndex = 4085;

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
