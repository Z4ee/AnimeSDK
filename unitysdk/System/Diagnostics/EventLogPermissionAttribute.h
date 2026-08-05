#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/EventLogPermissionAccess.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"

namespace System { class String; }
namespace System::Security { class IPermission; }

#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET UNITYSDK_OFFSET(0x1DB79A50)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1DB79950)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_GET_PERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1DB799D0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_SET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1DB79990)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_SET_PERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1DB79A10)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB79940)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogPermissionAttribute_TypeDefinitionIndex = 4173;

	class EventLogPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_GET_MACHINENAME_OFFSET))(this);
		}

		::System::Void set_MachineName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_SET_MACHINENAME_OFFSET))(this, value);
		}

		::System::Diagnostics::EventLogPermissionAccess get_PermissionAccess()
		{
			return ((::System::Diagnostics::EventLogPermissionAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_GET_PERMISSIONACCESS_OFFSET))(this);
		}

		::System::Void set_PermissionAccess(::System::Diagnostics::EventLogPermissionAccess value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLogPermissionAccess))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_SET_PERMISSIONACCESS_OFFSET))(this, value);
		}

		::System::Security::IPermission* CreatePermission()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET))(this);
		}
	};
}
