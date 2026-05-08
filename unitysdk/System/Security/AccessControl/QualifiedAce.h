#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AceFlags.h"
#include "unitysdk/System/Security/AccessControl/AceQualifier.h"
#include "unitysdk/System/Security/AccessControl/AceType.h"
#include "unitysdk/System/Security/AccessControl/KnownAce.h"

#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GETOPAQUE_OFFSET UNITYSDK_OFFSET(0x1A0B77C0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_ACEQUALIFIER_OFFSET UNITYSDK_OFFSET(0x1A0B9200)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_ISCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A0B92A0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_GET_OPAQUELENGTH_OFFSET UNITYSDK_OFFSET(0x1A0B7540)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE_SETOPAQUE_OFFSET UNITYSDK_OFFSET(0x1A0B73C0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A0B73B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1A0B92B0)
#define SYSTEM_SECURITY_ACCESSCONTROL_QUALIFIEDACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A0B7110)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int QualifiedAce_TypeDefinitionIndex = 1000;

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
