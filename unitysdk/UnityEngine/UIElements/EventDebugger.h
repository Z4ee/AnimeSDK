#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class PropagationPaths; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGER_LOGPROPAGATIONPATHS_OFFSET UNITYSDK_OFFSET(0x1EDE8150)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebugger_TypeDefinitionIndex = 5986;

	class EventDebugger : public ::System::Object
	{
	public:
		static ::System::Void LogPropagationPaths(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::PropagationPaths* a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPaths*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGER_LOGPROPAGATIONPATHS_OFFSET))(a1, a2);
		}
	};
}
