#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::AccessControl { class KnownAce; }
namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B78C0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS30_0__PURGE_B__0_OFFSET UNITYSDK_OFFSET(0x1A0B78D0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonAcl___c__DisplayClass30_0_TypeDefinitionIndex = 976;

	class CommonAcl___c__DisplayClass30_0 : public ::System::Object
	{
	public:
		::System::Security::Principal::SecurityIdentifier* sid; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _Purge_b__0(::System::Security::AccessControl::KnownAce* ace)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Security::AccessControl::KnownAce*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACL___C__DISPLAYCLASS30_0__PURGE_B__0_OFFSET))(this, ace);
		}
	};
}
