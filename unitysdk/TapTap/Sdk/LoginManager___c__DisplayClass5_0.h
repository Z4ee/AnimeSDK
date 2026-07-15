#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class LoginManager_OnLoginResult; }

#define TAPTAP_SDK_LOGINMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D40F0)
#define TAPTAP_SDK_LOGINMANAGER___C__DISPLAYCLASS5_0__LOGINWITHREADPERMISSIONS_B__0_OFFSET UNITYSDK_OFFSET(0x1D1D43A0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int LoginManager___c__DisplayClass5_0_TypeDefinitionIndex = 7085;

	class LoginManager___c__DisplayClass5_0 : public ::System::Object
	{
	public:
		::TapTap::Sdk::LoginManager_OnLoginResult* onLoginResult; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
		}

		::System::Void _LogInWithReadPermissions_b__0(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER___C__DISPLAYCLASS5_0__LOGINWITHREADPERMISSIONS_B__0_OFFSET))(this, a1, a2);
		}
	};
}
