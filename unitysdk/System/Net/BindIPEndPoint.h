#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define SYSTEM_NET_BINDIPENDPOINT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1DEBE770)
#define SYSTEM_NET_BINDIPENDPOINT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1DEBE800)
#define SYSTEM_NET_BINDIPENDPOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1DEBE1A0)
#define SYSTEM_NET_BINDIPENDPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEBE180)

namespace System::Net
{
	inline static constexpr unsigned int BindIPEndPoint_TypeDefinitionIndex = 3493;

	class BindIPEndPoint : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT__CTOR_OFFSET))(this, object, method);
		}

		::System::Net::IPEndPoint* Invoke(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEndPoint, ::System::Int32 retryCount)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT_INVOKE_OFFSET))(this, servicePoint, remoteEndPoint, retryCount);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::ServicePoint* servicePoint, ::System::Net::IPEndPoint* remoteEndPoint, ::System::Int32 retryCount, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT_BEGININVOKE_OFFSET))(this, servicePoint, remoteEndPoint, retryCount, callback, object);
		}

		::System::Net::IPEndPoint* EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
