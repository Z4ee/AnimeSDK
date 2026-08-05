#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/UniLabs/Time/TimeUnit.h"

#define UNILABS_TIME_TIMESPANDRAWERSETTINGSATTRIBUTE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FBB7760)
#define UNILABS_TIME_TIMESPANDRAWERSETTINGSATTRIBUTE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1FBB7770)
#define UNILABS_TIME_TIMESPANDRAWERSETTINGSATTRIBUTE__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1FBB7790)
#define UNILABS_TIME_TIMESPANDRAWERSETTINGSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBB7750)

namespace UniLabs::Time
{
	inline static constexpr unsigned int TimeSpanDrawerSettingsAttribute_TypeDefinitionIndex = 95328;

	class TimeSpanDrawerSettingsAttribute : public ::System::Attribute
	{
	public:
		::UniLabs::Time::TimeUnit HighestUnit; // 0x10
		::UniLabs::Time::TimeUnit LowestUnit; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMESPANDRAWERSETTINGSATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::UniLabs::Time::TimeUnit highestUnit, ::UniLabs::Time::TimeUnit lowestUnit)
		{
			return ((::System::Void(*)(::PVOID, ::UniLabs::Time::TimeUnit, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMESPANDRAWERSETTINGSATTRIBUTE__CTOR_1_OFFSET))(this, highestUnit, lowestUnit);
		}

		::System::Void _ctor_2(::UniLabs::Time::TimeUnit highestUnit, ::System::Boolean drawMilliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::UniLabs::Time::TimeUnit, ::System::Boolean))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMESPANDRAWERSETTINGSATTRIBUTE__CTOR_2_OFFSET))(this, highestUnit, drawMilliseconds);
		}

		::System::Void _ctor_3(::System::Boolean drawMilliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMESPANDRAWERSETTINGSATTRIBUTE__CTOR_3_OFFSET))(this, drawMilliseconds);
		}
	};
}
