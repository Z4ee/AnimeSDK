#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define SYSTEM_NET_UNLOCKCONNECTIONDELEGATE_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1E2935B0)
#define SYSTEM_NET_UNLOCKCONNECTIONDELEGATE_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1E2935E0)
#define SYSTEM_NET_UNLOCKCONNECTIONDELEGATE_INVOKE_OFFSET UNITYSDK_OFFSET(0x1E293320)
#define SYSTEM_NET_UNLOCKCONNECTIONDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E293300)

namespace System::Net
{
	inline static constexpr unsigned int UnlockConnectionDelegate_TypeDefinitionIndex = 3319;

	class UnlockConnectionDelegate : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNLOCKCONNECTIONDELEGATE__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNLOCKCONNECTIONDELEGATE_INVOKE_OFFSET))(this);
		}

		::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNLOCKCONNECTIONDELEGATE_BEGININVOKE_OFFSET))(this, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_UNLOCKCONNECTIONDELEGATE_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
