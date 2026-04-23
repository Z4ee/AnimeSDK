#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/TimerThread_Timer.h"
#include "unitysdk/System/Net/TimerThread_TimerNode_TimerState.h"

namespace System { class Object; }
namespace System::Net { class TimerThread_Callback; }

#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_CANCEL_OFFSET UNITYSDK_OFFSET(0x1A155EE0)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x1A1560A0)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_GET_PREV_OFFSET UNITYSDK_OFFSET(0x1A1560C0)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_SET_NEXT_OFFSET UNITYSDK_OFFSET(0x1A1560B0)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE_SET_PREV_OFFSET UNITYSDK_OFFSET(0x1A1560D0)
#define SYSTEM_NET_TIMERTHREAD_TIMERNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A156040)

namespace System::Net
{
	inline static constexpr unsigned int TimerThread_TimerNode_TypeDefinitionIndex = 2779;

	class TimerThread_TimerNode : public ::System::Net::TimerThread_Timer
	{
	public:
		::System::Object* m_QueueLock; // 0x18
		::System::Net::TimerThread_Callback* m_Callback; // 0x20
		::System::Net::TimerThread_TimerNode* prev; // 0x28
		::System::Net::TimerThread_TimerNode* next; // 0x30
		::System::Object* m_Context; // 0x38
		::System::Net::TimerThread_TimerNode_TimerState m_TimerState; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_TIMERTHREAD_TIMERNODE__CTOR_OFFSET))(this);
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
	};
}
