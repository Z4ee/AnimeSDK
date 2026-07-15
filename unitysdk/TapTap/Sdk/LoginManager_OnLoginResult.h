#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace TapTap::Sdk { class LoginResult; }

#define TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1D1D4750)
#define TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1D1D4780)
#define TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1D1D4650)
#define TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1D4660)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int LoginManager_OnLoginResult_TypeDefinitionIndex = 7084;

	class LoginManager_OnLoginResult : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::TapTap::Sdk::LoginResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::LoginResult*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::TapTap::Sdk::LoginResult* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::TapTap::Sdk::LoginResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
