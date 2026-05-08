#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }
namespace System::Net { class TimerThread_Timer; }

#define SYSTEM_NET_TIMERTHREAD_CALLBACK_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x193BC610)
#define SYSTEM_NET_TIMERTHREAD_CALLBACK_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x193BC6A0)
#define SYSTEM_NET_TIMERTHREAD_CALLBACK_INVOKE_OFFSET UNITYSDK_OFFSET(0x193BC070)
#define SYSTEM_NET_TIMERTHREAD_CALLBACK__CTOR_OFFSET UNITYSDK_OFFSET(0x193BC060)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_Callback_TypeDefinitionIndex = 3398;

	class TimerThread_Callback : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CALLBACK__CTOR_OFFSET))(this, object, method);
		}

		::System::Void Invoke(::System::Net::TimerThread_Timer* timer, ::System::Int32 timeNoticed, ::System::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::TimerThread_Timer*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CALLBACK_INVOKE_OFFSET))(this, timer, timeNoticed, context);
		}

		::System::IAsyncResult* BeginInvoke(::System::Net::TimerThread_Timer* timer, ::System::Int32 timeNoticed, ::System::Object* context, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::System::Net::TimerThread_Timer*, ::System::Int32, ::System::Object*, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CALLBACK_BEGININVOKE_OFFSET))(this, timer, timeNoticed, context, callback, object);
		}

		::System::Void EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Void(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_CALLBACK_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
