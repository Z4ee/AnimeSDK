#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventCallbackRegistry; }

#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTIONATTARGET_OFFSET UNITYSDK_OFFSET(0x197A3F30)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_EXECUTEDEFAULTACTION_OFFSET UNITYSDK_OFFSET(0x197A3F40)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENTATTARGETPHASE_OFFSET UNITYSDK_OFFSET(0x197A3B20)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HANDLEEVENT_OFFSET UNITYSDK_OFFSET(0x197A3B70)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASBUBBLEUPHANDLERS_OFFSET UNITYSDK_OFFSET(0x197A3EF0)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER_HASTRICKLEDOWNHANDLERS_OFFSET UNITYSDK_OFFSET(0x197A3EB0)
#define UNITYENGINE_UIELEMENTS_CALLBACKEVENTHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197A3F50)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int CallbackEventHandler_TypeDefinitionIndex = 25011;

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
