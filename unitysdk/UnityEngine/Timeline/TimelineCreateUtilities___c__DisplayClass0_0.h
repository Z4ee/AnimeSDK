#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }

#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA946B0)
#define UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES___C__DISPLAYCLASS0_0__GENERATEUNIQUEACTORNAME_B__0_OFFSET UNITYSDK_OFFSET(0x1BA946C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineCreateUtilities___c__DisplayClass0_0_TypeDefinitionIndex = 30889;

	class TimelineCreateUtilities___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::Type* trackType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _GenerateUniqueActorName_b__0(::UnityEngine::ScriptableObject* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ScriptableObject*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINECREATEUTILITIES___C__DISPLAYCLASS0_0__GENERATEUNIQUEACTORNAME_B__0_OFFSET))(this, x);
		}
	};
}
