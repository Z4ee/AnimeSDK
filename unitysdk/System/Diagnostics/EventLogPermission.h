#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/EventLogPermissionAccess.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/Permissions/ResourcePermissionBase.h"

namespace System { class String; }
namespace System::Diagnostics { class EventLogPermissionEntry; }
namespace System::Diagnostics { class EventLogPermissionEntryCollection; }

#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION_GET_PERMISSIONENTRIES_OFFSET UNITYSDK_OFFSET(0x1AA96FE0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1AA96F20)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1AA96F60)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1AA96FA0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA96EE0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogPermission_TypeDefinitionIndex = 4170;

	class EventLogPermission : public ::System::Security::Permissions::ResourcePermissionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::EventLogPermissionAccess permissionAccess, ::System::String* machineName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLogPermissionAccess, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION__CTOR_1_OFFSET))(this, permissionAccess, machineName);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Diagnostics::EventLogPermissionEntry*>* permissionAccessEntries)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::EventLogPermissionEntry*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION__CTOR_2_OFFSET))(this, permissionAccessEntries);
		}

		::System::Void _ctor_3(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION__CTOR_3_OFFSET))(this, state);
		}

		::System::Diagnostics::EventLogPermissionEntryCollection* get_PermissionEntries()
		{
			return ((::System::Diagnostics::EventLogPermissionEntryCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSION_GET_PERMISSIONENTRIES_OFFSET))(this);
		}
	};
}
