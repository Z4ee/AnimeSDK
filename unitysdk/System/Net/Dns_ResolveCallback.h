#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPHostEntry; }

#define SYSTEM_NET_DNS_RESOLVECALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19EEDD10)
#define SYSTEM_NET_DNS_RESOLVECALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19EEDD40)
#define SYSTEM_NET_DNS_RESOLVECALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19EED7D0)
#define SYSTEM_NET_DNS_RESOLVECALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19EED7C0)

namespace System::Net
{
	inline static constexpr unsigned int Dns_ResolveCallback_TypeDefinitionIndex = 3504;

	class Dns_ResolveCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_RESOLVECALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Net::IPHostEntry* Invoke(::System::String* hostName)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_RESOLVECALLBACK_INVOKE_OFFSET))(this, hostName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* hostName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_RESOLVECALLBACK_BEGININVOKE_OFFSET))(this, hostName, callback, object);
		}

		::System::Net::IPHostEntry* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Net::IPHostEntry*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_RESOLVECALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
