#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace TapTap::Sdk { class LoginManager_OnLoginResult; }

#define TAPTAP_SDK_LOGINMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0x1BB60340)
#define TAPTAP_SDK_LOGINMANAGER_LOGINWITHREADPERMISSIONS_OFFSET UNITYSDK_OFFSET(0x1BB60530)
#define TAPTAP_SDK_LOGINMANAGER_LOGOUT_OFFSET UNITYSDK_OFFSET(0x1BB60A40)
#define TAPTAP_SDK_LOGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB60D20)
#define TAPTAP_SDK_LOGINMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB60520)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int LoginManager_TypeDefinitionIndex = 9480;

	class LoginManager : public ::System::Object
	{
	public:
		static ::TapTap::Sdk::LoginManager** StaticGet__instance()
		{
			return (::TapTap::Sdk::LoginManager**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0x8940);
		}
		static ::System::Object** StaticGet_objlock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(LoginManager_TypeDefinitionIndex)->GetStaticField(0x8948);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER__CCTOR_OFFSET))();
		}

		static ::TapTap::Sdk::LoginManager* get_Instance()
		{
			return ((::TapTap::Sdk::LoginManager*(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_GET_INSTANCE_OFFSET))();
		}

		::System::Void LogInWithReadPermissions(::Il2CppArray<::System::String*>* permissions, ::TapTap::Sdk::LoginManager_OnLoginResult* onLoginResult)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::String*>*, ::TapTap::Sdk::LoginManager_OnLoginResult*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_LOGINWITHREADPERMISSIONS_OFFSET))(this, permissions, onLoginResult);
		}

		::System::Void Logout()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_LOGOUT_OFFSET))(this);
		}
	};
}
