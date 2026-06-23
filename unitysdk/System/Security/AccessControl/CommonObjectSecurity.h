#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AccessControlModification.h"
#include "unitysdk/System/Security/AccessControl/ObjectSecurity.h"

namespace System::Security::AccessControl { class AccessRule; }
namespace System::Security::AccessControl { class AuditRule; }

#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_ADDACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1C8C7880)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_ADDAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1C8C7E10)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_MODIFYACCESS_OFFSET UNITYSDK_OFFSET(0x1C8C78A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_MODIFYAUDIT_OFFSET UNITYSDK_OFFSET(0x1C8C7E30)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULEALL_OFFSET UNITYSDK_OFFSET(0x1C8C7D50)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULESPECIFIC_OFFSET UNITYSDK_OFFSET(0x1C8C7D80)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1C8C7D20)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULEALL_OFFSET UNITYSDK_OFFSET(0x1C8C8280)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULESPECIFIC_OFFSET UNITYSDK_OFFSET(0x1C8C82B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1C8C8250)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_RESETACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1C8C7DB0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_SETACCESSRULE_OFFSET UNITYSDK_OFFSET(0x1C8C7DE0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_SETAUDITRULE_OFFSET UNITYSDK_OFFSET(0x1C8C82E0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8C7870)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonObjectSecurity_TypeDefinitionIndex = 978;

	class CommonObjectSecurity : public ::System::Security::AccessControl::ObjectSecurity
	{
	public:
		::System::Void _ctor(::System::Boolean isContainer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY__CTOR_OFFSET))(this, isContainer);
		}

		::System::Void AddAccessRule(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_ADDACCESSRULE_OFFSET))(this, rule);
		}

		::System::Boolean RemoveAccessRule(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULE_OFFSET))(this, rule);
		}

		::System::Void RemoveAccessRuleAll(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULEALL_OFFSET))(this, rule);
		}

		::System::Void RemoveAccessRuleSpecific(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEACCESSRULESPECIFIC_OFFSET))(this, rule);
		}

		::System::Void ResetAccessRule(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_RESETACCESSRULE_OFFSET))(this, rule);
		}

		::System::Void SetAccessRule(::System::Security::AccessControl::AccessRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_SETACCESSRULE_OFFSET))(this, rule);
		}

		::System::Boolean ModifyAccess(::System::Security::AccessControl::AccessControlModification modification, ::System::Security::AccessControl::AccessRule* rule, ::System::Boolean& modified)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AccessControlModification, ::System::Security::AccessControl::AccessRule*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_MODIFYACCESS_OFFSET))(this, modification, rule, modified);
		}

		::System::Void AddAuditRule(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_ADDAUDITRULE_OFFSET))(this, rule);
		}

		::System::Boolean RemoveAuditRule(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULE_OFFSET))(this, rule);
		}

		::System::Void RemoveAuditRuleAll(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULEALL_OFFSET))(this, rule);
		}

		::System::Void RemoveAuditRuleSpecific(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_REMOVEAUDITRULESPECIFIC_OFFSET))(this, rule);
		}

		::System::Void SetAuditRule(::System::Security::AccessControl::AuditRule* rule)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditRule*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_SETAUDITRULE_OFFSET))(this, rule);
		}

		::System::Boolean ModifyAudit(::System::Security::AccessControl::AccessControlModification modification, ::System::Security::AccessControl::AuditRule* rule, ::System::Boolean& modified)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AccessControlModification, ::System::Security::AccessControl::AuditRule*, ::System::Boolean&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONOBJECTSECURITY_MODIFYAUDIT_OFFSET))(this, modification, rule, modified);
		}
	};
}
