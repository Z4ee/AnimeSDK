#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanStyles.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_TIMESPAN_ADD_OFFSET UNITYSDK_OFFSET(0x8B8660)
#define SYSTEM_TIMESPAN_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x8B8790)
#define SYSTEM_TIMESPAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x8B86F0)
#define SYSTEM_TIMESPAN_COMPARE_OFFSET UNITYSDK_OFFSET(0x1AE76610)
#define SYSTEM_TIMESPAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x332D90)
#define SYSTEM_TIMESPAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x8B87B0)
#define SYSTEM_TIMESPAN_FROMDAYS_OFFSET UNITYSDK_OFFSET(0x1AE766F0)
#define SYSTEM_TIMESPAN_FROMHOURS_OFFSET UNITYSDK_OFFSET(0x1AE76850)
#define SYSTEM_TIMESPAN_FROMMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1AE76860)
#define SYSTEM_TIMESPAN_FROMMINUTES_OFFSET UNITYSDK_OFFSET(0x1AE76870)
#define SYSTEM_TIMESPAN_FROMSECONDS_OFFSET UNITYSDK_OFFSET(0x1AE76900)
#define SYSTEM_TIMESPAN_FROMTICKS_OFFSET UNITYSDK_OFFSET(0x1AE769A0)
#define SYSTEM_TIMESPAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x8B87D0)
#define SYSTEM_TIMESPAN_GET_DAYS_OFFSET UNITYSDK_OFFSET(0x8B8480)
#define SYSTEM_TIMESPAN_GET_HOURS_OFFSET UNITYSDK_OFFSET(0x8B84B0)
#define SYSTEM_TIMESPAN_GET_LEGACYMODE_OFFSET UNITYSDK_OFFSET(0x1AE76FA0)
#define SYSTEM_TIMESPAN_GET_MILLISECONDS_OFFSET UNITYSDK_OFFSET(0x8B84F0)
#define SYSTEM_TIMESPAN_GET_MINUTES_OFFSET UNITYSDK_OFFSET(0x8B8540)
#define SYSTEM_TIMESPAN_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x8B8590)
#define SYSTEM_TIMESPAN_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x246290)
#define SYSTEM_TIMESPAN_GET_TOTALDAYS_OFFSET UNITYSDK_OFFSET(0x8B85E0)
#define SYSTEM_TIMESPAN_GET_TOTALHOURS_OFFSET UNITYSDK_OFFSET(0x8B85F0)
#define SYSTEM_TIMESPAN_GET_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x8B8600)
#define SYSTEM_TIMESPAN_GET_TOTALMINUTES_OFFSET UNITYSDK_OFFSET(0x8B8640)
#define SYSTEM_TIMESPAN_GET_TOTALSECONDS_OFFSET UNITYSDK_OFFSET(0x8B8650)
#define SYSTEM_TIMESPAN_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1AE76700)
#define SYSTEM_TIMESPAN_NEGATE_OFFSET UNITYSDK_OFFSET(0x8B87E0)
#define SYSTEM_TIMESPAN_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1AE77060)
#define SYSTEM_TIMESPAN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE770E0)
#define SYSTEM_TIMESPAN_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1AE77120)
#define SYSTEM_TIMESPAN_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1AE77110)
#define SYSTEM_TIMESPAN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AE770F0)
#define SYSTEM_TIMESPAN_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1AE77100)
#define SYSTEM_TIMESPAN_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1AE53E20)
#define SYSTEM_TIMESPAN_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1AE76FE0)
#define SYSTEM_TIMESPAN_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1AE76AA0)
#define SYSTEM_TIMESPAN_PARSE_OFFSET UNITYSDK_OFFSET(0x1AE769B0)
#define SYSTEM_TIMESPAN_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x8B8860)
#define SYSTEM_TIMESPAN_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x1AE47AF0)
#define SYSTEM_TIMESPAN_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x8B8960)
#define SYSTEM_TIMESPAN_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x8B89D0)
#define SYSTEM_TIMESPAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x8B88F0)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1AE76C90)
#define SYSTEM_TIMESPAN_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1AE76BA0)
#define SYSTEM_TIMESPAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AE77130)
#define SYSTEM_TIMESPAN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x8B8220)
#define SYSTEM_TIMESPAN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x8B82D0)
#define SYSTEM_TIMESPAN__CTOR_3_OFFSET UNITYSDK_OFFSET(0x8B83A0)
#define SYSTEM_TIMESPAN__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

namespace System
{
	inline static constexpr unsigned int TimeSpan_TypeDefinitionIndex = 329;

	struct alignas(8) TimeSpan
	{
		static ::System::TimeSpan* StaticGet_MinValue()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0xB0);
		}
		static ::System::TimeSpan* StaticGet_MaxValue()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0xB8);
		}
		static ::System::TimeSpan* StaticGet_Zero()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0xC0);
		}
		static ::System::Boolean* StaticGet__legacyConfigChecked()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0xC8);
		}
		static ::System::Boolean* StaticGet__legacyMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0xC9);
		}
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

		::System::Boolean Equals(::System::Object* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_OFFSET))(this, value);
		}

		::System::Boolean Equals_1(::System::TimeSpan obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_1_OFFSET))(this, obj);
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

		static ::System::Boolean TryParse(::System::String* input, ::System::IFormatProvider* formatProvider, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSE_OFFSET))(input, formatProvider, result);
		}

		static ::System::Boolean TryParseExact(::System::String* input, ::System::String* format, ::System::IFormatProvider* formatProvider, ::System::Globalization::TimeSpanStyles styles, ::System::TimeSpan& result)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_OFFSET))(input, format, formatProvider, styles, result);
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

		static ::System::TimeSpan op_Subtraction(::System::TimeSpan t1, ::System::TimeSpan t2)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_SUBTRACTION_OFFSET))(t1, t2);
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

		static ::System::Boolean get_LegacyMode()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GET_LEGACYMODE_OFFSET))();
		}
	};
}
