#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace TapTap::Sdk { class LoginResult; }

#define TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A1BBCD0)
#define TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1BBD00)
#define TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1BB760)
#define TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1BBCB0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int LoginManager_OnLoginResult_TypeDefinitionIndex = 6462;

	class LoginManager_OnLoginResult : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::TapTap::Sdk::LoginResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::TapTap::Sdk::LoginResult*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_INVOKE_OFFSET))(this, result);
		}

		::System::IAsyncResult* BeginInvoke(::TapTap::Sdk::LoginResult* result, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::TapTap::Sdk::LoginResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_BEGININVOKE_OFFSET))(this, result, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + TAPTAP_SDK_LOGINMANAGER_ONLOGINRESULT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
