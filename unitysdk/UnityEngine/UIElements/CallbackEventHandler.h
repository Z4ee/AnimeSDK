#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventCallbackRegistry; }

#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0x1B350BC0)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x1B350BD0)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENTATTARGETPHASE_OFFSET UNITYSDK_OFFSET(0x1B3506B0)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1B350700)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASBUBBLEUPHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B350B80)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASTRICKLEDOWNHANDLERS_OFFSET UNITYSDK_OFFSET(0x1B350B40)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CallbackEventHandler_TypeDefinitionIndex = 6193;

	class CallbackEventHandler : public ::System::Object
	{
	public:
		::UnityEngine::UIElements::EventCallbackRegistry* m_CallbackRegistry; // 0x10

		::System::Void HandleEventAtTargetPhase(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENTATTARGETPHASE_OFFSET))(this, a1);
		}

		::System::Void HandleEvent(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENT_OFFSET))(this, a1);
		}

		::System::Boolean HasTrickleDownHandlers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASTRICKLEDOWNHANDLERS_OFFSET))(this);
		}

		::System::Boolean HasBubbleUpHandlers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASBUBBLEUPHANDLERS_OFFSET))(this);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(this, a1);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET))(this, a1);
		}
	};
}
