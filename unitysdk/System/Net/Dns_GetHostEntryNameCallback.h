#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPHostEntry; }

#define SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E96CE40)
#define SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E96D0D0)
#define SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E96E6A0)
#define SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96E630)

namespace System::Net
{
	inline static constexpr unsigned int Dns_GetHostEntryNameCallback_TypeDefinitionIndex = 2833;

	class Dns_GetHostEntryNameCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Net::IPHostEntry* Invoke(::System::String* a1)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTENTRYNAMECALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
