#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class VisualElement; }

#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x1D60D3F0)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATEEVENT_OFFSET UNITYSDK_OFFSET(0x1D608410)
#define UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATETOIMGUICONTAINER_OFFSET UNITYSDK_OFFSET(0x1D6080E0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDispatchUtilities_TypeDefinitionIndex = 5939;

	class EventDispatchUtilities : public ::System::Object
	{
	public:
		static ::System::Void PropagateEvent(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATEEVENT_OFFSET))(a1);
		}

		static ::System::Void PropagateToIMGUIContainer(::UnityEngine::UIElements::VisualElement* a1, ::UnityEngine::UIElements::EventBase* a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_PROPAGATETOIMGUICONTAINER_OFFSET))(a1, a2);
		}

		static ::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::IPanel* a2)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDISPATCHUTILITIES_EXECUTEDEFAULTACTION_OFFSET))(a1, a2);
		}
	};
}
