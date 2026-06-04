#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1020)
#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL__CTOR_OFFSET UNITYSDK_OFFSET(0x1020)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebuggerLogIMGUICall_TypeDefinitionIndex = 6246;

	struct alignas(1) EventDebuggerLogIMGUICall
	{
		::System::Void _ctor(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL__CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGERLOGIMGUICALL_DISPOSE_OFFSET))(this);
		}
	};
}
