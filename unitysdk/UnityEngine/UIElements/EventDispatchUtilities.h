#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x18ACF190)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATEEVENT_OFFSET UNITYSDK_OFFSET(0x18ACA870)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATETOIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0x18ACA530)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatchUtilities_TypeDefinitionIndex = 5912;

	class EventDispatchUtilities : public ::System::Object
	{
	public:
		static ::System::Void PropagateEvent(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATEEVENT_OFFSET))(evt);
		}

		static ::System::Void PropagateToIMGUIContainer(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATETOIMGUICONTAINER_OFFSET))(root, evt);
		}

		static ::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_EXECUTEDEFAULTACTION_OFFSET))(evt, panel);
		}
	};
}
