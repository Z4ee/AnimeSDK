#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS15_0__CONTAINKEY_B__0_OFFSET UNITYSDK_OFFSET(0x1DE5FAF0)
#define UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DE5FAE0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int EventTriggerMarkerInfo___c__DisplayClass15_0_TypeDefinitionIndex = 32318;

	class EventTriggerMarkerInfo___c__DisplayClass15_0 : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::System::Boolean exist; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
		}

		::System::Void _ContainKey_b__0(::System::String* _key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_EVENTTRIGGERMARKERINFO___C__DISPLAYCLASS15_0__CONTAINKEY_B__0_OFFSET))(this, _key);
		}
	};
}
