#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"
#include "unitysdk/UniLabs/Time/TimeUnit.h"

namespace System { class String; }

#define UNILABS_TIME_TIMEUNITEXTENSIONS_FROMSINGLEUNITVALUE_OFFSET UNITYSDK_OFFSET(0x1FBB9560)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_GETHIGHESTUNITVALUE_OFFSET UNITYSDK_OFFSET(0x1FBB8880)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_GETLOWESTUNITVALUE_OFFSET UNITYSDK_OFFSET(0x1FBB7D60)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_GETSINGLEUNITVALUE_OFFSET UNITYSDK_OFFSET(0x1FBB9440)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUE_OFFSET UNITYSDK_OFFSET(0x1FBB7900)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_SNAPTOUNIT_OFFSET UNITYSDK_OFFSET(0x1FBB9650)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_TOSEPARATORSTRING_OFFSET UNITYSDK_OFFSET(0x1FBB7870)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_TOSHORTSTRING_OFFSET UNITYSDK_OFFSET(0x1FBB77E0)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_WITHHIGHESTUNITVALUE_OFFSET UNITYSDK_OFFSET(0x1FBB8DA0)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_WITHLOWESTUNITVALUE_OFFSET UNITYSDK_OFFSET(0x1FBB81E0)
#define UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUE_OFFSET UNITYSDK_OFFSET(0x1FBB7AC0)

namespace UniLabs::Time
{
	inline static constexpr unsigned int TimeUnitExtensions_TypeDefinitionIndex = 95331;

	class TimeUnitExtensions : public ::System::Object
	{
	public:
		static ::System::String* ToShortString(::UniLabs::Time::TimeUnit timeUnit)
		{
			return ((::System::String*(*)(::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_TOSHORTSTRING_OFFSET))(timeUnit);
		}

		static ::System::String* ToSeparatorString(::UniLabs::Time::TimeUnit timeUnit)
		{
			return ((::System::String*(*)(::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_TOSEPARATORSTRING_OFFSET))(timeUnit);
		}

		static ::System::Double GetUnitValue(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit)
		{
			return ((::System::Double(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_GETUNITVALUE_OFFSET))(timeSpan, timeUnit);
		}

		static ::System::TimeSpan WithUnitValue(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit, ::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, ::System::Double))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_WITHUNITVALUE_OFFSET))(timeSpan, timeUnit, value);
		}

		static ::System::Double GetLowestUnitValue(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit)
		{
			return ((::System::Double(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_GETLOWESTUNITVALUE_OFFSET))(timeSpan, timeUnit);
		}

		static ::System::TimeSpan WithLowestUnitValue(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit, ::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, ::System::Double))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_WITHLOWESTUNITVALUE_OFFSET))(timeSpan, timeUnit, value);
		}

		static ::System::Double GetHighestUnitValue(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit)
		{
			return ((::System::Double(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_GETHIGHESTUNITVALUE_OFFSET))(timeSpan, timeUnit);
		}

		static ::System::TimeSpan WithHighestUnitValue(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit, ::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, ::System::Double))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_WITHHIGHESTUNITVALUE_OFFSET))(timeSpan, timeUnit, value);
		}

		static ::System::Double GetSingleUnitValue(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit)
		{
			return ((::System::Double(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_GETSINGLEUNITVALUE_OFFSET))(timeSpan, timeUnit);
		}

		static ::System::TimeSpan FromSingleUnitValue(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit, ::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit, ::System::Double))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_FROMSINGLEUNITVALUE_OFFSET))(timeSpan, timeUnit, value);
		}

		static ::System::TimeSpan SnapToUnit(::System::TimeSpan timeSpan, ::UniLabs::Time::TimeUnit timeUnit)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::UniLabs::Time::TimeUnit))((::PBYTE)hIl2Cpp + UNILABS_TIME_TIMEUNITEXTENSIONS_SNAPTOUNIT_OFFSET))(timeSpan, timeUnit);
		}
	};
}
