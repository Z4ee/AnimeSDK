#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Permissions/CodeAccessSecurityAttribute.h"
#include "unitysdk/System/Security/Permissions/SecurityAction.h"

namespace System { class String; }
namespace System::Security { class IPermission; }

#define SYSTEM_NET_MAIL_SMTPPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET UNITYSDK_OFFSET(0x1D45A5E0)
#define SYSTEM_NET_MAIL_SMTPPERMISSIONATTRIBUTE_GET_ACCESS_OFFSET UNITYSDK_OFFSET(0x1D45A560)
#define SYSTEM_NET_MAIL_SMTPPERMISSIONATTRIBUTE_SET_ACCESS_OFFSET UNITYSDK_OFFSET(0x1D45A5A0)
#define SYSTEM_NET_MAIL_SMTPPERMISSIONATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D45A550)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpPermissionAttribute_TypeDefinitionIndex = 4113;

	class SmtpPermissionAttribute : public ::System::Security::Permissions::CodeAccessSecurityAttribute
	{
	public:
		::System::Void _ctor(::System::Security::Permissions::SecurityAction action)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::SecurityAction))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSIONATTRIBUTE__CTOR_OFFSET))(this, action);
		}

		::System::String* get_Access()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSIONATTRIBUTE_GET_ACCESS_OFFSET))(this);
		}

		::System::Void set_Access(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSIONATTRIBUTE_SET_ACCESS_OFFSET))(this, value);
		}

		::System::Security::IPermission* CreatePermission()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSIONATTRIBUTE_CREATEPERMISSION_OFFSET))(this);
		}
	};
}
