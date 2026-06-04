#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x1B35D8D0)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x1B35D930)
#define UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B356670)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int MouseEventDispatchingStrategy_TypeDefinitionIndex = 6210;

	class MouseEventDispatchingStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(this, a1);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* a1, ::UnityEngine::UIElements::IPanel* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_MOUSEEVENTDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(this, a1, a2);
		}
	};
}
