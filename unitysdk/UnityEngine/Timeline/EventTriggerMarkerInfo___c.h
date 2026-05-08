#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::Timeline { class ComicEventBase; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB0B6B0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB0B6F0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__EXISTKEYEVENT_B__6_0_OFFSET UNITYSDK_OFFSET(0x1BB0B700)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerMarkerInfo___c_TypeDefinitionIndex = 30764;

	class EventTriggerMarkerInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Timeline::ComicEventBase*, ::System::Boolean>** StaticGet___9__6_0()
		{
			return (::System::Func_2<::UnityEngine::Timeline::ComicEventBase*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(EventTriggerMarkerInfo___c_TypeDefinitionIndex)->GetStaticField(0x24D50);
		}
		static ::UnityEngine::Timeline::EventTriggerMarkerInfo___c** StaticGet___9()
		{
			return (::UnityEngine::Timeline::EventTriggerMarkerInfo___c**)Il2CppClass::FromTypeDefinitionIndex(EventTriggerMarkerInfo___c_TypeDefinitionIndex)->GetStaticField(0x24D58);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _ExistKeyEvent_b__6_0(::UnityEngine::Timeline::ComicEventBase* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::ComicEventBase*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__EXISTKEYEVENT_B__6_0_OFFSET))(this, x);
		}
	};
}
