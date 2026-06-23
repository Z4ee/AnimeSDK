#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Type; }

#define UNITYENGINE_TIMELINE_TIMELINEFRAME___C__DISPLAYCLASS48_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5D4B0)
#define UNITYENGINE_TIMELINE_TIMELINEFRAME___C__DISPLAYCLASS48_0__SETCURVEVALUE_B__0_OFFSET UNITYSDK_OFFSET(0x1DD5D4C0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int TimelineFrame___c__DisplayClass48_0_TypeDefinitionIndex = 32298;

	class TimelineFrame___c__DisplayClass48_0 : public ::System::Object
	{
	public:
		::System::Type* editorFrameType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME___C__DISPLAYCLASS48_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _SetCurveValue_b__0(::System::Type* typeItem)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_TIMELINEFRAME___C__DISPLAYCLASS48_0__SETCURVEVALUE_B__0_OFFSET))(this, typeItem);
		}
	};
}
