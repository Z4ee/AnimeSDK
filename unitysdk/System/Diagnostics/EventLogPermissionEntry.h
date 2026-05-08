#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/EventLogPermissionAccess.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRY_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1AFE0470)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRY_GET_PERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1AFE04B0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE0430)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogPermissionEntry_TypeDefinitionIndex = 4172;

	class EventLogPermissionEntry : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Diagnostics::EventLogPermissionAccess permissionAccess, ::System::String* machineName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLogPermissionAccess, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRY__CTOR_OFFSET))(this, permissionAccess, machineName);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRY_GET_MACHINENAME_OFFSET))(this);
		}

		::System::Diagnostics::EventLogPermissionAccess get_PermissionAccess()
		{
			return ((::System::Diagnostics::EventLogPermissionAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRY_GET_PERMISSIONACCESS_OFFSET))(this);
		}
	};
}
