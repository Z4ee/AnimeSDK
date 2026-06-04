#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPHostEntry; }

#define SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AF69F00)
#define SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AF68A00)
#define SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AF69EF0)
#define SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF69E00)

namespace System::Net
{
	inline static constexpr unsigned int Dns_GetHostEntryIPCallback_TypeDefinitionIndex = 2823;

	class Dns_GetHostEntryIPCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Net::IPHostEntry* Invoke(::System::Net::IPAddress* a1)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::IPAddress* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::IPAddress*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
