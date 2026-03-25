#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x18AD4E60)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x18AD4ED0)
#define UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACF5E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int IMGUIEventDispatchingStrategy_TypeDefinitionIndex = 5913;

	class IMGUIEventDispatchingStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(this, evt);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_IMGUIEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(this, evt, panel);
		}
	};
}
