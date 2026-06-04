#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Globalization/TimeSpanStyles.h"
#include "unitysdk/System/ValueType.h"

namespace System { class IFormatProvider; }
namespace System { class Object; }
namespace System { class String; }

#define SYSTEM_TIMESPAN_ADD_OFFSET UNITYSDK_OFFSET(0x3830180)
#define SYSTEM_TIMESPAN_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x38302B0)
#define SYSTEM_TIMESPAN_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3830210)
#define SYSTEM_TIMESPAN_COMPARE_OFFSET UNITYSDK_OFFSET(0x1863A780)
#define SYSTEM_TIMESPAN_DURATION_OFFSET UNITYSDK_OFFSET(0x38302D0)
#define SYSTEM_TIMESPAN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2BFB070)
#define SYSTEM_TIMESPAN_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1863AA00)
#define SYSTEM_TIMESPAN_EQUALS_OFFSET UNITYSDK_OFFSET(0x3830350)
#define SYSTEM_TIMESPAN_FROMDAYS_OFFSET UNITYSDK_OFFSET(0x1863A860)
#define SYSTEM_TIMESPAN_FROMHOURS_OFFSET UNITYSDK_OFFSET(0x1863AA20)
#define SYSTEM_TIMESPAN_FROMMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1863AA30)
#define SYSTEM_TIMESPAN_FROMMINUTES_OFFSET UNITYSDK_OFFSET(0x1863AA40)
#define SYSTEM_TIMESPAN_FROMSECONDS_OFFSET UNITYSDK_OFFSET(0x1863AAD0)
#define SYSTEM_TIMESPAN_FROMTICKS_OFFSET UNITYSDK_OFFSET(0x1863AB70)
#define SYSTEM_TIMESPAN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x14A8F0)
#define SYSTEM_TIMESPAN_GETLEGACYFORMATMODE_OFFSET UNITYSDK_OFFSET(0x1863BCE0)
#define SYSTEM_TIMESPAN_GET_DAYS_OFFSET UNITYSDK_OFFSET(0x382FFA0)
#define SYSTEM_TIMESPAN_GET_HOURS_OFFSET UNITYSDK_OFFSET(0x382FFD0)
#define SYSTEM_TIMESPAN_GET_LEGACYMODE_OFFSET UNITYSDK_OFFSET(0x1863BAA0)
#define SYSTEM_TIMESPAN_GET_MILLISECONDS_OFFSET UNITYSDK_OFFSET(0x3830010)
#define SYSTEM_TIMESPAN_GET_MINUTES_OFFSET UNITYSDK_OFFSET(0x3830060)
#define SYSTEM_TIMESPAN_GET_SECONDS_OFFSET UNITYSDK_OFFSET(0x38300B0)
#define SYSTEM_TIMESPAN_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x5B60)
#define SYSTEM_TIMESPAN_GET_TOTALDAYS_OFFSET UNITYSDK_OFFSET(0x3830100)
#define SYSTEM_TIMESPAN_GET_TOTALHOURS_OFFSET UNITYSDK_OFFSET(0x3830110)
#define SYSTEM_TIMESPAN_GET_TOTALMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x3830120)
#define SYSTEM_TIMESPAN_GET_TOTALMINUTES_OFFSET UNITYSDK_OFFSET(0x3830160)
#define SYSTEM_TIMESPAN_GET_TOTALSECONDS_OFFSET UNITYSDK_OFFSET(0x3830170)
#define SYSTEM_TIMESPAN_INTERVAL_OFFSET UNITYSDK_OFFSET(0x1863A870)
#define SYSTEM_TIMESPAN_LEGACYFORMATMODE_OFFSET UNITYSDK_OFFSET(0x1863BCD0)
#define SYSTEM_TIMESPAN_NEGATE_OFFSET UNITYSDK_OFFSET(0x3830370)
#define SYSTEM_TIMESPAN_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1863BBF0)
#define SYSTEM_TIMESPAN_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1863BC70)
#define SYSTEM_TIMESPAN_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1863BCC0)
#define SYSTEM_TIMESPAN_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1863BCB0)
#define SYSTEM_TIMESPAN_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1863BC80)
#define SYSTEM_TIMESPAN_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1863BCA0)
#define SYSTEM_TIMESPAN_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1863BC90)
#define SYSTEM_TIMESPAN_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1863BB60)
#define SYSTEM_TIMESPAN_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1863BAE0)
#define SYSTEM_TIMESPAN_OP_UNARYPLUS_OFFSET UNITYSDK_OFFSET(0x1863BBE0)
#define SYSTEM_TIMESPAN_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1863AE80)
#define SYSTEM_TIMESPAN_PARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1863AF90)
#define SYSTEM_TIMESPAN_PARSEEXACT_3_OFFSET UNITYSDK_OFFSET(0x1863B120)
#define SYSTEM_TIMESPAN_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1863AD70)
#define SYSTEM_TIMESPAN_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1863AC70)
#define SYSTEM_TIMESPAN_PARSE_OFFSET UNITYSDK_OFFSET(0x1863AB80)
#define SYSTEM_TIMESPAN_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x38303F0)
#define SYSTEM_TIMESPAN_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x1863A430)
#define SYSTEM_TIMESPAN_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x38304C0)
#define SYSTEM_TIMESPAN_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3830500)
#define SYSTEM_TIMESPAN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3830480)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1863B590)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1863B690)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_3_OFFSET UNITYSDK_OFFSET(0x1863B810)
#define SYSTEM_TIMESPAN_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1863B490)
#define SYSTEM_TIMESPAN_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1863B3A0)
#define SYSTEM_TIMESPAN_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1863B2B0)
#define SYSTEM_TIMESPAN__CCTOR_OFFSET UNITYSDK_OFFSET(0x1863BCF0)
#define SYSTEM_TIMESPAN__CTOR_1_OFFSET UNITYSDK_OFFSET(0x382FDD0)
#define SYSTEM_TIMESPAN__CTOR_2_OFFSET UNITYSDK_OFFSET(0x382FE60)
#define SYSTEM_TIMESPAN__CTOR_3_OFFSET UNITYSDK_OFFSET(0x382FF00)
#define SYSTEM_TIMESPAN__CTOR_OFFSET UNITYSDK_OFFSET(0xC630)

