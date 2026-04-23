#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class IPAddress; }
namespace System::Net { class IPHostEntry; }

#define SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A103F00)
#define SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A102790)
#define SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A1039A0)
#define SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A103980)

namespace System::Net
{
	inline static constexpr unsigned int Dns_GetHostEntryIPCallback_TypeDefinitionIndex = 2823;

	class Dns_GetHostEntryIPCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Net::IPHostEntry* Invoke(::System::Net::IPAddress* hostAddress)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::Net::IPAddress*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_INVOKE_OFFSET))(this, hostAddress);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::IPAddress* hostAddress, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::IPAddress*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_BEGININVOKE_OFFSET))(this, hostAddress, callback, object);
		}

		::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYIPCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
