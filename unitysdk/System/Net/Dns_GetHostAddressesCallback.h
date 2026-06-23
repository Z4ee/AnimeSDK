#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Net { class IPAddress; }

#define SYSTEM_NET_DNS_GETHOSTADDRESSESCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF7E30)
#define SYSTEM_NET_DNS_GETHOSTADDRESSESCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF7E60)
#define SYSTEM_NET_DNS_GETHOSTADDRESSESCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1CAF78F0)
#define SYSTEM_NET_DNS_GETHOSTADDRESSESCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1CAF78D0)

namespace System::Net
{
	inline static constexpr unsigned int Dns_GetHostAddressesCallback_TypeDefinitionIndex = 3506;

	class Dns_GetHostAddressesCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTADDRESSESCALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::Il2CppArray<::System::Net::IPAddress*>* Invoke(::System::String* hostName)
		{
			return ((::Il2CppArray<::System::Net::IPAddress*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTADDRESSESCALLBACK_INVOKE_OFFSET))(this, hostName);
		}

		::System::IAsyncResult* BeginInvoke(::System::String* hostName, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::String*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTADDRESSESCALLBACK_BEGININVOKE_OFFSET))(this, hostName, callback, object);
		}

		::Il2CppArray<::System::Net::IPAddress*>* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::Il2CppArray<::System::Net::IPAddress*>*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_DNS_GETHOSTADDRESSESCALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
