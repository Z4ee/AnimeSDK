#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AuditFlags.h"
#include "unitysdk/System/Security/AccessControl/AuthorizationRule.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System::Security::Principal { class IdentityReference; }

#define SYSTEM_SECURITY_ACCESSCONTROL_AUDITRULE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A8520)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AuditRule_TypeDefinitionIndex = 971;

	class AuditRule : public ::System::Security::AccessControl::AuthorizationRule
	{
	public:
		::System::Security::AccessControl::AuditFlags auditFlags; // 0x28

		::System::Void _ctor(::System::Security::Principal::IdentityReference* identity, ::System::Int32 accessMask, ::System::Boolean isInherited, ::System::Security::AccessControl::InheritanceFlags inheritanceFlags, ::System::Security::AccessControl::PropagationFlags propagationFlags, ::System::Security::AccessControl::AuditFlags auditFlags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::IdentityReference*, ::System::Int32, ::System::Boolean, ::System::Security::AccessControl::InheritanceFlags, ::System::Security::AccessControl::PropagationFlags, ::System::Security::AccessControl::AuditFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_AUDITRULE__CTOR_OFFSET))(this, identity, accessMask, isInherited, inheritanceFlags, propagationFlags, auditFlags);
		}
	};
}
