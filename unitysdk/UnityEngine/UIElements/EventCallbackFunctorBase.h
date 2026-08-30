#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/UIElements/CallbackPhase.h"

namespace UnityEngine::UIElements { class EventBase; }

#define UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_GET_PHASE_OFFSET UNITYSDK_OFFSET(0x1D60CB90)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventCallbackFunctorBase_TypeDefinitionIndex = 5925;

	class EventCallbackFunctorBase : public ::System::Object
	{
	public:
		::UnityEngine::UIElements::CallbackPhase _phase_k__BackingField; // 0x10

		::UnityEngine::UIElements::CallbackPhase get_phase()
		{
			return ((::UnityEngine::UIElements::CallbackPhase(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTCALLBACKFUNCTORBASE_GET_PHASE_OFFSET))(this);
		}
	};
}
