#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/AccessControl/SecurityInfos.h"

namespace System::Runtime::InteropServices { class SafeHandle; }
namespace System::Security::AccessControl { class NativeObjectSecurity; }

#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1C9DC830)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY___C__DISPLAYCLASS21_0__INTERNALSET_B__0_OFFSET UNITYSDK_OFFSET(0x1C9DC840)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int NativeObjectSecurity___c__DisplayClass21_0_TypeDefinitionIndex = 993;

	class NativeObjectSecurity___c__DisplayClass21_0 : public ::System::Object
	{
	public:
		::System::Security::AccessControl::NativeObjectSecurity* __4__this; // 0x10
		::System::Runtime::InteropServices::SafeHandle* handle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InternalSet_b__0(::System::Security::AccessControl::SecurityInfos securityInfos, ::Il2CppArray<::System::Byte>* owner, ::Il2CppArray<::System::Byte>* group, ::Il2CppArray<::System::Byte>* dacl, ::Il2CppArray<::System::Byte>* sacl)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::AccessControl::SecurityInfos, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY___C__DISPLAYCLASS21_0__INTERNALSET_B__0_OFFSET))(this, securityInfos, owner, group, dacl, sacl);
		}
	};
}
