#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Timeline { class SignalAsset; }

#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_APPEND_OFFSET UNITYSDK_OFFSET(0x1A3EB1C0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_GET_EVENTS_OFFSET UNITYSDK_OFFSET(0x1A3EBDF0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_GET_SIGNALS_OFFSET UNITYSDK_OFFSET(0x1A3EBDE0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_REMOVE_1_OFFSET UNITYSDK_OFFSET(0x1A3EB3A0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A3EB9D0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_TRYGETVALUE_OFFSET UNITYSDK_OFFSET(0x1A3EAF70)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3EBD70)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalReceiver_EventKeyValue_TypeDefinitionIndex = 35598;

	class SignalReceiver_EventKeyValue : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::SignalAsset*>* m_Signals; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Events::UnityEvent*>* m_Events; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE__CTOR_OFFSET))(this);
		}

		::System::Boolean TryGetValue(::UnityEngine::Timeline::SignalAsset* key, ::UnityEngine::Events::UnityEvent*& value)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*&))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_TRYGETVALUE_OFFSET))(this, key, value);
		}

		::System::Void Append(::UnityEngine::Timeline::SignalAsset* key, ::UnityEngine::Events::UnityEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_APPEND_OFFSET))(this, key, value);
		}

		::System::Void Remove(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_REMOVE_OFFSET))(this, idx);
		}

		::System::Void Remove_1(::UnityEngine::Timeline::SignalAsset* key)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_EVENTKEYVALUE_REMOVE_1_OFFSET))(this, key);
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
