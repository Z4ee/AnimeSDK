#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace UniLabs::Time { class UTimeSpan; }

#define UNILABS_TIME_UTIMESPANRANGE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1C49CB00)
#define UNILABS_TIME_UTIMESPANRANGE_GET_END_OFFSET UNITYSDK_OFFSET(0x1C49CA90)
#define UNILABS_TIME_UTIMESPANRANGE_GET_START_OFFSET UNITYSDK_OFFSET(0x1C49CA20)
#define UNILABS_TIME_UTIMESPANRANGE_ISINRANGE_OFFSET UNITYSDK_OFFSET(0x1C49CBB0)
#define UNILABS_TIME_UTIMESPANRANGE_ONENDCHANGED_OFFSET UNITYSDK_OFFSET(0x1C49CD40)
#define UNILABS_TIME_UTIMESPANRANGE_ONSTARTCHANGED_OFFSET UNITYSDK_OFFSET(0x1C49CD00)
#define UNILABS_TIME_UTIMESPANRANGE_SET_END_OFFSET UNITYSDK_OFFSET(0x1C49CAB0)
#define UNILABS_TIME_UTIMESPANRANGE_SET_START_OFFSET UNITYSDK_OFFSET(0x1C49CA40)
#define UNILABS_TIME_UTIMESPANRANGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C49CC00)
#define UNILABS_TIME_UTIMESPANRANGE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1C49CC80)
#define UNILABS_TIME_UTIMESPANRANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C49CBF0)

namespace UniLabs::Time
{
	inline static constexpr unsigned int UTimeSpanRange_TypeDefinitionIndex = 85829;

	class UTimeSpanRange : public ::System::Object
	{
	public:
		::UniLabs::Time::UTimeSpan* _Start; // 0x10
		::UniLabs::Time::UTimeSpan* _End; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::TimeSpan start)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE__CTOR_1_OFFSET))(this, start);
		}

		::System::Void _ctor_2(::System::TimeSpan start, ::System::TimeSpan end)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE__CTOR_2_OFFSET))(this, start, end);
		}

		::System::TimeSpan get_Start()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE_SET_START_OFFSET))(this, value);
		}

		::System::TimeSpan get_End()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::TimeSpan value)
		{
			return ((::System::Void(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE_SET_END_OFFSET))(this, value);
		}

		::System::TimeSpan get_Duration()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean IsInRange(::System::TimeSpan time)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE_ISINRANGE_OFFSET))(this, time);
		}

		::System::Void OnStartChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE_ONSTARTCHANGED_OFFSET))(this);
		}

		::System::Void OnEndChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNILABS_TIME_UTIMESPANRANGE_ONENDCHANGED_OFFSET))(this);
		}
	};
}
