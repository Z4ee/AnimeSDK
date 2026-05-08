#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/ControlFlags.h"
#include "unitysdk/System/Security/AccessControl/GenericSecurityDescriptor.h"

namespace System::Security::AccessControl { class RawAcl; }
namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR_GET_CONTROLFLAGS_OFFSET UNITYSDK_OFFSET(0x19982D90)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR_READINT_OFFSET UNITYSDK_OFFSET(0x19982CF0)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR_READUSHORT_OFFSET UNITYSDK_OFFSET(0x19982C90)
#define SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19982A10)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int RawSecurityDescriptor_TypeDefinitionIndex = 1002;

	class RawSecurityDescriptor : public ::System::Security::AccessControl::GenericSecurityDescriptor
	{
	public:
		::System::Security::AccessControl::RawAcl* discretionary_acl; // 0x10
		::System::Security::Principal::SecurityIdentifier* owner_sid; // 0x18
		::System::Security::AccessControl::RawAcl* system_acl; // 0x20
		::System::Security::Principal::SecurityIdentifier* group_sid; // 0x28
		::System::Security::AccessControl::ControlFlags control_flags; // 0x30
		::System::Byte resourcemgr_control; // 0x34

		::System::Void _ctor(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR__CTOR_OFFSET))(this, binaryForm, offset);
		}

		::System::Security::AccessControl::ControlFlags get_ControlFlags()
		{
			return ((::System::Security::AccessControl::ControlFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR_GET_CONTROLFLAGS_OFFSET))(this);
		}

		::System::UInt16 ReadUShort(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::UInt16(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR_READUSHORT_OFFSET))(this, buffer, offset);
		}

		::System::Int32 ReadInt(::Il2CppArray<::System::Byte>* buffer, ::System::Int32 offset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_RAWSECURITYDESCRIPTOR_READINT_OFFSET))(this, buffer, offset);
		}
	};
}
