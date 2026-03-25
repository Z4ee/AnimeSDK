#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x18ACA0A0)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x18ACA0E0)
#define UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACB670)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CommandEventDispatchingStrategy_TypeDefinitionIndex = 5881;

	class CommandEventDispatchingStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(this, evt);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_COMMANDEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(this, evt, panel);
		}
	};
}
