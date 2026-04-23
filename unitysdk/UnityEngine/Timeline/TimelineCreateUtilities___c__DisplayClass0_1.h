#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class ScriptableObject; }

#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES___C__DISPLAYCLASS0_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F5860)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES___C__DISPLAYCLASS0_1__GENERATEUNIQUEACTORNAME_B__1_OFFSET UNITYSDK_OFFSET(0x1A3F58C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineCreateUtilities___c__DisplayClass0_1_TypeDefinitionIndex = 35644;

	class TimelineCreateUtilities___c__DisplayClass0_1 : public ::System::Object
	{
	public:
		::System::String* result; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES___C__DISPLAYCLASS0_1__CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateUniqueActorName_b__1(::UnityEngine::ScriptableObject* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES___C__DISPLAYCLASS0_1__GENERATEUNIQUEACTORNAME_B__1_OFFSET))(this, x);
		}
	};
}
