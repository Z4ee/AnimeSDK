#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/PerformanceCounterPermissionAccess.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"

namespace System { class String; }
namespace System::Security { class IPermission; }

#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET UNITYSDK_OFFSET(0x1C88FC90)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_GET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1C88FB10)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_GET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1C88FB90)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_GET_PERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1C88FC10)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_SET_CATEGORYNAME_OFFSET UNITYSDK_OFFSET(0x1C88FB50)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_SET_MACHINENAME_OFFSET UNITYSDK_OFFSET(0x1C88FBD0)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_SET_PERMISSIONACCESS_OFFSET UNITYSDK_OFFSET(0x1C88FC50)
#define SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C88FB00)

namespace System::Diagnostics
{
	inline static constexpr unsigned int PerformanceCounterPermissionAttribute_TypeDefinitionIndex = 4187;

	class PerformanceCounterPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::String* get_CategoryName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_GET_CATEGORYNAME_OFFSET))(this);
		}

		::System::Void set_CategoryName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_SET_CATEGORYNAME_OFFSET))(this, value);
		}

		::System::String* get_MachineName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_GET_MACHINENAME_OFFSET))(this);
		}

		::System::Void set_MachineName(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_SET_MACHINENAME_OFFSET))(this, value);
		}

		::System::Diagnostics::PerformanceCounterPermissionAccess get_PermissionAccess()
		{
			return ((::System::Diagnostics::PerformanceCounterPermissionAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_GET_PERMISSIONACCESS_OFFSET))(this);
		}

		::System::Void set_PermissionAccess(::System::Diagnostics::PerformanceCounterPermissionAccess value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::PerformanceCounterPermissionAccess))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_SET_PERMISSIONACCESS_OFFSET))(this, value);
		}

		::System::Security::IPermission* CreatePermission()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PERFORMANCECOUNTERPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET))(this);
		}
	};
}
