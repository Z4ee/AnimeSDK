#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::Events { class UnityEvent; }
namespace UnityEngine::Playables { class INotification; }
namespace UnityEngine::Timeline { class SignalAsset; }
namespace UnityEngine::Timeline { class SignalReceiver_EventKeyValue; }

#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDEMPTYREACTION_OFFSET UNITYSDK_OFFSET(0x189B16C0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDREACTION_OFFSET UNITYSDK_OFFSET(0x189B14D0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGEREACTIONATINDEX_OFFSET UNITYSDK_OFFSET(0x189B1F50)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGESIGNALATINDEX_OFFSET UNITYSDK_OFFSET(0x189B1AF0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_COUNT_OFFSET UNITYSDK_OFFSET(0x189B1AC0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTIONATINDEX_OFFSET UNITYSDK_OFFSET(0x189B2010)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTION_OFFSET UNITYSDK_OFFSET(0x189B19E0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREGISTEREDSIGNALS_OFFSET UNITYSDK_OFFSET(0x189B19C0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETSIGNALASSETATINDEX_OFFSET UNITYSDK_OFFSET(0x189B20A0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x189B2130)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONNOTIFY_OFFSET UNITYSDK_OFFSET(0x189B12E0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVEATINDEX_OFFSET UNITYSDK_OFFSET(0x189B1CE0)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVE_OFFSET UNITYSDK_OFFSET(0x189B1770)
#define UNITYENGINE_TIMELINE_SIGNALRECEIVER__CTOR_OFFSET UNITYSDK_OFFSET(0x189B2140)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int SignalReceiver_TypeDefinitionIndex = 29877;

	class SignalReceiver : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Timeline::SignalReceiver_EventKeyValue* m_Events; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER__CTOR_OFFSET))(this);
		}

		::System::Void OnNotify(::UnityEngine::Playables::Playable origin, ::UnityEngine::Playables::INotification* notification, ::System::Object* context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::INotification*, ::System::Object*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONNOTIFY_OFFSET))(this, origin, notification, context);
		}

		::System::Void AddReaction(::UnityEngine::Timeline::SignalAsset* asset, ::UnityEngine::Events::UnityEvent* reaction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDREACTION_OFFSET))(this, asset, reaction);
		}

		::System::Int32 AddEmptyReaction(::UnityEngine::Events::UnityEvent* reaction)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ADDEMPTYREACTION_OFFSET))(this, reaction);
		}

		::System::Void Remove(::UnityEngine::Timeline::SignalAsset* asset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVE_OFFSET))(this, asset);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset*>* GetRegisteredSignals()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::SignalAsset*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREGISTEREDSIGNALS_OFFSET))(this);
		}

		::UnityEngine::Events::UnityEvent* GetReaction(::UnityEngine::Timeline::SignalAsset* key)
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTION_OFFSET))(this, key);
		}

		::System::Int32 Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_COUNT_OFFSET))(this);
		}

		::System::Void ChangeSignalAtIndex(::System::Int32 idx, ::UnityEngine::Timeline::SignalAsset* newKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Timeline::SignalAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGESIGNALATINDEX_OFFSET))(this, idx, newKey);
		}

		::System::Void RemoveAtIndex(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_REMOVEATINDEX_OFFSET))(this, idx);
		}

		::System::Void ChangeReactionAtIndex(::System::Int32 idx, ::UnityEngine::Events::UnityEvent* reaction)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Events::UnityEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_CHANGEREACTIONATINDEX_OFFSET))(this, idx, reaction);
		}

		::UnityEngine::Events::UnityEvent* GetReactionAtIndex(::System::Int32 idx)
		{
			return ((::UnityEngine::Events::UnityEvent*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETREACTIONATINDEX_OFFSET))(this, idx);
		}

		::UnityEngine::Timeline::SignalAsset* GetSignalAssetAtIndex(::System::Int32 idx)
		{
			return ((::UnityEngine::Timeline::SignalAsset*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_GETSIGNALASSETATINDEX_OFFSET))(this, idx);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_SIGNALRECEIVER_ONENABLE_OFFSET))(this);
		}
	};
}
