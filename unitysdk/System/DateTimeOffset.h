#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Globalization { class Calendar; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATETIMEOFFSET_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x99C2F0)
#define SYSTEM_DATETIMEOFFSET_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x99C4C0)
#define SYSTEM_DATETIMEOFFSET_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x99C690)
#define SYSTEM_DATETIMEOFFSET_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x99C860)
#define SYSTEM_DATETIMEOFFSET_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x99C0C0)
#define SYSTEM_DATETIMEOFFSET_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x99CA20)
#define SYSTEM_DATETIMEOFFSET_ADD_OFFSET UNITYSDK_OFFSET(0x99C0C0)
#define SYSTEM_DATETIMEOFFSET_COMPARETO_OFFSET UNITYSDK_OFFSET(0x99CC80)
#define SYSTEM_DATETIMEOFFSET_COMPARE_OFFSET UNITYSDK_OFFSET(0x1CB146D0)
#define SYSTEM_DATETIMEOFFSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x99CD80)
#define SYSTEM_DATETIMEOFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x99CD70)
#define SYSTEM_DATETIMEOFFSET_FROMUNIXTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1CB14EC0)
#define SYSTEM_DATETIMEOFFSET_FROMUNIXTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x1CB14C80)
#define SYSTEM_DATETIMEOFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x99CE90)
#define SYSTEM_DATETIMEOFFSET_GET_CLOCKDATETIME_OFFSET UNITYSDK_OFFSET(0x99AEC0)
#define SYSTEM_DATETIMEOFFSET_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x99AEC0)
#define SYSTEM_DATETIMEOFFSET_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x99B2D0)
#define SYSTEM_DATETIMEOFFSET_GET_DAY_OFFSET UNITYSDK_OFFSET(0x99B170)
#define SYSTEM_DATETIMEOFFSET_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x99B460)
#define SYSTEM_DATETIMEOFFSET_GET_LOCALDATETIME_OFFSET UNITYSDK_OFFSET(0x99B0A0)
#define SYSTEM_DATETIMEOFFSET_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x99B600)
#define SYSTEM_DATETIMEOFFSET_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x99B7B0)
#define SYSTEM_DATETIMEOFFSET_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x99B950)
#define SYSTEM_DATETIMEOFFSET_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1CB12200)
#define SYSTEM_DATETIMEOFFSET_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x99BAB0)
#define SYSTEM_DATETIMEOFFSET_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x99BAF0)
#define SYSTEM_DATETIMEOFFSET_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x99AEC0)
#define SYSTEM_DATETIMEOFFSET_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x99BD20)
#define SYSTEM_DATETIMEOFFSET_GET_UTCDATETIME_OFFSET UNITYSDK_OFFSET(0x99B000)
#define SYSTEM_DATETIMEOFFSET_GET_UTCNOW_OFFSET UNITYSDK_OFFSET(0x1CB12230)
#define SYSTEM_DATETIMEOFFSET_GET_UTCTICKS_OFFSET UNITYSDK_OFFSET(0x99BC90)
#define SYSTEM_DATETIMEOFFSET_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x99BEA0)
#define SYSTEM_DATETIMEOFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CB17710)
#define SYSTEM_DATETIMEOFFSET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1CB176F0)
#define SYSTEM_DATETIMEOFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CB177F0)
#define SYSTEM_DATETIMEOFFSET_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1CB15D30)
#define SYSTEM_DATETIMEOFFSET_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1CB15CA0)
#define SYSTEM_DATETIMEOFFSET_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1CB15920)
#define SYSTEM_DATETIMEOFFSET_PARSE_OFFSET UNITYSDK_OFFSET(0x1CB158A0)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x99CC70)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x99CE60)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x99CE70)
#define SYSTEM_DATETIMEOFFSET_TOOFFSET_OFFSET UNITYSDK_OFFSET(0x99B150)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x99D0A0)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x99D0B0)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x99D0C0)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x99D090)
#define SYSTEM_DATETIMEOFFSET_TOUNIVERSALTIME_OFFSET UNITYSDK_OFFSET(0x99D0D0)
#define SYSTEM_DATETIMEOFFSET_TOUNIXTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x99CFE0)
#define SYSTEM_DATETIMEOFFSET_TOUNIXTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x99CF30)
#define SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1CB17390)
#define SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1CB17030)
#define SYSTEM_DATETIMEOFFSET_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1CB16CE0)
#define SYSTEM_DATETIMEOFFSET_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1CB169C0)
#define SYSTEM_DATETIMEOFFSET_VALIDATEDATE_OFFSET UNITYSDK_OFFSET(0x1CB11A30)
#define SYSTEM_DATETIMEOFFSET_VALIDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x1CB11920)
#define SYSTEM_DATETIMEOFFSET_VALIDATESTYLES_OFFSET UNITYSDK_OFFSET(0x1CB15BA0)
#define SYSTEM_DATETIMEOFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CB178D0)
#define SYSTEM_DATETIMEOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x99AA60)
#define SYSTEM_DATETIMEOFFSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x99AA70)
#define SYSTEM_DATETIMEOFFSET__CTOR_3_OFFSET UNITYSDK_OFFSET(0x99AA80)
#define SYSTEM_DATETIMEOFFSET__CTOR_4_OFFSET UNITYSDK_OFFSET(0x99ABD0)
#define SYSTEM_DATETIMEOFFSET__CTOR_5_OFFSET UNITYSDK_OFFSET(0x99AD40)
#define SYSTEM_DATETIMEOFFSET__CTOR_6_OFFSET UNITYSDK_OFFSET(0x99CE80)
#define SYSTEM_DATETIMEOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x99A8F0)

