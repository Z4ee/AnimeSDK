#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"
#include "unitysdk/System/Web/AspNetHostingPermissionLevel.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x1D8A32A0)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x1D8A32E0)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D8A3220)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1D8A3320)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1D8A3360)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1D8A33A0)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x1D8A3260)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x1D8A33E0)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8A31E0)
#define SYSTEM_WEB_ASPNETHOSTINGPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A31A0)

namespace System::Web
{
	inline static constexpr unsigned int AspNetHostingPermission_TypeDefinitionIndex = 4101;

	class AspNetHostingPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION__CTOR_OFFSET))(this, state);
		}

		::System::Void _ctor_1(::System::Web::AspNetHostingPermissionLevel level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Web::AspNetHostingPermissionLevel))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION__CTOR_1_OFFSET))(this, level);
		}

		::System::Web::AspNetHostingPermissionLevel get_Level()
		{
			return ((::System::Web::AspNetHostingPermissionLevel(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::System::Web::AspNetHostingPermissionLevel value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Web::AspNetHostingPermissionLevel))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION_SET_LEVEL_OFFSET))(this, value);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION_COPY_OFFSET))(this);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION_FROMXML_OFFSET))(this, securityElement);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_WEB_ASPNETHOSTINGPERMISSION_TOXML_OFFSET))(this);
		}
	};
}
