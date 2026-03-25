#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanStyles.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_TIMESPAN_ADD_OFFSET UNITYSDK_OFFSET(0x20CE6D0)
#define SYSTEM_TIMESPAN_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x20CE7F0)
#define SYSTEM_TIMESPAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20CE750)
#define SYSTEM_TIMESPAN_COMPARE_OFFSET UNITYSDK_OFFSET(0x16255990)
#define SYSTEM_TIMESPAN_DURATION_OFFSET UNITYSDK_OFFSET(0x20CE810)
#define SYSTEM_TIMESPAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1520BA0)
#define SYSTEM_TIMESPAN_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x16255C10)
#define SYSTEM_TIMESPAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x20CE890)
#define SYSTEM_TIMESPAN_FROMDAYS_OFFSET UNITYSDK_OFFSET(0x16255A70)
#define SYSTEM_TIMESPAN_FROMHOURS_OFFSET UNITYSDK_OFFSET(0x16255C30)
#define SYSTEM_TIMESPAN_FROMMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x16255C40)
#define SYSTEM_TIMESPAN_FROMMINUTES_OFFSET UNITYSDK_OFFSET(0x16255C50)
#define SYSTEM_TIMESPAN_FROMSECONDS_OFFSET UNITYSDK_OFFSET(0x16255CE0)
#define SYSTEM_TIMESPAN_FROMTICKS_OFFSET UNITYSDK_OFFSET(0x16255D50)
#define SYSTEM_TIMESPAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B1C0)
#define SYSTEM_TIMESPAN_GETLEGACYFORMATMODE_OFFSET UNITYSDK_OFFSET(0x16256E90)
#define SYSTEM_TIMESPAN_GET_DAYS_OFFSET UNITYSDK_OFFSET(0x20CE4F0)
#define SYSTEM_TIMESPAN_GET_HOURS_OFFSET UNITYSDK_OFFSET(0x20CE520)
#define SYSTEM_TIMESPAN_GET_LEGACYMODE_OFFSET UNITYSDK_OFFSET(0x16256C80)
#define SYSTEM_TIMESPAN_GET_MILLISECONDS_OFFSET UNITYSDK_OFFSET(0x20CE560)
#define SYSTEM_TIMESPAN_GET_MINUTES_OFFSET UNITYSDK_OFFSET(0x20CE5B0)
#define SYSTEM_TIMESPAN_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x20CE600)
#define SYSTEM_TIMESPAN_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x5580)
#define SYSTEM_TIMESPAN_GET_TOTALDAYS_OFFSET UNITYSDK_OFFSET(0x20CE650)
#define SYSTEM_TIMESPAN_GET_TOTALHOURS_OFFSET UNITYSDK_OFFSET(0x20CE660)
#define SYSTEM_TIMESPAN_GET_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x20CE670)
#define SYSTEM_TIMESPAN_GET_TOTALMINUTES_OFFSET UNITYSDK_OFFSET(0x20CE6B0)
#define SYSTEM_TIMESPAN_GET_TOTALSECONDS_OFFSET UNITYSDK_OFFSET(0x20CE6C0)
#define SYSTEM_TIMESPAN_INTERVAL_OFFSET UNITYSDK_OFFSET(0x16255A80)
#define SYSTEM_TIMESPAN_LEGACYFORMATMODE_OFFSET UNITYSDK_OFFSET(0x16256E80)
#define SYSTEM_TIMESPAN_NEGATE_OFFSET UNITYSDK_OFFSET(0x20CE8B0)
#define SYSTEM_TIMESPAN_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x16256DA0)
#define SYSTEM_TIMESPAN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x16256E20)
#define SYSTEM_TIMESPAN_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x16256E70)
#define SYSTEM_TIMESPAN_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x16256E60)
#define SYSTEM_TIMESPAN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x16256E30)
#define SYSTEM_TIMESPAN_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x16256E50)
#define SYSTEM_TIMESPAN_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x16256E40)
#define SYSTEM_TIMESPAN_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x16256D40)
#define SYSTEM_TIMESPAN_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x16256CC0)
#define SYSTEM_TIMESPAN_OP_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x16256D90)
#define SYSTEM_TIMESPAN_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x16256060)
#define SYSTEM_TIMESPAN_PARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x16256170)
#define SYSTEM_TIMESPAN_PARSEEXACT_3_OFFSET UNITYSDK_OFFSET(0x16256300)
#define SYSTEM_TIMESPAN_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x16255F50)
#define SYSTEM_TIMESPAN_PARSE_1_OFFSET UNITYSDK_OFFSET(0x16255E50)
#define SYSTEM_TIMESPAN_PARSE_OFFSET UNITYSDK_OFFSET(0x16255D60)
#define SYSTEM_TIMESPAN_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x20CE930)
#define SYSTEM_TIMESPAN_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x16255640)
#define SYSTEM_TIMESPAN_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x20CE9D0)
#define SYSTEM_TIMESPAN_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x20CEA10)
#define SYSTEM_TIMESPAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20CE990)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x16256770)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x16256870)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_3_OFFSET UNITYSDK_OFFSET(0x162569F0)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x16256670)
#define SYSTEM_TIMESPAN_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x16256580)
#define SYSTEM_TIMESPAN_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x16256490)
#define SYSTEM_TIMESPAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x16256EA0)
#define SYSTEM_TIMESPAN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x20CE320)
#define SYSTEM_TIMESPAN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x20CE3B0)
#define SYSTEM_TIMESPAN__CTOR_3_OFFSET UNITYSDK_OFFSET(0x20CE450)
#define SYSTEM_TIMESPAN__CTOR_OFFSET UNITYSDK_OFFSET(0xBDD0)

