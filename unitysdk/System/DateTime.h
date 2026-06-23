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

#define SYSTEM_DATETIME_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x985BF0)
#define SYSTEM_DATETIME_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x985C00)
#define SYSTEM_DATETIME_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x985C10)
#define SYSTEM_DATETIME_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x985C20)
#define SYSTEM_DATETIME_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x985C30)
#define SYSTEM_DATETIME_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x985C40)
#define SYSTEM_DATETIME_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x985B30)
#define SYSTEM_DATETIME_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x985C50)
#define SYSTEM_DATETIME_ADD_1_OFFSET UNITYSDK_OFFSET(0x985BE0)
#define SYSTEM_DATETIME_ADD_OFFSET UNITYSDK_OFFSET(0x985B30)
#define SYSTEM_DATETIME_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x985D90)
#define SYSTEM_DATETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x985CE0)
#define SYSTEM_DATETIME_COMPARE_OFFSET UNITYSDK_OFFSET(0x1C8B3A20)
#define SYSTEM_DATETIME_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x1C8B1F20)
#define SYSTEM_DATETIME_DAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x1C8B37E0)
#define SYSTEM_DATETIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x985DF0)
#define SYSTEM_DATETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x985DC0)
#define SYSTEM_DATETIME_FROMBINARYRAW_OFFSET UNITYSDK_OFFSET(0x1C8B3F00)
#define SYSTEM_DATETIME_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1C8B3C10)
#define SYSTEM_DATETIME_FROMFILETIMEUTC_OFFSET UNITYSDK_OFFSET(0x1C8B4060)
#define SYSTEM_DATETIME_FROMFILETIME_OFFSET UNITYSDK_OFFSET(0x1C8B3F90)
#define SYSTEM_DATETIME_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x985EC0)
#define SYSTEM_DATETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x986000)
#define SYSTEM_DATETIME_GETSYSTEMTIMEASFILETIME_OFFSET UNITYSDK_OFFSET(0x1C8B4700)
#define SYSTEM_DATETIME_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x910200)
#define SYSTEM_DATETIME_GET_DATE_OFFSET UNITYSDK_OFFSET(0x985E70)
#define SYSTEM_DATETIME_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x985EE0)
#define SYSTEM_DATETIME_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x985F30)
#define SYSTEM_DATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x985ED0)
#define SYSTEM_DATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x986020)
#define SYSTEM_DATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x985B20)
#define SYSTEM_DATETIME_GET_INTERNALTICKS_OFFSET UNITYSDK_OFFSET(0x985B10)
#define SYSTEM_DATETIME_GET_KIND_OFFSET UNITYSDK_OFFSET(0x986070)
#define SYSTEM_DATETIME_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x9860A0)
#define SYSTEM_DATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x9860F0)
#define SYSTEM_DATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x986130)
#define SYSTEM_DATETIME_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1C8B4600)
#define SYSTEM_DATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x986140)
#define SYSTEM_DATETIME_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x985B10)
#define SYSTEM_DATETIME_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x986180)
#define SYSTEM_DATETIME_GET_TODAY_OFFSET UNITYSDK_OFFSET(0x1C8B47A0)
#define SYSTEM_DATETIME_GET_UTCNOW_OFFSET UNITYSDK_OFFSET(0x1C8B46D0)
#define SYSTEM_DATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x9861C0)
#define SYSTEM_DATETIME_ISAMBIGUOUSDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x986060)
#define SYSTEM_DATETIME_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x1C8B3B20)
#define SYSTEM_DATETIME_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1C8B58B0)
#define SYSTEM_DATETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1C8B5A20)
#define SYSTEM_DATETIME_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C8B5AA0)
#define SYSTEM_DATETIME_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1C8B5A80)
#define SYSTEM_DATETIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1C8B5A30)
#define SYSTEM_DATETIME_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1C8B5A60)
#define SYSTEM_DATETIME_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1C8B5A40)
#define SYSTEM_DATETIME_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1C8B5A00)
#define SYSTEM_DATETIME_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1C8B5960)
#define SYSTEM_DATETIME_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1C8B4B10)
#define SYSTEM_DATETIME_PARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1C8B4BB0)
#define SYSTEM_DATETIME_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1C8B4A80)
#define SYSTEM_DATETIME_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1C8B4950)
#define SYSTEM_DATETIME_PARSE_2_OFFSET UNITYSDK_OFFSET(0x1C8B49E0)
#define SYSTEM_DATETIME_PARSE_OFFSET UNITYSDK_OFFSET(0x1C8B48D0)
#define SYSTEM_DATETIME_SPECIFYKIND_OFFSET UNITYSDK_OFFSET(0x1C8B42B0)
#define SYSTEM_DATETIME_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x9862C0)
#define SYSTEM_DATETIME_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x9862A0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x9866F0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x986720)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x986700)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x246290)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x9867B0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x9867A0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x986730)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x986750)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x986770)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x986710)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x986790)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x9867C0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x986740)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x986760)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x986780)
#define SYSTEM_DATETIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x985E00)
#define SYSTEM_DATETIME_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x1C8B22D0)
#define SYSTEM_DATETIME_TOBINARY_OFFSET UNITYSDK_OFFSET(0x985E10)
#define SYSTEM_DATETIME_TOFILETIMEUTC_OFFSET UNITYSDK_OFFSET(0x986420)
#define SYSTEM_DATETIME_TOFILETIME_OFFSET UNITYSDK_OFFSET(0x986370)
#define SYSTEM_DATETIME_TOLOCALTIME_1_OFFSET UNITYSDK_OFFSET(0x9864E0)
#define SYSTEM_DATETIME_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x9864D0)
#define SYSTEM_DATETIME_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x986560)
#define SYSTEM_DATETIME_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x9865E0)
#define SYSTEM_DATETIME_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x986660)
#define SYSTEM_DATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9864F0)
#define SYSTEM_DATETIME_TOUNIVERSALTIME_OFFSET UNITYSDK_OFFSET(0x9866E0)
#define SYSTEM_DATETIME_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x1C8B65B0)
#define SYSTEM_DATETIME_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1C8B5720)
#define SYSTEM_DATETIME_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1C8B5590)
#define SYSTEM_DATETIME_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1C8B5420)
#define SYSTEM_DATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1C8B52D0)
#define SYSTEM_DATETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C8B6780)
#define SYSTEM_DATETIME__CTOR_10_OFFSET UNITYSDK_OFFSET(0x985AD0)
#define SYSTEM_DATETIME__CTOR_11_OFFSET UNITYSDK_OFFSET(0x985AE0)
#define SYSTEM_DATETIME__CTOR_12_OFFSET UNITYSDK_OFFSET(0x985AF0)
#define SYSTEM_DATETIME__CTOR_13_OFFSET UNITYSDK_OFFSET(0x985B00)
#define SYSTEM_DATETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x2B6D10)
#define SYSTEM_DATETIME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x985700)
#define SYSTEM_DATETIME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x985710)
#define SYSTEM_DATETIME__CTOR_4_OFFSET UNITYSDK_OFFSET(0x9857C0)
#define SYSTEM_DATETIME__CTOR_5_OFFSET UNITYSDK_OFFSET(0x9857E0)
#define SYSTEM_DATETIME__CTOR_6_OFFSET UNITYSDK_OFFSET(0x9858B0)
#define SYSTEM_DATETIME__CTOR_7_OFFSET UNITYSDK_OFFSET(0x985900)
#define SYSTEM_DATETIME__CTOR_8_OFFSET UNITYSDK_OFFSET(0x9859E0)
#define SYSTEM_DATETIME__CTOR_9_OFFSET UNITYSDK_OFFSET(0x985AC0)
#define SYSTEM_DATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x985670)

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
		static ::System::DateTime* StaticGet_MinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0x20);
		}
		static ::System::DateTime* StaticGet_MaxValue()
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
