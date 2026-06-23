#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/Mail/SmtpAccess.h"
#include "unitysdk/System/Security/CodeAccessPermission.h"
#include "unitysdk/System/Security/Permissions/PermissionState.h"

namespace System::Security { class IPermission; }
namespace System::Security { class SecurityElement; }

#define SYSTEM_NET_MAIL_SMTPPERMISSION_ADDPERMISSION_OFFSET UNITYSDK_OFFSET(0x1CECEA00)
#define SYSTEM_NET_MAIL_SMTPPERMISSION_COPY_OFFSET UNITYSDK_OFFSET(0x1CECEA40)
#define SYSTEM_NET_MAIL_SMTPPERMISSION_FROMXML_OFFSET UNITYSDK_OFFSET(0x1CECEA80)
#define SYSTEM_NET_MAIL_SMTPPERMISSION_GET_ACCESS_OFFSET UNITYSDK_OFFSET(0x1CECE9C0)
#define SYSTEM_NET_MAIL_SMTPPERMISSION_INTERSECT_OFFSET UNITYSDK_OFFSET(0x1CECEAC0)
#define SYSTEM_NET_MAIL_SMTPPERMISSION_ISSUBSETOF_OFFSET UNITYSDK_OFFSET(0x1CECEB00)
#define SYSTEM_NET_MAIL_SMTPPERMISSION_ISUNRESTRICTED_OFFSET UNITYSDK_OFFSET(0x1CECEB40)
#define SYSTEM_NET_MAIL_SMTPPERMISSION_TOXML_OFFSET UNITYSDK_OFFSET(0x1CECEB80)
#define SYSTEM_NET_MAIL_SMTPPERMISSION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CECE940)
#define SYSTEM_NET_MAIL_SMTPPERMISSION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1CECE980)
#define SYSTEM_NET_MAIL_SMTPPERMISSION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CECE900)

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpPermission_TypeDefinitionIndex = 4112;

	class SmtpPermission : public ::System::Security::CodeAccessPermission
	{
	public:
		::System::Void _ctor(::System::Boolean unrestricted)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION__CTOR_OFFSET))(this, unrestricted);
		}

		::System::Void _ctor_1(::System::Net::Mail::SmtpAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION__CTOR_1_OFFSET))(this, access);
		}

		::System::Void _ctor_2(::System::Security::Permissions::PermissionState state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Permissions::PermissionState))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION__CTOR_2_OFFSET))(this, state);
		}

		::System::Net::Mail::SmtpAccess get_Access()
		{
			return ((::System::Net::Mail::SmtpAccess(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION_GET_ACCESS_OFFSET))(this);
		}

		::System::Void AddPermission(::System::Net::Mail::SmtpAccess access)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::Mail::SmtpAccess))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION_ADDPERMISSION_OFFSET))(this, access);
		}

		::System::Security::IPermission* Copy()
		{
			return ((::System::Security::IPermission*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION_COPY_OFFSET))(this);
		}

		::System::Void FromXml(::System::Security::SecurityElement* securityElement)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::SecurityElement*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION_FROMXML_OFFSET))(this, securityElement);
		}

		::System::Security::IPermission* Intersect(::System::Security::IPermission* target)
		{
			return ((::System::Security::IPermission*(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION_INTERSECT_OFFSET))(this, target);
		}

		::System::Boolean IsSubsetOf(::System::Security::IPermission* target)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::IPermission*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION_ISSUBSETOF_OFFSET))(this, target);
		}

		::System::Boolean IsUnrestricted()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION_ISUNRESTRICTED_OFFSET))(this);
		}

		::System::Security::SecurityElement* ToXml()
		{
			return ((::System::Security::SecurityElement*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MAIL_SMTPPERMISSION_TOXML_OFFSET))(this);
		}
	};
}
