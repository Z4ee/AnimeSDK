#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"
#include "unitysdk/System/Net/AuthenticationSchemes.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class HttpListenerRequest; }

#define SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19181A00)
#define SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19181A30)
#define SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_INVOKE_OFFSET UNITYSDK_OFFSET(0x191819F0)
#define SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x19181980)

namespace System::Net
{
	inline static constexpr unsigned int AuthenticationSchemeSelector_TypeDefinitionIndex = 2719;

	class AuthenticationSchemeSelector : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Net::AuthenticationSchemes Invoke(::System::Net::HttpListenerRequest* a1)
		{
			return ((::System::Net::AuthenticationSchemes(*)(::PVOID, ::System::Net::HttpListenerRequest*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::HttpListenerRequest* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::HttpListenerRequest*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::AuthenticationSchemes EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Net::AuthenticationSchemes(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_AUTHENTICATIONSCHEMESELECTOR_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