namespace System
{
	inline static constexpr unsigned int DateTimeOffset_TypeDefinitionIndex = 212;

	struct alignas(8) DateTimeOffset
	{
		static ::System::DateTimeOffset* StaticGet_MinValue()
		{
			return (::System::DateTimeOffset*)Il2CppClass::FromTypeDefinitionIndex(DateTimeOffset_TypeDefinitionIndex)->GetStaticField(0xC90);
		}
		static ::System::DateTimeOffset* StaticGet_MaxValue()
		{
			return (::System::DateTimeOffset*)Il2CppClass::FromTypeDefinitionIndex(DateTimeOffset_TypeDefinitionIndex)->GetStaticField(0xCA0);
		}
		::System::Int16 m_offsetMinutes; // 0x10
		::System::DateTime m_dateTime; // 0x18

		/*
		::System::Void _ctor(::System::Int64 ticks, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_OFFSET))(this, ticks, offset);
		}
		*/

		::System::Void _ctor_1(::System::DateTime dateTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_1_OFFSET))(this, dateTime);
		}

		/*
		::System::Void _ctor_2(::System::DateTime dateTime, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_2_OFFSET))(this, dateTime, offset);
		}
		*/

		/*
		::System::Void _ctor_3(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_3_OFFSET))(this, year, month, day, hour, minute, second, offset);
		}
		*/

		/*
		::System::Void _ctor_4(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_4_OFFSET))(this, year, month, day, hour, minute, second, millisecond, offset);
		}
		*/

		/*
		::System::Void _ctor_5(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Globalization::Calendar* calendar, ::System::TimeSpan offset)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_5_OFFSET))(this, year, month, day, hour, minute, second, millisecond, calendar, offset);
		}
		*/

		/*
		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_6_OFFSET))(this, info, context);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CCTOR_OFFSET))();
		}

		static ::System::DateTimeOffset get_Now()
		{
			return ((::System::DateTimeOffset(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_NOW_OFFSET))();
		}

		static ::System::DateTimeOffset get_UtcNow()
		{
			return ((::System::DateTimeOffset(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_UTCNOW_OFFSET))();
		}

		::System::DateTime get_DateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DATETIME_OFFSET))(this);
		}

		::System::DateTime get_UtcDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_UTCDATETIME_OFFSET))(this);
		}

		::System::DateTime get_LocalDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_LOCALDATETIME_OFFSET))(this);
		}

		/*
		::System::DateTimeOffset ToOffset(::System::TimeSpan offset)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOOFFSET_OFFSET))(this, offset);
		}
		*/

		::System::DateTime get_ClockDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_CLOCKDATETIME_OFFSET))(this);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DAY_OFFSET))(this);
		}

		::System::DayOfWeek get_DayOfWeek()
		{
			return ((::System::DayOfWeek(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DAYOFWEEK_OFFSET))(this);
		}

		::System::Int32 get_Hour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_HOUR_OFFSET))(this);
		}

		::System::Int32 get_Millisecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_MILLISECOND_OFFSET))(this);
		}

		::System::Int32 get_Minute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_MINUTE_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_MONTH_OFFSET))(this);
		}

		/*
		::System::TimeSpan get_Offset()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_OFFSET_OFFSET))(this);
		}
		*/

		::System::Int32 get_Second()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_SECOND_OFFSET))(this);
		}

		::System::Int64 get_Ticks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_TICKS_OFFSET))(this);
		}

		::System::Int64 get_UtcTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_UTCTICKS_OFFSET))(this);
		}

		/*
		::System::TimeSpan get_TimeOfDay()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_TIMEOFDAY_OFFSET))(this);
		}
		*/

		::System::Int32 get_Year()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_YEAR_OFFSET))(this);
		}

		/*
		::System::DateTimeOffset Add(::System::TimeSpan timeSpan)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADD_OFFSET))(this, timeSpan);
		}
		*/

		::System::DateTimeOffset AddDays(::System::Double days)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDDAYS_OFFSET))(this, days);
		}

		::System::DateTimeOffset AddHours(::System::Double hours)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDHOURS_OFFSET))(this, hours);
		}

		::System::DateTimeOffset AddMinutes(::System::Double minutes)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDMINUTES_OFFSET))(this, minutes);
		}

		::System::DateTimeOffset AddMonths(::System::Int32 months)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDMONTHS_OFFSET))(this, months);
		}

		::System::DateTimeOffset AddTicks(::System::Int64 ticks)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDTICKS_OFFSET))(this, ticks);
		}

		::System::DateTimeOffset AddYears(::System::Int32 years)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDYEARS_OFFSET))(this, years);
		}

		static ::System::Int32 Compare(::System::DateTimeOffset first, ::System::DateTimeOffset second)
		{
			return ((::System::Int32(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_COMPARE_OFFSET))(first, second);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, obj);
		}

		::System::Int32 CompareTo(::System::DateTimeOffset other)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_COMPARETO_OFFSET))(this, other);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALS_OFFSET))(this, obj);
		}

		::System::Boolean Equals_1(::System::DateTimeOffset other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALS_1_OFFSET))(this, other);
		}

		static ::System::DateTimeOffset FromUnixTimeSeconds(::System::Int64 seconds)
		{
			return ((::System::DateTimeOffset(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_FROMUNIXTIMESECONDS_OFFSET))(seconds);
		}

		static ::System::DateTimeOffset FromUnixTimeMilliseconds(::System::Int64 milliseconds)
		{
			return ((::System::DateTimeOffset(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_FROMUNIXTIMEMILLISECONDS_OFFSET))(milliseconds);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, sender);
		}

		/*
		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GETHASHCODE_OFFSET))(this);
		}

		static ::System::DateTimeOffset Parse(::System::String* input, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSE_OFFSET))(input, formatProvider);
		}

		static ::System::DateTimeOffset Parse_1(::System::String* input, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSE_1_OFFSET))(input, formatProvider, styles);
		}

		static ::System::DateTimeOffset ParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSEEXACT_OFFSET))(input, format, formatProvider);
		}

		static ::System::DateTimeOffset ParseExact_1(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSEEXACT_1_OFFSET))(input, format, formatProvider, styles);
		}

		::System::Int64 ToUnixTimeSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIXTIMESECONDS_OFFSET))(this);
		}

		::System::Int64 ToUnixTimeMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIXTIMEMILLISECONDS_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_2_OFFSET))(this, formatProvider);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_3_OFFSET))(this, format, formatProvider);
		}

		::System::DateTimeOffset ToUniversalTime()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIVERSALTIME_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* input, ::System::DateTimeOffset& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSE_OFFSET))(input, result);
		}

		static ::System::Boolean TryParse_1(::System::String* input, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles, ::System::DateTimeOffset& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSE_1_OFFSET))(input, formatProvider, styles, result);
		}

		static ::System::Boolean TryParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles, ::System::DateTimeOffset& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_OFFSET))(input, format, formatProvider, styles, result);
		}

		static ::System::Boolean TryParseExact_1(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::DateTimeStyles styles, ::System::DateTimeOffset& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_1_OFFSET))(input, formats, formatProvider, styles, result);
		}

		/*
		static ::System::Int16 ValidateOffset(::System::TimeSpan offset)
		{
			return ((::System::Int16(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATEOFFSET_OFFSET))(offset);
		}
		*/

		/*
		static ::System::DateTime ValidateDate(::System::DateTime dateTime, ::System::TimeSpan offset)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATEDATE_OFFSET))(dateTime, offset);
		}
		*/

		static ::System::Globalization::DateTimeStyles ValidateStyles(::System::Globalization::DateTimeStyles style, ::System::String* parameterName)
		{
			return ((::System::Globalization::DateTimeStyles(*)(::System::Globalization::DateTimeStyles, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATESTYLES_OFFSET))(style, parameterName);
		}

		static ::System::DateTimeOffset op_Implicit(::System::DateTime dateTime)
		{
			return ((::System::DateTimeOffset(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_IMPLICIT_OFFSET))(dateTime);
		}

		static ::System::Boolean op_Equality(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::System::DateTimeOffset left, ::System::DateTimeOffset right)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
