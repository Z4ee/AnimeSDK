#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class TimerThread_Timer; }

#define SYSTEM_NET_TIMERTHREAD_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x19EF3FF0)
#define SYSTEM_NET_TIMERTHREAD_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x19EF4060)
#define SYSTEM_NET_TIMERTHREAD_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x19EF3FD0)
#define SYSTEM_NET_TIMERTHREAD_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19EF3EE0)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_Callback_TypeDefinitionIndex = 2780;

	class TimerThread_Callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CALLBACK__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Invoke(::System::Net::TimerThread_Timer* a1, ::System::Int32 a2, ::System::Object* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::TimerThread_Timer*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CALLBACK_INVOKE_OFFSET))(this, a1, a2, a3);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::TimerThread_Timer* a1, ::System::Int32 a2, ::System::Object* a3, ::System::AsyncCallback* a4, ::System::Object* a5)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::TimerThread_Timer*, ::System::Int32, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CALLBACK_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CALLBACK_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
