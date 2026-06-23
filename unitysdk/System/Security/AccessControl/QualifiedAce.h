#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AceFlags.h"
#include "unitysdk/System/Security/AccessControl/AceQualifier.h"
#include "unitysdk/System/Security/AccessControl/AceType.h"
#include "unitysdk/System/Security/AccessControl/KnownAce.h"

#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GETOPAQUE_OFFSET UNITYSDK_OFFSET(0x1C5038E0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_ACEQUALIFIER_OFFSET UNITYSDK_OFFSET(0x1C505320)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_ISCALLBACK_OFFSET UNITYSDK_OFFSET(0x1C5053C0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_OPAQUELENGTH_OFFSET UNITYSDK_OFFSET(0x1C503660)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_SETOPAQUE_OFFSET UNITYSDK_OFFSET(0x1C5034E0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C5034D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C5053D0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C503230)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int QualifiedAce_TypeDefinitionIndex = 999;

	class QualifiedAce : public ::System::Security::AccessControl::KnownAce
	{
	public:
		::Il2CppArray<::System::Byte>* opaque; // 0x28

		::System::Void _ctor(::System::Security::AccessControl::AceType type, ::System::Security::AccessControl::AceFlags flags, ::Il2CppArray<::System::Byte>* opaque)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AceType, ::System::Security::AccessControl::AceFlags, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_OFFSET))(this, type, flags, opaque);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_1_OFFSET))(this, binaryForm, offset);
		}

		::System::Void _ctor_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_2_OFFSET))(this);
		}

		::System::Security::AccessControl::AceQualifier get_AceQualifier()
		{
			return ((::System::Security::AccessControl::AceQualifier(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_ACEQUALIFIER_OFFSET))(this);
		}

		::System::Boolean get_IsCallback()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_ISCALLBACK_OFFSET))(this);
		}

		::System::Int32 get_OpaqueLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_OPAQUELENGTH_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetOpaque()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GETOPAQUE_OFFSET))(this);
		}

		::System::Void SetOpaque(::Il2CppArray<::System::Byte>* opaque)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_SETOPAQUE_OFFSET))(this, opaque);
		}
	};
}
