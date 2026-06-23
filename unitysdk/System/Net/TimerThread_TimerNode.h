#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TimerThread_Timer.h"
#include "unitysdk/System/Net/TimerThread_TimerNode_TimerState.h"

namespace System { class Object; }
namespace System::Net { class TimerThread_Callback; }

#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_CANCEL_OFFSET UNITYSDK_OFFSET(0x1C07E5A0)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_FIRE_OFFSET UNITYSDK_OFFSET(0x1C07E710)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_GET_HASEXPIRED_OFFSET UNITYSDK_OFFSET(0x1C07E550)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1C07E560)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_GET_PREV_OFFSET UNITYSDK_OFFSET(0x1C07E580)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1C07E570)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_SET_PREV_OFFSET UNITYSDK_OFFSET(0x1C07E590)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C07E4F0)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C07E470)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TimerNode_TypeDefinitionIndex = 3401;

	class TimerThread_TimerNode : public ::System::Net::TimerThread_Timer
	{
	public:
		::System::Net::TimerThread_TimerNode* prev; // 0x18
		::System::Object* m_QueueLock; // 0x20
		::System::Object* m_Context; // 0x28
		::System::Net::TimerThread_TimerNode* next; // 0x30
		::System::Net::TimerThread_Callback* m_Callback; // 0x38
		::System::Net::TimerThread_TimerNode_TimerState m_TimerState; // 0x40

		::System::Void _ctor(::System::Net::TimerThread_Callback* callback, ::System::Object* context, ::System::Int32 durationMilliseconds, ::System::Object* queueLock)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::TimerThread_Callback*, ::System::Object*, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE__CTOR_OFFSET))(this, callback, context, durationMilliseconds, queueLock);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE__CTOR_1_OFFSET))(this);
		}

		::System::Boolean get_HasExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE_GET_HASEXPIRED_OFFSET))(this);
		}

		::System::Net::TimerThread_TimerNode* get_Next()
		{
			return ((::System::Net::TimerThread_TimerNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE_GET_NEXT_OFFSET))(this);
		}

		::System::Void set_Next(::System::Net::TimerThread_TimerNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::TimerThread_TimerNode*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE_SET_NEXT_OFFSET))(this, value);
		}

		::System::Net::TimerThread_TimerNode* get_Prev()
		{
			return ((::System::Net::TimerThread_TimerNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE_GET_PREV_OFFSET))(this);
		}

		::System::Void set_Prev(::System::Net::TimerThread_TimerNode* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Net::TimerThread_TimerNode*))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE_SET_PREV_OFFSET))(this, value);
		}

		::System::Boolean Cancel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE_CANCEL_OFFSET))(this);
		}

		::System::Boolean Fire()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE_FIRE_OFFSET))(this);
		}
	};
}
