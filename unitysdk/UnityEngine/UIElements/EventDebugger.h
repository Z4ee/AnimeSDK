#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class PropagationPaths; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGER_LOGPROPAGATIONPATHS_OFFSET UNITYSDK_OFFSET(0x18ACDCF0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebugger_TypeDefinitionIndex = 5959;

	class EventDebugger : public ::System::Object
	{
	public:
		static ::System::Void LogPropagationPaths(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPaths* paths)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPaths*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGER_LOGPROPAGATIONPATHS_OFFSET))(evt, paths);
		}
	};
}
