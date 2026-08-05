#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_NET_INTERLOCKEDGATE_COMPLETE_OFFSET UNITYSDK_OFFSET(0x9BCD90)
#define SYSTEM_NET_INTERLOCKEDGATE_FINISHSIGNALING_OFFSET UNITYSDK_OFFSET(0x9BCD10)
#define SYSTEM_NET_INTERLOCKEDGATE_FINISHTRIGGERING_OFFSET UNITYSDK_OFFSET(0x9BCC10)
#define SYSTEM_NET_INTERLOCKEDGATE_RESET_OFFSET UNITYSDK_OFFSET(0x463B50)
#define SYSTEM_NET_INTERLOCKEDGATE_STARTSIGNALING_OFFSET UNITYSDK_OFFSET(0x9BCC90)
#define SYSTEM_NET_INTERLOCKEDGATE_STARTTRIGGERING_OFFSET UNITYSDK_OFFSET(0x9BCB90)
#define SYSTEM_NET_INTERLOCKEDGATE_TRIGGER_OFFSET UNITYSDK_OFFSET(0x9BCB10)

namespace System::Net
{
	inline static constexpr unsigned int InterlockedGate_TypeDefinitionIndex = 3295;

	struct alignas(4) InterlockedGate
	{
		// static const ::System::Int32 Open = 0x0; // 0x0
		// static const ::System::Int32 Triggering = 0x1; // 0x0
		// static const ::System::Int32 Triggered = 0x2; // 0x0
		// static const ::System::Int32 Signaling = 0x3; // 0x0
		// static const ::System::Int32 Signaled = 0x4; // 0x0
		// static const ::System::Int32 Completed = 0x5; // 0x0
		::System::Int32 m_State; // 0x10

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDGATE_RESET_OFFSET))(this);
		}

		::System::Boolean Trigger(::System::Boolean exclusive)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDGATE_TRIGGER_OFFSET))(this, exclusive);
		}

		::System::Boolean StartTriggering(::System::Boolean exclusive)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDGATE_STARTTRIGGERING_OFFSET))(this, exclusive);
		}

		::System::Void FinishTriggering()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDGATE_FINISHTRIGGERING_OFFSET))(this);
		}

		::System::Boolean StartSignaling(::System::Boolean exclusive)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDGATE_STARTSIGNALING_OFFSET))(this, exclusive);
		}

		::System::Void FinishSignaling()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDGATE_FINISHSIGNALING_OFFSET))(this);
		}

		::System::Boolean Complete()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERLOCKEDGATE_COMPLETE_OFFSET))(this);
		}
	};
}
