#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeKind.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Globalization/DateTimeStyles.h"
#include "unitysdk/System/TypeCode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Globalization { class Calendar; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATETIME_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x9D37A0)
#define SYSTEM_DATETIME_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x9D37B0)
#define SYSTEM_DATETIME_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x9D37C0)
#define SYSTEM_DATETIME_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x9D37D0)
#define SYSTEM_DATETIME_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x9D37E0)
#define SYSTEM_DATETIME_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x9D37F0)
#define SYSTEM_DATETIME_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x9D36E0)
#define SYSTEM_DATETIME_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x9D3800)
#define SYSTEM_DATETIME_ADD_1_OFFSET UNITYSDK_OFFSET(0x9D3790)
#define SYSTEM_DATETIME_ADD_OFFSET UNITYSDK_OFFSET(0x9D36E0)
#define SYSTEM_DATETIME_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x9D3940)
#define SYSTEM_DATETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x9D3890)
#define SYSTEM_DATETIME_COMPARE_OFFSET UNITYSDK_OFFSET(0x1DCE8180)
#define SYSTEM_DATETIME_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x1DCE6670)
#define SYSTEM_DATETIME_DAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1DCE7F40)
#define SYSTEM_DATETIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9D39A0)
#define SYSTEM_DATETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x9D3970)
#define SYSTEM_DATETIME_FROMBINARYRAW_OFFSET UNITYSDK_OFFSET(0x1DCE8650)
#define SYSTEM_DATETIME_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DCE8370)
#define SYSTEM_DATETIME_FROMFILETIMEUTC_OFFSET UNITYSDK_OFFSET(0x1DCE87B0)
#define SYSTEM_DATETIME_FROMFILETIME_OFFSET UNITYSDK_OFFSET(0x1DCE86E0)
#define SYSTEM_DATETIME_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x9D3A70)
#define SYSTEM_DATETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9D3BA0)
#define SYSTEM_DATETIME_GETSYSTEMTIMEASFILETIME_OFFSET UNITYSDK_OFFSET(0x1DCE8E20)
#define SYSTEM_DATETIME_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x967F90)
#define SYSTEM_DATETIME_GET_DATE_OFFSET UNITYSDK_OFFSET(0x9D3A20)
#define SYSTEM_DATETIME_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x9D3A90)
#define SYSTEM_DATETIME_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x9D3AD0)
#define SYSTEM_DATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x9D3A80)
#define SYSTEM_DATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x9D3BC0)
#define SYSTEM_DATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x9D36D0)
#define SYSTEM_DATETIME_GET_INTERNALTICKS_OFFSET UNITYSDK_OFFSET(0x9D36C0)
#define SYSTEM_DATETIME_GET_KIND_OFFSET UNITYSDK_OFFSET(0x9D3C10)
#define SYSTEM_DATETIME_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x9D3C40)
#define SYSTEM_DATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x9D3C80)
#define SYSTEM_DATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x9D3CC0)
#define SYSTEM_DATETIME_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1DCE8D20)
#define SYSTEM_DATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x9D3CD0)
#define SYSTEM_DATETIME_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x9D36C0)
#define SYSTEM_DATETIME_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x9D3D10)
#define SYSTEM_DATETIME_GET_TODAY_OFFSET UNITYSDK_OFFSET(0x1DCE8EC0)
#define SYSTEM_DATETIME_GET_UTCNOW_OFFSET UNITYSDK_OFFSET(0x1DCE8DF0)
#define SYSTEM_DATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x9D3D50)
#define SYSTEM_DATETIME_ISAMBIGUOUSDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x9D3C00)
#define SYSTEM_DATETIME_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1DCE8280)
#define SYSTEM_DATETIME_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1DCE9FD0)
#define SYSTEM_DATETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1DCEA140)
#define SYSTEM_DATETIME_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1DCEA1C0)
#define SYSTEM_DATETIME_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1DCEA1A0)
#define SYSTEM_DATETIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1DCEA150)
#define SYSTEM_DATETIME_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1DCEA180)
#define SYSTEM_DATETIME_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1DCEA160)
#define SYSTEM_DATETIME_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1DCEA120)
#define SYSTEM_DATETIME_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1DCEA080)
#define SYSTEM_DATETIME_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1DCE9230)
#define SYSTEM_DATETIME_PARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1DCE92D0)
#define SYSTEM_DATETIME_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1DCE91A0)
#define SYSTEM_DATETIME_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1DCE9070)
#define SYSTEM_DATETIME_PARSE_2_OFFSET UNITYSDK_OFFSET(0x1DCE9100)
#define SYSTEM_DATETIME_PARSE_OFFSET UNITYSDK_OFFSET(0x1DCE8FF0)
#define SYSTEM_DATETIME_SPECIFYKIND_OFFSET UNITYSDK_OFFSET(0x1DCE8A00)
#define SYSTEM_DATETIME_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x9D3E60)
#define SYSTEM_DATETIME_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x9D3E40)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9D4290)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x9D42C0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x9D42A0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x259D70)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x9D4350)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9D4340)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x9D42D0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x9D42F0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x9D4310)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x9D42B0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x9D4330)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x9D4360)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x9D42E0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x9D4300)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x9D4320)
#define SYSTEM_DATETIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x9D39B0)
#define SYSTEM_DATETIME_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x1DCE6A20)
#define SYSTEM_DATETIME_TOBINARY_OFFSET UNITYSDK_OFFSET(0x9D39C0)
#define SYSTEM_DATETIME_TOFILETIMEUTC_OFFSET UNITYSDK_OFFSET(0x9D3FC0)
#define SYSTEM_DATETIME_TOFILETIME_OFFSET UNITYSDK_OFFSET(0x9D3F10)
#define SYSTEM_DATETIME_TOLOCALTIME_1_OFFSET UNITYSDK_OFFSET(0x9D4080)
#define SYSTEM_DATETIME_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x9D4070)
#define SYSTEM_DATETIME_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9D4100)
#define SYSTEM_DATETIME_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x9D4180)
#define SYSTEM_DATETIME_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x9D4200)
#define SYSTEM_DATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9D4090)
#define SYSTEM_DATETIME_TOUNIVERSALTIME_OFFSET UNITYSDK_OFFSET(0x9D4280)
#define SYSTEM_DATETIME_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1DCEACD0)
#define SYSTEM_DATETIME_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1DCE9E40)
#define SYSTEM_DATETIME_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1DCE9CB0)
#define SYSTEM_DATETIME_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1DCE9B40)
#define SYSTEM_DATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1DCE99F0)
#define SYSTEM_DATETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DCEAEB0)
#define SYSTEM_DATETIME__CTOR_10_OFFSET UNITYSDK_OFFSET(0x9D3680)
#define SYSTEM_DATETIME__CTOR_11_OFFSET UNITYSDK_OFFSET(0x9D3690)
#define SYSTEM_DATETIME__CTOR_12_OFFSET UNITYSDK_OFFSET(0x9D36A0)
#define SYSTEM_DATETIME__CTOR_13_OFFSET UNITYSDK_OFFSET(0x9D36B0)
#define SYSTEM_DATETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x324D50)
#define SYSTEM_DATETIME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9D32B0)
#define SYSTEM_DATETIME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x9D32C0)
#define SYSTEM_DATETIME__CTOR_4_OFFSET UNITYSDK_OFFSET(0x9D3370)
#define SYSTEM_DATETIME__CTOR_5_OFFSET UNITYSDK_OFFSET(0x9D3390)
#define SYSTEM_DATETIME__CTOR_6_OFFSET UNITYSDK_OFFSET(0x9D3460)
#define SYSTEM_DATETIME__CTOR_7_OFFSET UNITYSDK_OFFSET(0x9D34B0)
#define SYSTEM_DATETIME__CTOR_8_OFFSET UNITYSDK_OFFSET(0x9D3590)
#define SYSTEM_DATETIME__CTOR_9_OFFSET UNITYSDK_OFFSET(0x9D3670)
#define SYSTEM_DATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x9D3220)

