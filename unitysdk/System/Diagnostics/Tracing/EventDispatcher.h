#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Diagnostics::Tracing { class EventListener; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTDISPATCHER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB5AEC0)

namespace System::Diagnostics::Tracing
{
	inline static constexpr unsigned int EventDispatcher_TypeDefinitionIndex = 1704;

	class EventDispatcher : public ::System::Object
	{
	public:
		::System::Diagnostics::Tracing::EventDispatcher* m_Next; // 0x10
		::Il2CppArray<::System::Boolean>* m_EventEnabled; // 0x18
		::System::Diagnostics::Tracing::EventListener* m_Listener; // 0x20
		::System::Boolean m_activityFilteringEnabled; // 0x28

		::System::Void _ctor(::System::Diagnostics::Tracing::EventDispatcher* a1, ::Il2CppArray<::System::Boolean>* a2, ::System::Diagnostics::Tracing::EventListener* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::Tracing::EventDispatcher*, ::Il2CppArray<::System::Boolean>*, ::System::Diagnostics::Tracing::EventListener*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTDISPATCHER__CTOR_OFFSET))(this, a1, a2, a3);
		}
	};
}
