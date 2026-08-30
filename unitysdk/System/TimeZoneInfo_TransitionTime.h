#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATEFIXEDDATERULE_OFFSET UNITYSDK_OFFSET(0x1C675980)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATEFLOATINGDATERULE_OFFSET UNITYSDK_OFFSET(0x1C678590)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATETRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x1C685250)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3B980B0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x3B98020)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3A30FD0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x784470)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3B76750)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_ISFIXEDDATERULE_OFFSET UNITYSDK_OFFSET(0x3232810)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x3A41370)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x161E0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_WEEK_OFFSET UNITYSDK_OFFSET(0x3AFE680)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C684280)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x3B98100)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3B98110)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_VALIDATETRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x1C6852E0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x3B98120)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_TransitionTime_TypeDefinitionIndex = 345;

	struct alignas(8) TimeZoneInfo_TransitionTime
	{
		::System::DateTime m_timeOfDay; // 0x10
		::System::Byte m_month; // 0x18
		::System::Byte m_week; // 0x19
		::System::Byte m_day; // 0x1A
		::System::DayOfWeek m_dayOfWeek; // 0x1C
		::System::Boolean m_isFixedDateRule; // 0x20

		/*
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME__CTOR_OFFSET))(this, a1, a2);
		}
		*/

		::System::DateTime get_TimeOfDay()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_TIMEOFDAY_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_MONTH_OFFSET))(this);
		}

		::System::Int32 get_Week()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_WEEK_OFFSET))(this);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_DAY_OFFSET))(this);
		}

		::System::DayOfWeek get_DayOfWeek()
		{
			return ((::System::DayOfWeek(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_DAYOFWEEK_OFFSET))(this);
		}

		::System::Boolean get_IsFixedDateRule()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_ISFIXEDDATERULE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_EQUALS_OFFSET))(this, a1);
		}

		static ::System::Boolean op_Inequality(::System::TimeZoneInfo_TransitionTime a1, ::System::TimeZoneInfo_TransitionTime a2)
		{
			return ((::System::Boolean(*)(::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		::System::Boolean Equals_1(::System::TimeZoneInfo_TransitionTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo_TransitionTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GETHASHCODE_OFFSET))(this);
		}

		static ::System::TimeZoneInfo_TransitionTime CreateFixedDateRule(::System::DateTime a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::TimeZoneInfo_TransitionTime(*)(::System::DateTime, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATEFIXEDDATERULE_OFFSET))(a1, a2, a3);
		}

		static ::System::TimeZoneInfo_TransitionTime CreateFloatingDateRule(::System::DateTime a1, ::System::Int32 a2, ::System::Int32 a3, ::System::DayOfWeek a4)
		{
			return ((::System::TimeZoneInfo_TransitionTime(*)(::System::DateTime, ::System::Int32, ::System::Int32, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATEFLOATINGDATERULE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::TimeZoneInfo_TransitionTime CreateTransitionTime(::System::DateTime a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::DayOfWeek a5, ::System::Boolean a6)
		{
			return ((::System::TimeZoneInfo_TransitionTime(*)(::System::DateTime, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DayOfWeek, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATETRANSITIONTIME_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void ValidateTransitionTime(::System::DateTime a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::DayOfWeek a5)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_VALIDATETRANSITIONTIME_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		/*
		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
		*/
	};
}