namespace System
{
	inline static constexpr unsigned int DateTime_TypeDefinitionIndex = 210;

	struct alignas(8) DateTime
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0x60);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0x68);
		}
		static ::System::DateTime* StaticGet_MaxValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::DateTime* StaticGet_MinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0x28);
		}
		// static const ::System::Int64 TicksPerMillisecond = 0x2710; // 0x0
		// static const ::System::Int64 TicksPerSecond = 0x989680; // 0x0
		// static const ::System::Int64 TicksPerMinute = 0x23C34600; // 0x0
		// static const ::System::Int64 TicksPerHour = 0x861C46800; // 0x0
		// static const ::System::Int64 TicksPerDay = 0xC92A69C000; // 0x0
		// static const ::System::Int32 MillisPerSecond = 0x3E8; // 0x0
		// static const ::System::Int32 MillisPerMinute = 0xEA60; // 0x0
		// static const ::System::Int32 MillisPerHour = 0x36EE80; // 0x0
		// static const ::System::Int32 MillisPerDay = 0x5265C00; // 0x0
		// static const ::System::Int32 DaysPerYear = 0x16D; // 0x0
		// static const ::System::Int32 DaysPer4Years = 0x5B5; // 0x0
		// static const ::System::Int32 DaysPer100Years = 0x8EAC; // 0x0
		// static const ::System::Int32 DaysPer400Years = 0x23AB1; // 0x0
		// static const ::System::Int32 DaysTo1601 = 0x8EAC4; // 0x0
		// static const ::System::Int32 DaysTo1899 = 0xA9559; // 0x0
		// static const ::System::Int32 DaysTo1970 = 0xAF93A; // 0x0
		// static const ::System::Int32 DaysTo10000 = 0x37B9DB; // 0x0
		// static const ::System::Int64 MinTicks = 0x0; // 0x0
		// static const ::System::Int64 MaxTicks = 0x2BCA2875F4373FFF; // 0x0
		// static const ::System::Int64 MaxMillis = 0x11EFAE44CB400; // 0x0
		// static const ::System::Int64 FileTimeOffset = 0x701CE1722770000; // 0x0
		// static const ::System::Int64 DoubleDateOffset = 0x85103C0CB83C000; // 0x0
		// static const ::System::Int64 OADateMinAsTicks = 0x6EFDDDAEC64000; // 0x0
		// static const ::System::Double OADateMinAsDouble; // 0x0
		// static const ::System::Double OADateMaxAsDouble; // 0x0
		// static const ::System::Int32 DatePartYear = 0x0; // 0x0
		// static const ::System::Int32 DatePartDayOfYear = 0x1; // 0x0
		// static const ::System::Int32 DatePartMonth = 0x2; // 0x0
		// static const ::System::Int32 DatePartDay = 0x3; // 0x0
		// static const ::System::UInt64 TicksMask = 0x3FFFFFFFFFFFFFFF; // 0x0
		// static const ::System::UInt64 FlagsMask = 0xC000000000000000; // 0x0
		// static const ::System::UInt64 LocalMask = 0x8000000000000000; // 0x0
		// static const ::System::Int64 TicksCeiling = 0x4000000000000000; // 0x0
		// static const ::System::UInt64 KindUnspecified = 0x0; // 0x0
		// static const ::System::UInt64 KindUtc = 0x4000000000000000; // 0x0
		// static const ::System::UInt64 KindLocal = 0x8000000000000000; // 0x0
		// static const ::System::UInt64 KindLocalAmbiguousDst = 0xC000000000000000; // 0x0
		// static const ::System::Int32 KindShift = 0x3E; // 0x0
		// static const ::System::String* TicksField; // 0x0
		// static const ::System::String* DateDataField; // 0x0
		::System::UInt64 dateData; // 0x10

		::System::Void _ctor(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_OFFSET))(this, ticks);
		}

		::System::Void _ctor_1(::System::UInt64 dateData)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_1_OFFSET))(this, dateData);
		}

		::System::Void _ctor_2(::System::Int64 ticks, ::System::DateTimeKind kind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_2_OFFSET))(this, ticks, kind);
		}

		::System::Void _ctor_3(::System::Int64 ticks, ::System::DateTimeKind kind, ::System::Boolean isAmbiguousDst)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::DateTimeKind, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_3_OFFSET))(this, ticks, kind, isAmbiguousDst);
		}

		::System::Void _ctor_4(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_4_OFFSET))(this, year, month, day);
		}

		::System::Void _ctor_5(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Globalization::Calendar* calendar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_5_OFFSET))(this, year, month, day, calendar);
		}

		::System::Void _ctor_6(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_6_OFFSET))(this, year, month, day, hour, minute, second);
		}

		::System::Void _ctor_7(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::DateTimeKind kind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_7_OFFSET))(this, year, month, day, hour, minute, second, kind);
		}

		::System::Void _ctor_8(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Globalization::Calendar* calendar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_8_OFFSET))(this, year, month, day, hour, minute, second, calendar);
		}

		::System::Void _ctor_9(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_9_OFFSET))(this, year, month, day, hour, minute, second, millisecond);
		}

		::System::Void _ctor_10(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::DateTimeKind kind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_10_OFFSET))(this, year, month, day, hour, minute, second, millisecond, kind);
		}

		::System::Void _ctor_11(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Globalization::Calendar* calendar)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_11_OFFSET))(this, year, month, day, hour, minute, second, millisecond, calendar);
		}

		::System::Void _ctor_12(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::Globalization::Calendar* calendar, ::System::DateTimeKind kind)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_12_OFFSET))(this, year, month, day, hour, minute, second, millisecond, calendar, kind);
		}

		/*
		::System::Void _ctor_13(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_13_OFFSET))(this, info, context);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CCTOR_OFFSET))();
		}

		::System::Int64 get_InternalTicks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_INTERNALTICKS_OFFSET))(this);
		}

		::System::UInt64 get_InternalKind()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_INTERNALKIND_OFFSET))(this);
		}

		/*
		::System::DateTime Add(::System::TimeSpan value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADD_OFFSET))(this, value);
		}
		*/

		::System::DateTime Add_1(::System::Double value, ::System::Int32 scale)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADD_1_OFFSET))(this, value, scale);
		}

		::System::DateTime AddDays(::System::Double value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDDAYS_OFFSET))(this, value);
		}

		::System::DateTime AddHours(::System::Double value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDHOURS_OFFSET))(this, value);
		}

		::System::DateTime AddMilliseconds(::System::Double value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMILLISECONDS_OFFSET))(this, value);
		}

		::System::DateTime AddMinutes(::System::Double value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMINUTES_OFFSET))(this, value);
		}

		::System::DateTime AddMonths(::System::Int32 months)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMONTHS_OFFSET))(this, months);
		}

		::System::DateTime AddSeconds(::System::Double value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDSECONDS_OFFSET))(this, value);
		}

		::System::DateTime AddTicks(::System::Int64 value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDTICKS_OFFSET))(this, value);
		}

		::System::DateTime AddYears(::System::Int32 value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDYEARS_OFFSET))(this, value);
		}

		static ::System::Int32 Compare(::System::DateTime t1, ::System::DateTime t2)
		{
			return ((::System::Int32(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARE_OFFSET))(t1, t2);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::DateTime value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARETO_1_OFFSET))(this, value);
		}

		static ::System::Int64 DateToTicks(::System::Int32 year, ::System::Int32 month, ::System::Int32 day)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_DATETOTICKS_OFFSET))(year, month, day);
		}

		static ::System::Int64 TimeToTicks(::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TIMETOTICKS_OFFSET))(hour, minute, second);
		}

		static ::System::Int32 DaysInMonth(::System::Int32 year, ::System::Int32 month)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_DAYSINMONTH_OFFSET))(year, month);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::DateTime value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_EQUALS_1_OFFSET))(this, value);
		}

		static ::System::DateTime FromBinary(::System::Int64 dateData)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMBINARY_OFFSET))(dateData);
		}

		static ::System::DateTime FromBinaryRaw(::System::Int64 dateData)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMBINARYRAW_OFFSET))(dateData);
		}

		static ::System::DateTime FromFileTime(::System::Int64 fileTime)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMFILETIME_OFFSET))(fileTime);
		}

		static ::System::DateTime FromFileTimeUtc(::System::Int64 fileTime)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMFILETIMEUTC_OFFSET))(fileTime);
		}

		/*
		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, info, context);
		}
		*/

		static ::System::DateTime SpecifyKind(::System::DateTime value, ::System::DateTimeKind kind)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SPECIFYKIND_OFFSET))(value, kind);
		}

		::System::Int64 ToBinary()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOBINARY_OFFSET))(this);
		}

		::System::DateTime get_Date()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DATE_OFFSET))(this);
		}

		::System::Int32 GetDatePart(::System::Int32 part)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATEPART_OFFSET))(this, part);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DAY_OFFSET))(this);
		}

		::System::DayOfWeek get_DayOfWeek()
		{
			return ((::System::DayOfWeek(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DAYOFWEEK_OFFSET))(this);
		}

		::System::Int32 get_DayOfYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DAYOFYEAR_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_Hour()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_HOUR_OFFSET))(this);
		}

		::System::Boolean IsAmbiguousDaylightSavingTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ISAMBIGUOUSDAYLIGHTSAVINGTIME_OFFSET))(this);
		}

		::System::DateTimeKind get_Kind()
		{
			return ((::System::DateTimeKind(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_KIND_OFFSET))(this);
		}

		::System::Int32 get_Millisecond()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_MILLISECOND_OFFSET))(this);
		}

		::System::Int32 get_Minute()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_MINUTE_OFFSET))(this);
		}

		::System::Int32 get_Month()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_MONTH_OFFSET))(this);
		}

		static ::System::DateTime get_Now()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_NOW_OFFSET))();
		}

		static ::System::DateTime get_UtcNow()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_UTCNOW_OFFSET))();
		}

		static ::System::Int64 GetSystemTimeAsFileTime()
		{
			return ((::System::Int64(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETSYSTEMTIMEASFILETIME_OFFSET))();
		}

		::System::Int32 get_Second()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_SECOND_OFFSET))(this);
		}

		::System::Int64 get_Ticks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_TICKS_OFFSET))(this);
		}

		/*
		::System::TimeSpan get_TimeOfDay()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_TIMEOFDAY_OFFSET))(this);
		}
		*/

		static ::System::DateTime get_Today()
		{
			return ((::System::DateTime(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_TODAY_OFFSET))();
		}

		::System::Int32 get_Year()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_YEAR_OFFSET))(this);
		}

		static ::System::Boolean IsLeapYear(::System::Int32 year)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ISLEAPYEAR_OFFSET))(year);
		}

		static ::System::DateTime Parse(::System::String* s)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_OFFSET))(s);
		}

		static ::System::DateTime Parse_1(::System::String* s, ::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_1_OFFSET))(s, provider);
		}

		static ::System::DateTime Parse_2(::System::String* s, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles styles)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_2_OFFSET))(s, provider, styles);
		}

		static ::System::DateTime ParseExact(::System::String* s, ::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_OFFSET))(s, format, provider);
		}

		static ::System::DateTime ParseExact_1(::System::String* s, ::System::String* format, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_1_OFFSET))(s, format, provider, style);
		}

		static ::System::DateTime ParseExact_2(::System::String* s, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style)
		{
			return ((::System::DateTime(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_2_OFFSET))(s, formats, provider, style);
		}

		/*
		::System::TimeSpan Subtract(::System::DateTime value)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SUBTRACT_OFFSET))(this, value);
		}
		*/

		/*
		::System::DateTime Subtract_1(::System::TimeSpan value)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SUBTRACT_1_OFFSET))(this, value);
		}
		*/

		::System::Int64 ToFileTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOFILETIME_OFFSET))(this);
		}

		::System::Int64 ToFileTimeUtc()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOFILETIMEUTC_OFFSET))(this);
		}

		::System::DateTime ToLocalTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLOCALTIME_OFFSET))(this);
		}

		::System::DateTime ToLocalTime_1(::System::Boolean throwOnOverflow)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLOCALTIME_1_OFFSET))(this, throwOnOverflow);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_2_OFFSET))(this, provider);
		}

		::System::String* ToString_3(::System::String* format, ::System::IFormatProvider* provider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_3_OFFSET))(this, format, provider);
		}

		::System::DateTime ToUniversalTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOUNIVERSALTIME_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* s, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSE_OFFSET))(s, result);
		}

		static ::System::Boolean TryParse_1(::System::String* s, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles styles, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSE_1_OFFSET))(s, provider, styles, result);
		}

		static ::System::Boolean TryParseExact(::System::String* s, ::System::String* format, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSEEXACT_OFFSET))(s, format, provider, style, result);
		}

		static ::System::Boolean TryParseExact_1(::System::String* s, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* provider, ::System::Globalization::DateTimeStyles style, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSEEXACT_1_OFFSET))(s, formats, provider, style, result);
		}

		/*
		static ::System::DateTime op_Addition(::System::DateTime d, ::System::TimeSpan t)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_ADDITION_OFFSET))(d, t);
		}
		*/

		/*
		static ::System::DateTime op_Subtraction(::System::DateTime d, ::System::TimeSpan t)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_SUBTRACTION_OFFSET))(d, t);
		}
		*/

		/*
		static ::System::TimeSpan op_Subtraction_1(::System::DateTime d1, ::System::DateTime d2)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_SUBTRACTION_1_OFFSET))(d1, d2);
		}
		*/

		static ::System::Boolean op_Equality(::System::DateTime d1, ::System::DateTime d2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_EQUALITY_OFFSET))(d1, d2);
		}

		static ::System::Boolean op_Inequality(::System::DateTime d1, ::System::DateTime d2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_INEQUALITY_OFFSET))(d1, d2);
		}

		static ::System::Boolean op_LessThan(::System::DateTime t1, ::System::DateTime t2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_LESSTHAN_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::DateTime t1, ::System::DateTime t2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_LESSTHANOREQUAL_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_GreaterThan(::System::DateTime t1, ::System::DateTime t2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_GREATERTHAN_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::DateTime t1, ::System::DateTime t2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_GREATERTHANOREQUAL_OFFSET))(t1, t2);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* provider)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, provider);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* provider)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, provider);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* provider)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, provider);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* provider)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, provider);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* provider)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, provider);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* provider)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, provider);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* provider)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, provider);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* provider)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, provider);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* provider)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, provider);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* provider)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, provider);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* provider)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, provider);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* provider)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, provider);
		}

		/*
		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, provider);
		}
		*/

		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, provider);
		}

		::System::Object* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, type, provider);
		}

		static ::System::Boolean TryCreate(::System::Int32 year, ::System::Int32 month, ::System::Int32 day, ::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second, ::System::Int32 millisecond, ::System::DateTime& result)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYCREATE_OFFSET))(year, month, day, hour, minute, second, millisecond, result);
		}
	};
}
