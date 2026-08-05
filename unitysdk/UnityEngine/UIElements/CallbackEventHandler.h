#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventCallbackRegistry; }

#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0x1CFF2210)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x1CFF2220)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENTATTARGETPHASE_OFFSET UNITYSDK_OFFSET(0x1CFF1E00)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x1CFF1E50)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASBUBBLEUPHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CFF21D0)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASTRICKLEDOWNHANDLERS_OFFSET UNITYSDK_OFFSET(0x1CFF2190)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFF2230)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CallbackEventHandler_TypeDefinitionIndex = 28116;

	class CallbackEventHandler : public ::System::Object
	{
	public:
		::UnityEngine::UIElements::EventCallbackRegistry* m_CallbackRegistry; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void HandleEventAtTargetPhase(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENTATTARGETPHASE_OFFSET))(this, evt);
		}

		::System::Void HandleEvent(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENT_OFFSET))(this, evt);
		}

		::System::Boolean HasTrickleDownHandlers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASTRICKLEDOWNHANDLERS_OFFSET))(this);
		}

		::System::Boolean HasBubbleUpHandlers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASBUBBLEUPHANDLERS_OFFSET))(this);
		}

		::System::Void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET))(this, evt);
		}

		::System::Void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UIElements::EventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET))(this, evt);
		}
	};
}
