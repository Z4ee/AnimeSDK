#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AceFlags.h"
#include "unitysdk/System/Security/AccessControl/AceType.h"
#include "unitysdk/System/Security/AccessControl/GenericAce.h"

namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_KNOWNACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A7CA330)
#define SYSTEM_SECURITY_ACCESSCONTROL_KNOWNACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A7CA340)
#define SYSTEM_SECURITY_ACCESSCONTROL_KNOWNACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7CA2C0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int KnownAce_TypeDefinitionIndex = 987;

	class KnownAce : public ::System::Security::AccessControl::GenericAce
	{
	public:
		::System::Security::Principal::SecurityIdentifier* identifier; // 0x18
		::System::Int32 access_mask; // 0x20

		::System::Void _ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AceType, ::System::Security::AccessControl::AceFlags))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_KNOWNACE__CTOR_OFFSET))(this, type, flags);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_KNOWNACE__CTOR_1_OFFSET))(this, binaryForm, offset);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_KNOWNACE__CTOR_2_OFFSET))(this);
		}
	};
}
