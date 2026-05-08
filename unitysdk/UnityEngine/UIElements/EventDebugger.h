#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }
namespace UnityEngine::UIElements { class EventBase; }
namespace UnityEngine::UIElements { class EventDebuggerCallTrace; }
namespace UnityEngine::UIElements { class EventDebuggerDefaultActionTrace; }
namespace UnityEngine::UIElements { class EventDebuggerPathTrace; }
namespace UnityEngine::UIElements { class EventDebuggerTrace; }
namespace UnityEngine::UIElements { class IPanel; }
namespace UnityEngine::UIElements { class PropagationPaths; }

#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGER_LOGPROPAGATIONPATHS_OFFSET UNITYSDK_OFFSET(0x197A8020)
#define UNITYENGINE_UIELEMENTS_EVENTDEBUGGER__CTOR_OFFSET UNITYSDK_OFFSET(0x197A94B0)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int EventDebugger_TypeDefinitionIndex = 25069;

	class EventDebugger : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IPanel*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventDebuggerCallTrace*>*>* m_EventCalledObjects; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IPanel*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventDebuggerDefaultActionTrace*>*>* m_EventDefaultActionObjects; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IPanel*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventDebuggerPathTrace*>*>* m_EventPathObjects; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IPanel*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EventDebuggerTrace*>*>* m_EventProcessedEvents; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IPanel*, ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDebuggerTrace*>*>* m_StackOfProcessedEvent; // 0x30
		::System::Collections::Generic::Dictionary_2<::UnityEngine::UIElements::IPanel*, ::System::Int64>* m_ModificationCount; // 0x38
		::System::Boolean m_Log; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGER__CTOR_OFFSET))(this);
		}

		static ::System::Void LogPropagationPaths(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::PropagationPaths* paths)
		{
			return ((::System::Void(*)(::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::PropagationPaths*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_EVENTDEBUGGER_LOGPROPAGATIONPATHS_OFFSET))(evt, paths);
		}
	};
}
