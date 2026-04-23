#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPHostEntry; }

#define SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1A102640)
#define SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1A1027A0)
#define SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A103F30)
#define SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A102620)

namespace System::Net
{
	inline static constexpr unsigned int Dns_GetHostEntryNameCallback_TypeDefinitionIndex = 2822;

	class Dns_GetHostEntryNameCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Net::IPHostEntry* Invoke(::System::String* hostName)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_INVOKE_OFFSET))(this, hostName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* hostName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_BEGININVOKE_OFFSET))(this, hostName, callback, object);
		}

		::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
