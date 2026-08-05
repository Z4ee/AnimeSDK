#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::AccessControl { class QualifiedAce; }

#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS57_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1E126F70)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS57_0__SETACE_B__0_OFFSET UNITYSDK_OFFSET(0x1E126F80)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonAcl___c__DisplayClass57_0_TypeDefinitionIndex = 977;

	class CommonAcl___c__DisplayClass57_0 : public ::System::Object
	{
	public:
		::System::Security::AccessControl::QualifiedAce* newAce; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS57_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetAce_b__0(::System::Security::AccessControl::QualifiedAce* oldAce)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::QualifiedAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS57_0__SETACE_B__0_OFFSET))(this, oldAce);
		}
	};
}
