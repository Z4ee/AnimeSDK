#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x18AD6720)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x18AD6760)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x18ACF5D0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEventDispatchingStrategy_TypeDefinitionIndex = 5921;

	class MouseEventDispatchingStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(this, evt);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(this, evt, panel);
		}
	};
}