namespace System
{
	inline static constexpr unsigned int TimeSpan_TypeDefinitionIndex = 339;

	struct alignas(8) TimeSpan
	{
		static ::System::TimeSpan* StaticGet_Zero()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x2460);
		}
		static ::System::TimeSpan* StaticGet_MinValue()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x2468);
		}
		static ::System::TimeSpan* StaticGet_MaxValue()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x2470);
		}
		static ::System::Boolean* StaticGet__legacyMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x2478);
		}
		static ::System::Boolean* StaticGet__legacyConfigChecked()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x2479);
		}
		// static const ::System::Int64 TicksPerMillisecond = 0x2710; // 0x0
		// static const ::System::Double MillisecondsPerTick; // 0x0
		// static const ::System::Int64 TicksPerSecond = 0x989680; // 0x0
		// static const ::System::Double SecondsPerTick; // 0x0
		// static const ::System::Int64 TicksPerMinute = 0x23C34600; // 0x0
		// static const ::System::Double MinutesPerTick; // 0x0
		// static const ::System::Int64 TicksPerHour = 0x861C46800; // 0x0
		// static const ::System::Double HoursPerTick; // 0x0
		// static const ::System::Int64 TicksPerDay = 0xC92A69C000; // 0x0
		// static const ::System::Double DaysPerTick; // 0x0
		// static const ::System::Int32 MillisPerSecond = 0x3E8; // 0x0
		// static const ::System::Int32 MillisPerMinute = 0xEA60; // 0x0
		// static const ::System::Int32 MillisPerHour = 0x36EE80; // 0x0
		// static const ::System::Int32 MillisPerDay = 0x5265C00; // 0x0
		// static const ::System::Int64 MaxSeconds = 0xD6BF94D5E5; // 0x0
		// static const ::System::Int64 MinSeconds = 0xFFFFFF29406B2A1B; // 0x0
		// static const ::System::Int64 MaxMilliSeconds = 0x346DC5D638865; // 0x0
		// static const ::System::Int64 MinMilliSeconds = 0xFFFCB923A29C779B; // 0x0
		// static const ::System::Int64 TicksPerTenthSecond = 0xF4240; // 0x0
		::System::Int64 _ticks; // 0x10

		::System::Void _ctor(::System::Int64 ticks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CTOR_OFFSET))(this, ticks);
		}

		::System::Void _ctor_1(::System::Int32 hours, ::System::Int32 minutes, ::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CTOR_1_OFFSET))(this, hours, minutes, seconds);
		}

		::System::Void _ctor_2(::System::Int32 days, ::System::Int32 hours, ::System::Int32 minutes, ::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CTOR_2_OFFSET))(this, days, hours, minutes, seconds);
		}

		::System::Void _ctor_3(::System::Int32 days, ::System::Int32 hours, ::System::Int32 minutes, ::System::Int32 seconds, ::System::Int32 milliseconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CTOR_3_OFFSET))(this, days, hours, minutes, seconds, milliseconds);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CCTOR_OFFSET))();
		}

		::System::Int64 get_Ticks()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TICKS_OFFSET))(this);
		}

		::System::Int32 get_Days()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_DAYS_OFFSET))(this);
		}

		::System::Int32 get_Hours()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_HOURS_OFFSET))(this);
		}

		::System::Int32 get_Milliseconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_MILLISECONDS_OFFSET))(this);
		}

		::System::Int32 get_Minutes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_MINUTES_OFFSET))(this);
		}

		::System::Int32 get_Seconds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_SECONDS_OFFSET))(this);
		}

		::System::Double get_TotalDays()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALDAYS_OFFSET))(this);
		}

		::System::Double get_TotalHours()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALHOURS_OFFSET))(this);
		}

		::System::Double get_TotalMilliseconds()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALMILLISECONDS_OFFSET))(this);
		}

		::System::Double get_TotalMinutes()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALMINUTES_OFFSET))(this);
		}

		::System::Double get_TotalSeconds()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_TOTALSECONDS_OFFSET))(this);
		}

		::System::TimeSpan Add(::System::TimeSpan ts)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_ADD_OFFSET))(this, ts);
		}

		static ::System::Int32 Compare(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::Int32(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARE_OFFSET))(t1, t2);
		}

		::System::Int32 CompareTo(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARETO_OFFSET))(this, value);
		}

		::System::Int32 CompareTo_1(::System::TimeSpan value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARETO_1_OFFSET))(this, value);
		}

		static ::System::TimeSpan FromDays(::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMDAYS_OFFSET))(value);
		}

		::System::TimeSpan Duration()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_DURATION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::TimeSpan obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_1_OFFSET))(this, obj);
		}

		static ::System::Boolean Equals_2(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_2_OFFSET))(t1, t2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GETHASHCODE_OFFSET))(this);
		}

		static ::System::TimeSpan FromHours(::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMHOURS_OFFSET))(value);
		}

		static ::System::TimeSpan Interval(::System::Double value, ::System::Int32 scale)
		{
			return ((::System::TimeSpan(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_INTERVAL_OFFSET))(value, scale);
		}

		static ::System::TimeSpan FromMilliseconds(::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMMILLISECONDS_OFFSET))(value);
		}

		static ::System::TimeSpan FromMinutes(::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMMINUTES_OFFSET))(value);
		}

		::System::TimeSpan Negate()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_NEGATE_OFFSET))(this);
		}

		static ::System::TimeSpan FromSeconds(::System::Double value)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMSECONDS_OFFSET))(value);
		}

		::System::TimeSpan Subtract(::System::TimeSpan ts)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_SUBTRACT_OFFSET))(this, ts);
		}

		static ::System::TimeSpan FromTicks(::System::Int64 value)
		{
			return ((::System::TimeSpan(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMTICKS_OFFSET))(value);
		}

		static ::System::Int64 TimeToTicks(::System::Int32 hour, ::System::Int32 minute, ::System::Int32 second)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TIMETOTICKS_OFFSET))(hour, minute, second);
		}

		static ::System::TimeSpan Parse(::System::String* s)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSE_OFFSET))(s);
		}

		static ::System::TimeSpan Parse_1(::System::String* input, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSE_1_OFFSET))(input, formatProvider);
		}

		static ::System::TimeSpan ParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSEEXACT_OFFSET))(input, format, formatProvider);
		}

		static ::System::TimeSpan ParseExact_1(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSEEXACT_1_OFFSET))(input, formats, formatProvider);
		}

		static ::System::TimeSpan ParseExact_2(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSEEXACT_2_OFFSET))(input, format, formatProvider, styles);
		}

		static ::System::TimeSpan ParseExact_3(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSEEXACT_3_OFFSET))(input, formats, formatProvider, styles);
		}

		static ::System::Boolean TryParse(::System::String* s, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSE_OFFSET))(s, result);
		}

		static ::System::Boolean TryParse_1(::System::String* input, ::System::IFormatProvider* formatProvider, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSE_1_OFFSET))(input, formatProvider, result);
		}

		static ::System::Boolean TryParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_OFFSET))(input, format, formatProvider, result);
		}

		static ::System::Boolean TryParseExact_1(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_1_OFFSET))(input, formats, formatProvider, result);
		}

		static ::System::Boolean TryParseExact_2(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_2_OFFSET))(input, format, formatProvider, styles, result);
		}

		static ::System::Boolean TryParseExact_3(::System::String* input, ::Il2CppArray<::System::String*>* formats, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_3_OFFSET))(input, formats, formatProvider, styles, result);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_1_OFFSET))(this, format);
		}

		::System::String* ToString_2(::System::String* format, ::System::IFormatProvider* formatProvider)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_2_OFFSET))(this, format, formatProvider);
		}

		static ::System::TimeSpan op_UnaryNegation(::System::TimeSpan t)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_UNARYNEGATION_OFFSET))(t);
		}

		static ::System::TimeSpan op_Subtraction(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_SUBTRACTION_OFFSET))(t1, t2);
		}

		static ::System::TimeSpan op_UnaryPlus(::System::TimeSpan t)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_UNARYPLUS_OFFSET))(t);
		}

		static ::System::TimeSpan op_Addition(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_ADDITION_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_Equality(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_EQUALITY_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_Inequality(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_INEQUALITY_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_LessThan(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_LESSTHAN_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_LESSTHANOREQUAL_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_GreaterThan(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_GREATERTHAN_OFFSET))(t1, t2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_GREATERTHANOREQUAL_OFFSET))(t1, t2);
		}

		static ::System::Boolean LegacyFormatMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_LEGACYFORMATMODE_OFFSET))();
		}

		static ::System::Boolean GetLegacyFormatMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GETLEGACYFORMATMODE_OFFSET))();
		}

		static ::System::Boolean get_LegacyMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_LEGACYMODE_OFFSET))();
		}
	};
}
