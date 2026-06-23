#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/AccessControl/AccessControlModification.h"
#include "unitysdk/System/Security/AccessControl/AccessControlSections.h"
#include "unitysdk/System/Security/AccessControl/AccessControlType.h"
#include "unitysdk/System/Security/AccessControl/AuditFlags.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System { class Type; }
namespace System::Security::AccessControl { class AccessRule; }
namespace System::Security::AccessControl { class AuditRule; }
namespace System::Security::AccessControl { class CommonSecurityDescriptor; }
namespace System::Security::Principal { class IdentityReference; }
namespace System::Security::Principal { class SecurityIdentifier; }
namespace System::Threading { class ReaderWriterLock; }

#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_AREACCESSCONTROLSECTIONSMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C5041F0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_COPYSDDLFORM_OFFSET UNITYSDK_OFFSET(0x1C504A30)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GETGROUP_OFFSET UNITYSDK_OFFSET(0x1C504350)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GETOWNER_OFFSET UNITYSDK_OFFSET(0x1C5044A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_ACCESSCONTROLSECTIONSMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C503F30)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_ACCESSRULESMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C5041D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_AREACCESSRULESPROTECTED_OFFSET UNITYSDK_OFFSET(0x1C503D60)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_AREAUDITRULESPROTECTED_OFFSET UNITYSDK_OFFSET(0x1C503E70)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_AUDITRULESMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C504280)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_GROUPMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C5042D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_ISCONTAINER_OFFSET UNITYSDK_OFFSET(0x1C5042F0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_ISDS_OFFSET UNITYSDK_OFFSET(0x1C504310)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_OWNERMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C504330)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_PURGEACCESSRULES_OFFSET UNITYSDK_OFFSET(0x1C5045F0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_PURGEAUDITRULES_OFFSET UNITYSDK_OFFSET(0x1C504830)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_READING_OFFSET UNITYSDK_OFFSET(0x1C503F50)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_READLOCK_OFFSET UNITYSDK_OFFSET(0x1C503E20)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_READUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C503E50)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SETACCESSCONTROLSECTIONSMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C504240)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SETSECURITYDESCRIPTORBINARYFORM_OFFSET UNITYSDK_OFFSET(0x1C504960)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SET_ACCESSCONTROLSECTIONSMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C504090)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SET_ACCESSRULESMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C504210)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SET_AUDITRULESMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C5042A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SIDFROMIR_OFFSET UNITYSDK_OFFSET(0x1C504760)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_WRITELOCK_OFFSET UNITYSDK_OFFSET(0x1C504730)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_WRITEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C504810)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_WRITING_OFFSET UNITYSDK_OFFSET(0x1C5040B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C503AC0)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C503C80)
#define SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1C503AB0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int ObjectSecurity_TypeDefinitionIndex = 996;

	class ObjectSecurity : public ::System::Object
	{
	public:
		::System::Security::AccessControl::CommonSecurityDescriptor* descriptor; // 0x10
		::System::Threading::ReaderWriterLock* rw_lock; // 0x18
		::System::Security::AccessControl::AccessControlSections sections_modified; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Security::AccessControl::CommonSecurityDescriptor* securityDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::CommonSecurityDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY__CTOR_1_OFFSET))(this, securityDescriptor);
		}

		::System::Void _ctor_2(::System::Boolean isContainer, ::System::Boolean isDS)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY__CTOR_2_OFFSET))(this, isContainer, isDS);
		}

		::System::Boolean get_AreAccessRulesProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_AREACCESSRULESPROTECTED_OFFSET))(this);
		}

		::System::Boolean get_AreAuditRulesProtected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_AREAUDITRULESPROTECTED_OFFSET))(this);
		}

		::System::Security::AccessControl::AccessControlSections get_AccessControlSectionsModified()
		{
			return ((::System::Security::AccessControl::AccessControlSections(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_ACCESSCONTROLSECTIONSMODIFIED_OFFSET))(this);
		}

		::System::Void set_AccessControlSectionsModified(::System::Security::AccessControl::AccessControlSections value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SET_ACCESSCONTROLSECTIONSMODIFIED_OFFSET))(this, value);
		}

		::System::Boolean get_AccessRulesModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_ACCESSRULESMODIFIED_OFFSET))(this);
		}

		::System::Void set_AccessRulesModified(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SET_ACCESSRULESMODIFIED_OFFSET))(this, value);
		}

		::System::Boolean get_AuditRulesModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_AUDITRULESMODIFIED_OFFSET))(this);
		}

		::System::Void set_AuditRulesModified(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SET_AUDITRULESMODIFIED_OFFSET))(this, value);
		}

		::System::Boolean get_GroupModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_GROUPMODIFIED_OFFSET))(this);
		}

		::System::Boolean get_IsContainer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_ISCONTAINER_OFFSET))(this);
		}

		::System::Boolean get_IsDS()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_ISDS_OFFSET))(this);
		}

		::System::Boolean get_OwnerModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GET_OWNERMODIFIED_OFFSET))(this);
		}

		::System::Security::Principal::IdentityReference* GetGroup(::System::Type* targetType)
		{
			return ((::System::Security::Principal::IdentityReference*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GETGROUP_OFFSET))(this, targetType);
		}

		::System::Security::Principal::IdentityReference* GetOwner(::System::Type* targetType)
		{
			return ((::System::Security::Principal::IdentityReference*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_GETOWNER_OFFSET))(this, targetType);
		}

		::System::Void PurgeAccessRules(::System::Security::Principal::IdentityReference* identity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IdentityReference*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_PURGEACCESSRULES_OFFSET))(this, identity);
		}

		::System::Void PurgeAuditRules(::System::Security::Principal::IdentityReference* identity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IdentityReference*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_PURGEAUDITRULES_OFFSET))(this, identity);
		}

		::System::Void SetSecurityDescriptorBinaryForm(::Il2CppArray<::System::Byte>* binaryForm, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SETSECURITYDESCRIPTORBINARYFORM_OFFSET))(this, binaryForm, includeSections);
		}

		::System::Void CopySddlForm(::System::Security::AccessControl::CommonSecurityDescriptor* sourceDescriptor, ::System::Security::AccessControl::AccessControlSections includeSections)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::CommonSecurityDescriptor*, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_COPYSDDLFORM_OFFSET))(this, sourceDescriptor, includeSections);
		}

		::System::Void Reading()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_READING_OFFSET))(this);
		}

		::System::Void ReadLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_READLOCK_OFFSET))(this);
		}

		::System::Void ReadUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_READUNLOCK_OFFSET))(this);
		}

		::System::Void Writing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_WRITING_OFFSET))(this);
		}

		::System::Void WriteLock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_WRITELOCK_OFFSET))(this);
		}

		::System::Void WriteUnlock()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_WRITEUNLOCK_OFFSET))(this);
		}

		static ::System::Security::Principal::SecurityIdentifier* SidFromIR(::System::Security::Principal::IdentityReference* identity)
		{
			return ((::System::Security::Principal::SecurityIdentifier*(*)(::System::Security::Principal::IdentityReference*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SIDFROMIR_OFFSET))(identity);
		}

		::System::Boolean AreAccessControlSectionsModified(::System::Security::AccessControl::AccessControlSections mask)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AccessControlSections))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_AREACCESSCONTROLSECTIONSMODIFIED_OFFSET))(this, mask);
		}

		::System::Void SetAccessControlSectionsModified(::System::Security::AccessControl::AccessControlSections mask, ::System::Boolean modified)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AccessControlSections, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_OBJECTSECURITY_SETACCESSCONTROLSECTIONSMODIFIED_OFFSET))(this, mask, modified);
		}
	};
}
