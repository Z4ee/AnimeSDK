#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATEFIXEDDATERULE_OFFSET UNITYSDK_OFFSET(0x16258580)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATEFLOATINGDATERULE_OFFSET UNITYSDK_OFFSET(0x1625B230)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATETRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x16266DD0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20CF750)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x20CF6B0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x163BC80)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x793A0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x20CF6A0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_ISFIXEDDATERULE_OFFSET UNITYSDK_OFFSET(0x15AFF50)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x14E6C20)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GET_WEEK_OFFSET UNITYSDK_OFFSET(0x20CF690)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16265E10)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x20CF7B0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x20CF7C0)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME_VALIDATETRANSITIONTIME_OFFSET UNITYSDK_OFFSET(0x16266E60)
#define SYSTEM_TIMEZONEINFO_TRANSITIONTIME__CTOR_OFFSET UNITYSDK_OFFSET(0x20CF7D0)

namespace System
{
	inline static constexpr unsigned int TimeZoneInfo_TransitionTime_TypeDefinitionIndex = 343;

	struct alignas(8) TimeZoneInfo_TransitionTime
	{
		::System::DateTime m_timeOfDay; // 0x10
		::System::Byte m_month; // 0x18
		::System::Byte m_week; // 0x19
		::System::Byte m_day; // 0x1A
		::System::DayOfWeek m_dayOfWeek; // 0x1C
		::System::Boolean m_isFixedDateRule; // 0x20

		/*
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME__CTOR_OFFSET))(this, info, context);
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

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_EQUALS_OFFSET))(this, obj);
		}

		static ::System::Boolean op_Inequality(::System::TimeZoneInfo_TransitionTime t1, ::System::TimeZoneInfo_TransitionTime t2)
		{
			return ((::System::Boolean(*)(::System::TimeZoneInfo_TransitionTime, ::System::TimeZoneInfo_TransitionTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_OP_INEQUALITY_OFFSET))(t1, t2);
		}

		::System::Boolean Equals_1(::System::TimeZoneInfo_TransitionTime other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeZoneInfo_TransitionTime))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_EQUALS_1_OFFSET))(this, other);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_GETHASHCODE_OFFSET))(this);
		}

		static ::System::TimeZoneInfo_TransitionTime CreateFixedDateRule(::System::DateTime timeOfDay, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::TimeZoneInfo_TransitionTime(*)(::System::DateTime, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATEFIXEDDATERULE_OFFSET))(timeOfDay, month, day);
		}

		static ::System::TimeZoneInfo_TransitionTime CreateFloatingDateRule(::System::DateTime timeOfDay, ::System::Int32 month, ::System::Int32 week, ::System::DayOfWeek dayOfWeek)
		{
			return ((::System::TimeZoneInfo_TransitionTime(*)(::System::DateTime, ::System::Int32, ::System::Int32, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATEFLOATINGDATERULE_OFFSET))(timeOfDay, month, week, dayOfWeek);
		}

		static ::System::TimeZoneInfo_TransitionTime CreateTransitionTime(::System::DateTime timeOfDay, ::System::Int32 month, ::System::Int32 week, ::System::Int32 day, ::System::DayOfWeek dayOfWeek, ::System::Boolean isFixedDateRule)
		{
			return ((::System::TimeZoneInfo_TransitionTime(*)(::System::DateTime, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DayOfWeek, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_CREATETRANSITIONTIME_OFFSET))(timeOfDay, month, week, day, dayOfWeek, isFixedDateRule);
		}

		static ::System::Void ValidateTransitionTime(::System::DateTime timeOfDay, ::System::Int32 month, ::System::Int32 week, ::System::Int32 day, ::System::DayOfWeek dayOfWeek)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DayOfWeek))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_VALIDATETRANSITIONTIME_OFFSET))(timeOfDay, month, week, day, dayOfWeek);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		/*
		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_TIMEZONEINFO_TRANSITIONTIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
		*/
	};
}
