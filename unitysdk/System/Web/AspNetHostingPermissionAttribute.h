#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"
#include "unitysdk/System/Web/AspNetHostingPermissionLevel.h"

namespace System::Security { class IPermission; }

#define SYSTEM_WEB_ASPNETHOSTINGPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET UNITYSDK_OFFSET(0x1B1EF0F0)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSIONATTRIBUTE_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B1EF070)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSIONATTRIBUTE_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1B1EF0B0)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1EF060)

namespace System::Web
{
	inline static constexpr unsigned int AspNetHostingPermissionAttribute_TypeDefinitionIndex = 4103;

	class AspNetHostingPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSIONATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::Web::AspNetHostingPermissionLevel get_Level()
		{
			return ((::System::Web::AspNetHostingPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSIONATTRIBUTE_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Web::AspNetHostingPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Web::AspNetHostingPermissionLevel))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSIONATTRIBUTE_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Security::IPermission* CreatePermission()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET))(this);
		}
	};
}
