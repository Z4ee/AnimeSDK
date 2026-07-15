#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class IPEndPoint; }
namespace System::Net { class ServicePoint; }

#define SYSTEM_NET_BINDIPENDPOINT_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x191820A0)
#define SYSTEM_NET_BINDIPENDPOINT_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19182110)
#define SYSTEM_NET_BINDIPENDPOINT_INVOKE_OFFSET UNITYSDK_OFFSET(0x19182080)
#define SYSTEM_NET_BINDIPENDPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x19181F90)

namespace System::Net
{
	inline static constexpr unsigned int BindIPEndPoint_TypeDefinitionIndex = 2817;

	class BindIPEndPoint : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Net::IPEndPoint* Invoke(::System::Net::ServicePoint* a1, ::System::Net::IPEndPoint* a2, ::System::Int32 a3)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::ServicePoint* a1, ::System::Net::IPEndPoint* a2, ::System::Int32 a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::ServicePoint*, ::System::Net::IPEndPoint*, ::System::Int32, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Net::IPEndPoint* EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Net::IPEndPoint*(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_BINDIPENDPOINT_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
