#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/ControlFlags.h"
#include "unitysdk/System/Security/AccessControl/GenericSecurityDescriptor.h"

namespace System::Security::AccessControl { class CommonAcl; }
namespace System::Security::AccessControl { class DiscretionaryAcl; }
namespace System::Security::AccessControl { class RawSecurityDescriptor; }
namespace System::Security::AccessControl { class SystemAcl; }
namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_CHECKACLCONSISTENCY_OFFSET UNITYSDK_OFFSET(0x1DCFCD40)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_GET_CONTROLFLAGS_OFFSET UNITYSDK_OFFSET(0x1DCFCD20)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_INIT_1_OFFSET UNITYSDK_OFFSET(0x1DCFCBC0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_INIT_OFFSET UNITYSDK_OFFSET(0x1DCFCA30)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_PURGEACCESSCONTROL_OFFSET UNITYSDK_OFFSET(0x1DCFCDF0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_PURGEAUDIT_OFFSET UNITYSDK_OFFSET(0x1DCFCE10)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_SET_DISCRETIONARYACL_OFFSET UNITYSDK_OFFSET(0x1DCFCC20)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_SET_SYSTEMACL_OFFSET UNITYSDK_OFFSET(0x1DCFC980)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DCFCB60)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFC9B0)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonSecurityDescriptor_TypeDefinitionIndex = 979;

	class CommonSecurityDescriptor : public ::System::Security::AccessControl::GenericSecurityDescriptor
	{
	public:
		::System::Security::Principal::SecurityIdentifier* owner; // 0x10
		::System::Security::AccessControl::SystemAcl* system_acl; // 0x18
		::System::Security::Principal::SecurityIdentifier* group; // 0x20
		::System::Security::AccessControl::DiscretionaryAcl* discretionary_acl; // 0x28
		::System::Boolean is_container; // 0x30
		::System::Boolean is_ds; // 0x31
		::System::Security::AccessControl::ControlFlags flags; // 0x34

		::System::Void _ctor(::System::Boolean isContainer, ::System::Boolean isDS, ::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR__CTOR_OFFSET))(this, isContainer, isDS, binaryForm, offset);
		}

		::System::Void _ctor_1(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group, ::System::Security::AccessControl::SystemAcl* systemAcl, ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::AccessControl::SystemAcl*, ::System::Security::AccessControl::DiscretionaryAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR__CTOR_1_OFFSET))(this, isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl);
		}

		::System::Void Init(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Security::AccessControl::RawSecurityDescriptor* rawSecurityDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Security::AccessControl::RawSecurityDescriptor*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_INIT_OFFSET))(this, isContainer, isDS, rawSecurityDescriptor);
		}

		::System::Void Init_1(::System::Boolean isContainer, ::System::Boolean isDS, ::System::Security::AccessControl::ControlFlags flags, ::System::Security::Principal::SecurityIdentifier* owner, ::System::Security::Principal::SecurityIdentifier* group, ::System::Security::AccessControl::SystemAcl* systemAcl, ::System::Security::AccessControl::DiscretionaryAcl* discretionaryAcl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Security::AccessControl::ControlFlags, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*, ::System::Security::AccessControl::SystemAcl*, ::System::Security::AccessControl::DiscretionaryAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_INIT_1_OFFSET))(this, isContainer, isDS, flags, owner, group, systemAcl, discretionaryAcl);
		}

		::System::Security::AccessControl::ControlFlags get_ControlFlags()
		{
			return ((::System::Security::AccessControl::ControlFlags(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_GET_CONTROLFLAGS_OFFSET))(this);
		}

		::System::Void set_DiscretionaryAcl(::System::Security::AccessControl::DiscretionaryAcl* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::DiscretionaryAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_SET_DISCRETIONARYACL_OFFSET))(this, value);
		}

		::System::Void set_SystemAcl(::System::Security::AccessControl::SystemAcl* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::SystemAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_SET_SYSTEMACL_OFFSET))(this, value);
		}

		::System::Void PurgeAccessControl(::System::Security::Principal::SecurityIdentifier* sid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::SecurityIdentifier*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_PURGEACCESSCONTROL_OFFSET))(this, sid);
		}

		::System::Void PurgeAudit(::System::Security::Principal::SecurityIdentifier* sid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Principal::SecurityIdentifier*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_PURGEAUDIT_OFFSET))(this, sid);
		}

		::System::Void CheckAclConsistency(::System::Security::AccessControl::CommonAcl* acl)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::CommonAcl*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONSECURITYDESCRIPTOR_CHECKACLCONSISTENCY_OFFSET))(this, acl);
		}
	};
}
