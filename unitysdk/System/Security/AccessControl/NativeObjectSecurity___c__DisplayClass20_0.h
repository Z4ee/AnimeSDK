#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/AccessControl/SecurityInfos.h"

namespace System { class String; }
namespace System::Security::AccessControl { class NativeObjectSecurity; }

#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY___C__DISPLAYCLASS20_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A6C8420)
#define SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY___C__DISPLAYCLASS20_0__INTERNALGET_B__0_OFFSET UNITYSDK_OFFSET(0x1A6C8430)

namespace System::Security::AccessControl
{
	inline static constexpr unsigned int NativeObjectSecurity___c__DisplayClass20_0_TypeDefinitionIndex = 993;

	class NativeObjectSecurity___c__DisplayClass20_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Security::AccessControl::NativeObjectSecurity* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY___C__DISPLAYCLASS20_0__CTOR_OFFSET))(this);
		}

		::System::Int32 _InternalGet_b__0(::System::Security::AccessControl::SecurityInfos securityInfos, ::System::IntPtr& owner, ::System::IntPtr& group, ::System::IntPtr& dacl, ::System::IntPtr& sacl, ::System::IntPtr& descriptor)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Security::AccessControl::SecurityInfos, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&, ::System::IntPtr&))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_ACCESSCONTROL_NATIVEOBJECTSECURITY___C__DISPLAYCLASS20_0__INTERNALGET_B__0_OFFSET))(this, securityInfos, owner, group, dacl, sacl, descriptor);
		}
	};
}
