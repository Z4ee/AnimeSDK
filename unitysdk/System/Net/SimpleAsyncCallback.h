#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class SimpleAsyncResult; }

#define SYSTEM_NET_SIMPLEASYNCCALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA7090)
#define SYSTEM_NET_SIMPLEASYNCCALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA70C0)
#define SYSTEM_NET_SIMPLEASYNCCALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x1AFA7080)
#define SYSTEM_NET_SIMPLEASYNCCALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1AFA6F90)

namespace System::Net
{
	inline static constexpr unsigned int SimpleAsyncCallback_TypeDefinitionIndex = 2865;

	class SimpleAsyncCallback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCCALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Net::SimpleAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::SimpleAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCCALLBACK_INVOKE_OFFSET))(this, a1);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::SimpleAsyncResult* a1, ::System::AsyncCallback* a2, ::System::Object* a3)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::SimpleAsyncResult*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCCALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_SIMPLEASYNCCALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
