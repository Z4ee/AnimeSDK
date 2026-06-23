#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Security::AccessControl { class GenericAce; }
namespace System::Security::AccessControl { class GenericAcl; }

#define SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B8B1590)
#define SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B8B1610)
#define SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1B8B1650)
#define SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B8B15D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B8B1660)
#define SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B1580)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int AceEnumerator_TypeDefinitionIndex = 965;

	class AceEnumerator : public ::System::Object
	{
	public:
		::System::Security::AccessControl::GenericAcl* owner; // 0x10
		::System::Int32 current; // 0x18

		::System::Void _ctor(::System::Security::AccessControl::GenericAcl* owner)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::GenericAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR__CTOR_OFFSET))(this, owner);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR__CTOR_1_OFFSET))(this);
		}

		::System::Security::AccessControl::GenericAce* get_Current()
		{
			return ((::System::Security::AccessControl::GenericAce*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR_MOVENEXT_OFFSET))(this);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_ACEENUMERATOR_RESET_OFFSET))(this);
		}
	};
}