namespace System
{
	inline static constexpr unsigned int TimeSpan_TypeDefinitionIndex = 338;

	struct alignas(8) TimeSpan
	{
		static ::System::TimeSpan* StaticGet_MinValue()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x6C0);
		}
		static ::System::TimeSpan* StaticGet_MaxValue()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x6C8);
		}
		static ::System::Boolean* StaticGet__legacyMode()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x6D0);
		}
		static ::System::Boolean* StaticGet__legacyConfigChecked()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x6D1);
		}
		static ::System::TimeSpan* StaticGet_Zero()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(TimeSpan_TypeDefinitionIndex)->GetStaticField(0x6D8);
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

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_2(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CTOR_2_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5);
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

		::System::TimeSpan Add(::System::TimeSpan a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_ADD_OFFSET))(this, a1);
		}

		static ::System::Int32 Compare(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Int32(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARE_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::TimeSpan a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_COMPARETO_1_OFFSET))(this, a1);
		}

		static ::System::TimeSpan FromDays(::System::Double a1)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMDAYS_OFFSET))(a1);
		}

		::System::TimeSpan Duration()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_DURATION_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::TimeSpan a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean Equals_2(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_EQUALS_2_OFFSET))(a1, a2);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_GETHASHCODE_OFFSET))(this);
		}

		static ::System::TimeSpan FromHours(::System::Double a1)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMHOURS_OFFSET))(a1);
		}

		static ::System::TimeSpan Interval(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::TimeSpan(*)(::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_INTERVAL_OFFSET))(a1, a2);
		}

		static ::System::TimeSpan FromMilliseconds(::System::Double a1)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMMILLISECONDS_OFFSET))(a1);
		}

		static ::System::TimeSpan FromMinutes(::System::Double a1)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMMINUTES_OFFSET))(a1);
		}

		::System::TimeSpan Negate()
		{
			return ((::System::TimeSpan(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_NEGATE_OFFSET))(this);
		}

		static ::System::TimeSpan FromSeconds(::System::Double a1)
		{
			return ((::System::TimeSpan(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMSECONDS_OFFSET))(a1);
		}

		::System::TimeSpan Subtract(::System::TimeSpan a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_SUBTRACT_OFFSET))(this, a1);
		}

		static ::System::TimeSpan FromTicks(::System::Int64 a1)
		{
			return ((::System::TimeSpan(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_FROMTICKS_OFFSET))(a1);
		}

		static ::System::Int64 TimeToTicks(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TIMETOTICKS_OFFSET))(a1, a2, a3);
		}

		static ::System::TimeSpan Parse(::System::String* a1)
		{
			return ((::System::TimeSpan(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSE_OFFSET))(a1);
		}

		static ::System::TimeSpan Parse_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSE_1_OFFSET))(a1, a2);
		}

		static ::System::TimeSpan ParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSEEXACT_OFFSET))(a1, a2, a3);
		}

		static ::System::TimeSpan ParseExact_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSEEXACT_1_OFFSET))(a1, a2, a3);
		}

		static ::System::TimeSpan ParseExact_2(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSEEXACT_2_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::TimeSpan ParseExact_3(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4)
		{
			return ((::System::TimeSpan(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_PARSEEXACT_3_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::TimeSpan& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::IFormatProvider* a2, ::System::TimeSpan& a3)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSE_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean TryParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::TimeSpan& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseExact_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::TimeSpan& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseExact_2(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4, ::System::TimeSpan& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_2_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseExact_3(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::TimeSpanStyles a4, ::System::TimeSpan& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::TimeSpanStyles, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TRYPARSEEXACT_3_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_TOSTRING_2_OFFSET))(this, a1, a2);
		}

		static ::System::TimeSpan op_UnaryNegation(::System::TimeSpan a1)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::System::TimeSpan op_Subtraction(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::System::TimeSpan op_UnaryPlus(::System::TimeSpan a1)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_UNARYPLUS_OFFSET))(a1);
		}

		static ::System::TimeSpan op_Addition(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::TimeSpan(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::TimeSpan a1, ::System::TimeSpan a2)
		{
			return ((::System::Boolean(*)(::System::TimeSpan, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_TIMESPAN_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
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
