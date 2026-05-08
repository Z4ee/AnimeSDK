#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UniLabs/Time/TimeUnit.h"

namespace System { class String; }

#define UNILABS_TIME_TIMESPANRANGEATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C499160)
#define UNILABS_TIME_TIMESPANRANGEATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C499150)

namespace UniLabs::Time
{
	inline static constexpr unsigned int TimeSpanRangeAttribute_TypeDefinitionIndex = 85822;

	class TimeSpanRangeAttribute : public ::System::Attribute
	{
	public:
		::System::String* DisableMinMaxIf; // 0x10
		::System::String* MaxGetter; // 0x18
		::System::String* MinGetter; // 0x20
		::UniLabs::Time::TimeUnit SnappingUnit; // 0x28
		::System::Boolean Inline; // 0x2C

		::System::Void _ctor(::System::String* maxGetter, ::System::Boolean inline_, ::UniLabs::Time::TimeUnit snappingUnit)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMESPANRANGEATTRIBUTE__CTOR_OFFSET))(this, maxGetter, inline_, snappingUnit);
		}

		::System::Void _ctor_1(::System::String* minGetter, ::System::String* maxGetter, ::System::Boolean inline_, ::UniLabs::Time::TimeUnit snappingUnit)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMESPANRANGEATTRIBUTE__CTOR_1_OFFSET))(this, minGetter, maxGetter, inline_, snappingUnit);
		}
	};
}
