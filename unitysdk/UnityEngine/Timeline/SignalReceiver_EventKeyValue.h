#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Timeline { class SignalAsset; }

#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_APPEND_OFFSET UNITYSDK_OFFSET(0x1ECC98B0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1ECCA580)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_GET_SIGNALS_OFFSET UNITYSDK_OFFSET(0x1ECCA570)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1ECC9BF0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ECCA170)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1ECC95E0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1ECCA510)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalReceiver_EventKeyValue_TypeDefinitionIndex = 37539;

	class SignalReceiver_EventKeyValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* m_Signals; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* m_Events; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetValue(::UnityEngine::Timeline::SignalAsset* a1, ::UnityEngine::Events::UnityEvent*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_TRYGETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Append(::UnityEngine::Timeline::SignalAsset* a1, ::UnityEngine::Events::UnityEvent* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_APPEND_OFFSET))(this, a1, a2);
		}

		::System::Void Remove(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_REMOVE_OFFSET))(this, a1);
		}

		::System::Void Remove_1(::UnityEngine::Timeline::SignalAsset* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_REMOVE_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* get_signals()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_GET_SIGNALS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* get_events()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_GET_EVENTS_OFFSET))(this);
		}
	};
}
