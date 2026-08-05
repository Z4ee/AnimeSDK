#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class IPanel; }

#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x1D003350)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET UNITYSDK_OFFSET(0x1D003390)
#define UNITYENGINE_UIELEMENTS_POINTERCAPTUREDISPATCHINGSTRATEGY__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF8030)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PointerCaptureDispatchingStrategy_TypeDefinitionIndex = 28153;

	class PointerCaptureDispatchingStrategy : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREDISPATCHINGSTRATEGY__CTOR_OFFSET))(this);
		}

		::System::Boolean CanDispatchEvent(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREDISPATCHINGSTRATEGY_CANDISPATCHEVENT_OFFSET))(this, evt);
		}

		::System::Void DispatchEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_POINTERCAPTUREDISPATCHINGSTRATEGY_DISPATCHEVENT_OFFSET))(this, evt, panel);
		}
	};
}
