#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/AccessControl/AceQualifier.h"
#include "unitysdk/System/Security/AccessControl/AuditFlags.h"
#include "unitysdk/System/Security/AccessControl/InheritanceFlags.h"
#include "unitysdk/System/Security/AccessControl/PropagationFlags.h"

namespace System::Security::AccessControl { class CommonAce; }
namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS53_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADCCB30)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS53_0__REMOVEACESPECIFIC_B__0_OFFSET UNITYSDK_OFFSET(0x1ADCCB40)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonAcl___c__DisplayClass53_0_TypeDefinitionIndex = 976;

	class CommonAcl___c__DisplayClass53_0 : public ::System::Object
	{
	public:
		::System::Security::Principal::SecurityIdentifier* sid; // 0x10
		::System::Security::AccessControl::AceQualifier aceQualifier; // 0x18
		::System::Security::AccessControl::AuditFlags auditFlags; // 0x1C
		::System::Security::AccessControl::PropagationFlags propagationFlags; // 0x20
		::System::Security::AccessControl::InheritanceFlags inheritanceFlags; // 0x24
		::System::Int32 accessMask; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS53_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _RemoveAceSpecific_b__0(::System::Security::AccessControl::CommonAce* ace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::CommonAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS53_0__REMOVEACESPECIFIC_B__0_OFFSET))(this, ace);
		}
	};
}
