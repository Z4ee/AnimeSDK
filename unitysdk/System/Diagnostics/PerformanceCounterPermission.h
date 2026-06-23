#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterPermissionAccess.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Security/Permissions/ResourcePermissionBase.h"

namespace System { class String; }
namespace System::Diagnostics { class PerformanceCounterPermissionEntry; }
namespace System::Diagnostics { class PerformanceCounterPermissionEntryCollection; }

#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION_GET_PERMISSIONENTRIES_OFFSET UNITYSDK_OFFSET(0x1BEC15C0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BEC1500)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BEC1540)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BEC1580)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1BEC14C0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterPermission_TypeDefinitionIndex = 4183;

	class PerformanceCounterPermission : public ::System::Security::Permissions::ResourcePermissionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Diagnostics::PerformanceCounterPermissionAccess permissionAccess, ::System::String* machineName, ::System::String* categoryName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::PerformanceCounterPermissionAccess, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION__CTOR_1_OFFSET))(this, permissionAccess, machineName, categoryName);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Diagnostics::PerformanceCounterPermissionEntry*>* permissionAccessEntries)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::PerformanceCounterPermissionEntry*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION__CTOR_2_OFFSET))(this, permissionAccessEntries);
		}

		::System::Void _ctor_3(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION__CTOR_3_OFFSET))(this, state);
		}

		::System::Diagnostics::PerformanceCounterPermissionEntryCollection* get_PermissionEntries()
		{
			return ((::System::Diagnostics::PerformanceCounterPermissionEntryCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSION_GET_PERMISSIONENTRIES_OFFSET))(this);
		}
	};
}
