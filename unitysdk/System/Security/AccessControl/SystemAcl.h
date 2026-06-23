#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AceQualifier.h"
#include "unitysdk/System/Security/AccessControl/AuditFlags.h"
#include "unitysdk/System/Security/AccessControl/CommonAcl.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System::Security::AccessControl { class GenericAce; }
namespace System::Security::AccessControl { class RawAcl; }
namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_ADDAUDIT_OFFSET UNITYSDK_OFFSET(0x1C1AFA70)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_APPLYCANONICALSORTTOEXPLICITACES_OFFSET UNITYSDK_OFFSET(0x1C1AFB50)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_GETACEINSERTPOSITION_OFFSET UNITYSDK_OFFSET(0x1C1AFB70)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_ISACEMEANINGLESS_OFFSET UNITYSDK_OFFSET(0x1C1AFB80)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_ISVALIDAUDITFLAGS_OFFSET UNITYSDK_OFFSET(0x1C1AFCA0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_REMOVEAUDITSPECIFIC_OFFSET UNITYSDK_OFFSET(0x1C1AFAF0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_REMOVEAUDIT_OFFSET UNITYSDK_OFFSET(0x1C1AFAA0)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_SETAUDIT_OFFSET UNITYSDK_OFFSET(0x1C1AFB20)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1AFA60)
#define SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AFA50)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int SystemAcl_TypeDefinitionIndex = 1004;

	class SystemAcl : public ::System::Security::AccessControl::CommonAcl
	{
	public:
		::System::Void _ctor(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Int32 capacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL__CTOR_OFFSET))(this, isContainer, isDS, capacity);
		}

		::System::Void _ctor_1(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Security::AccessControl::RawAcl* rawAcl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Security::AccessControl::RawAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL__CTOR_1_OFFSET))(this, isContainer, isDS, rawAcl);
		}

		::System::Void AddAudit(::System::Security::AccessControl::AuditFlags auditFlags, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_ADDAUDIT_OFFSET))(this, auditFlags, sid, accessMask, inheritanceFlags, propagationFlags);
		}

		::System::Boolean RemoveAudit(::System::Security::AccessControl::AuditFlags auditFlags, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::AuditFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_REMOVEAUDIT_OFFSET))(this, auditFlags, sid, accessMask, inheritanceFlags, propagationFlags);
		}

		::System::Void RemoveAuditSpecific(::System::Security::AccessControl::AuditFlags auditFlags, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_REMOVEAUDITSPECIFIC_OFFSET))(this, auditFlags, sid, accessMask, inheritanceFlags, propagationFlags);
		}

		::System::Void SetAudit(::System::Security::AccessControl::AuditFlags auditFlags, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Int32 accessMask, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AuditFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Int32, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_SETAUDIT_OFFSET))(this, auditFlags, sid, accessMask, inheritanceFlags, propagationFlags);
		}

		::System::Void ApplyCanonicalSortToExplicitAces()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_APPLYCANONICALSORTTOEXPLICITACES_OFFSET))(this);
		}

		::System::Int32 GetAceInsertPosition(::System::Security::AccessControl::AceQualifier aceQualifier)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::AccessControl::AceQualifier))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_GETACEINSERTPOSITION_OFFSET))(this, aceQualifier);
		}

		::System::Boolean IsAceMeaningless(::System::Security::AccessControl::GenericAce* ace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::GenericAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_ISACEMEANINGLESS_OFFSET))(this, ace);
		}

		static ::System::Boolean IsValidAuditFlags(::System::Security::AccessControl::AuditFlags auditFlags)
		{
			return ((::System::Boolean(*)(::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_SYSTEMACL_ISVALIDAUDITFLAGS_OFFSET))(auditFlags);
		}
	};
}
