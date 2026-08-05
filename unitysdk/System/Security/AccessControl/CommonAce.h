#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/AccessControl/AceFlags.h"
#include "unitysdk/System/Security/AccessControl/AceQualifier.h"
#include "unitysdk/System/Security/AccessControl/AceType.h"
#include "unitysdk/System/Security/AccessControl/QualifiedAce.h"

namespace System::Security::Principal { class SecurityIdentifier; }

#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE_CONVERTTYPE_OFFSET UNITYSDK_OFFSET(0x1D8CF900)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE_GETBINARYFORM_OFFSET UNITYSDK_OFFSET(0x1D8CFE30)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE_GET_BINARYLENGTH_OFFSET UNITYSDK_OFFSET(0x1D8CFDD0)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1D8CFA70)
#define SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8CF880)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int CommonAce_TypeDefinitionIndex = 972;

	class CommonAce : public ::System::Security::AccessControl::QualifiedAce
	{
	public:
		::System::Void _ctor(::System::Security::AccessControl::AceFlags flags, ::System::Security::AccessControl::AceQualifier qualifier, ::System::Int32 accessMask, ::System::Security::Principal::SecurityIdentifier* sid, ::System::Boolean isCallback, ::Il2CppArray<::System::Byte>* opaque)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::AccessControl::AceFlags, ::System::Security::AccessControl::AceQualifier, ::System::Int32, ::System::Security::Principal::SecurityIdentifier*, ::System::Boolean, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE__CTOR_OFFSET))(this, flags, qualifier, accessMask, sid, isCallback, opaque);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE__CTOR_1_OFFSET))(this, binaryForm, offset);
		}

		::System::Int32 get_BinaryLength()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE_GET_BINARYLENGTH_OFFSET))(this);
		}

		::System::Void GetBinaryForm(::Il2CppArray<::System::Byte>* binaryForm, ::System::Int32 offset)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE_GETBINARYFORM_OFFSET))(this, binaryForm, offset);
		}

		static ::System::Security::AccessControl::AceType ConvertType(::System::Security::AccessControl::AceQualifier qualifier, ::System::Boolean isCallback)
		{
			return ((::System::Security::AccessControl::AceType(*)(::System::Security::AccessControl::AceQualifier, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_COMMONACE_CONVERTTYPE_OFFSET))(qualifier, isCallback);
		}
	};
}
