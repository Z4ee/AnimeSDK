#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGEXECUTEDEFAULTACTION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGEXECUTEDEFAULTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x283610)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebuggerLogExecuteDefaultAction_TypeDefinitionIndex = 27571;

	struct alignas(1) EventDebuggerLogExecuteDefaultAction
	{
		::System::Void _ctor(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGEXECUTEDEFAULTACTION__CTOR_OFFSET))(this, evt);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGEXECUTEDEFAULTACTION_DISPOSE_OFFSET))(this);
		}
	};
}
