#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterPermissionAccess.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRY_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1C012F80)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRY_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1C012FC0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRY_GET_PERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1C013000)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C012F40)

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterPermissionEntry_TypeDefinitionIndex = 4185;

	class PerformanceCounterPermissionEntry : public ::System::Object
	{
	public:
		::System::Void _ctor(::System::Diagnostics::PerformanceCounterPermissionAccess permissionAccess, ::System::String* machineName, ::System::String* categoryName)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::PerformanceCounterPermissionAccess, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRY__CTOR_OFFSET))(this, permissionAccess, machineName, categoryName);
		}

		::System::String* get_CategoryName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRY_GET_CATEGORYNAME_OFFSET))(this);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRY_GET_MACHINENAME_OFFSET))(this);
		}

		::System::Diagnostics::PerformanceCounterPermissionAccess get_PermissionAccess()
		{
			return ((::System::Diagnostics::PerformanceCounterPermissionAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONENTRY_GET_PERMISSIONACCESS_OFFSET))(this);
		}
	};
}
