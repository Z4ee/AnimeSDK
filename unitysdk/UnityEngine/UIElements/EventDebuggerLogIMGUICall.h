#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x283610)
#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL__CTOR_OFFSET UNITYSDK_OFFSET(0x283610)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebuggerLogIMGUICall_TypeDefinitionIndex = 27570;

	struct alignas(1) EventDebuggerLogIMGUICall
	{
		::System::Void _ctor(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_DISPOSE_OFFSET))(this);
		}
	};
}
