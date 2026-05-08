#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerable; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class ComicEventBase; }
namespace UnityEngine::Timeline { class DecorateEventBase; }
namespace UnityEngine::Timeline { class EventTriggerMarker; }
namespace UnityEngine::Timeline { class KeyEventBase; }
namespace UnityEngine::Timeline { class LogicEventBase; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_CONTAINKEY_OFFSET UNITYSDK_OFFSET(0x1C225BC0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_EXISTKEYEVENT_OFFSET UNITYSDK_OFFSET(0x1C225910)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_GET_GETDECORATEEVENTBASES_OFFSET UNITYSDK_OFFSET(0x1C225A10)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_GET_GETKEYEVENTBASES_OFFSET UNITYSDK_OFFSET(0x1C2258D0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_GET_GETLOGICEVENTBASES_OFFSET UNITYSDK_OFFSET(0x1C225A50)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONADDEVENTVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C225D10)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONDECORATEEVENTBASEVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C225D20)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONKEYEVENTBASESVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C225CE0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONLOGICEVENTBASEVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C225D50)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONMARKEREVENTBASESVALUEDROPDOWN_OFFSET UNITYSDK_OFFSET(0x1C225D80)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_SETREF_OFFSET UNITYSDK_OFFSET(0x1C225DB0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_TRAVERSEEVENTS_OFFSET UNITYSDK_OFFSET(0x1C225A90)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_TRAVERSEKEYS_OFFSET UNITYSDK_OFFSET(0x1C225B30)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C225E40)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerMarkerInfo_TypeDefinitionIndex = 30763;

	class EventTriggerMarkerInfo : public ::System::Object
	{
	public:
		::UnityEngine::Timeline::EventTriggerMarker* parent; // 0x10
		::System::String* key; // 0x18
		::UnityEngine::Timeline::KeyEventBase* keyEventBase; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::ComicEventBase*>* markerEventBases; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::KeyEventBase*>* get_GetKeyEventBases()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::KeyEventBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_GET_GETKEYEVENTBASES_OFFSET))(this);
		}

		::System::Boolean ExistKeyEvent()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_EXISTKEYEVENT_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::DecorateEventBase*>* get_GetDecorateEventBases()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::DecorateEventBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_GET_GETDECORATEEVENTBASES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Timeline::LogicEventBase*>* get_GetLogicEventBases()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Timeline::LogicEventBase*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_GET_GETLOGICEVENTBASES_OFFSET))(this);
		}

		::System::Void TraverseEvents(::System::Action_1<::UnityEngine::Timeline::ComicEventBase*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Timeline::ComicEventBase*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_TRAVERSEEVENTS_OFFSET))(this, cb);
		}

		::System::Void TraverseKeys(::System::Action_1<::System::String*>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_TRAVERSEKEYS_OFFSET))(this, cb);
		}

		::System::Boolean ContainKey(::System::String* key)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_CONTAINKEY_OFFSET))(this, key);
		}

		::System::Collections::IEnumerable* OnKeyEventBasesValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONKEYEVENTBASESVALUEDROPDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerable* OnDecorateEventBaseValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONDECORATEEVENTBASEVALUEDROPDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerable* OnLogicEventBaseValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONLOGICEVENTBASEVALUEDROPDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerable* OnMarkerEventBasesValueDropDown()
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONMARKEREVENTBASESVALUEDROPDOWN_OFFSET))(this);
		}

		::System::Collections::IEnumerable* OnAddEventValueDropDown(::System::Type* baseType)
		{
			return ((::System::Collections::IEnumerable*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_ONADDEVENTVALUEDROPDOWN_OFFSET))(this, baseType);
		}

		::System::Void SetRef(::UnityEngine::Timeline::EventTriggerMarker* m)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::EventTriggerMarker*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO_SETREF_OFFSET))(this, m);
		}
	};
}
