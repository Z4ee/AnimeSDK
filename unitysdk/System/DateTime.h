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

#define SYSTEM_DATETIME_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x3833D10)
#define SYSTEM_DATETIME_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x3833D20)
#define SYSTEM_DATETIME_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x3833D30)
#define SYSTEM_DATETIME_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x3833D40)
#define SYSTEM_DATETIME_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x3833D50)
#define SYSTEM_DATETIME_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x3833D60)
#define SYSTEM_DATETIME_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x3833C70)
#define SYSTEM_DATETIME_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x3833D70)
#define SYSTEM_DATETIME_ADD_1_OFFSET UNITYSDK_OFFSET(0x3833D00)
#define SYSTEM_DATETIME_ADD_OFFSET UNITYSDK_OFFSET(0x3833C70)
#define SYSTEM_DATETIME_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x3833EB0)
#define SYSTEM_DATETIME_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3833E00)
#define SYSTEM_DATETIME_COMPARE_OFFSET UNITYSDK_OFFSET(0x18673000)
#define SYSTEM_DATETIME_DATETOTICKS_OFFSET UNITYSDK_OFFSET(0x18671600)
#define SYSTEM_DATETIME_DAYSINMONTH_OFFSET UNITYSDK_OFFSET(0x18672E30)
#define SYSTEM_DATETIME_DOUBLEDATETOTICKS_OFFSET UNITYSDK_OFFSET(0x18673190)
#define SYSTEM_DATETIME_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3833F10)
#define SYSTEM_DATETIME_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x18673330)
#define SYSTEM_DATETIME_EQUALS_OFFSET UNITYSDK_OFFSET(0x3833EE0)
#define SYSTEM_DATETIME_FROMBINARYRAW_OFFSET UNITYSDK_OFFSET(0x186735A0)
#define SYSTEM_DATETIME_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18673340)
#define SYSTEM_DATETIME_FROMFILETIMEUTC_OFFSET UNITYSDK_OFFSET(0x186737A0)
#define SYSTEM_DATETIME_FROMFILETIME_OFFSET UNITYSDK_OFFSET(0x18673630)
#define SYSTEM_DATETIME_FROMOADATE_OFFSET UNITYSDK_OFFSET(0x18673930)
#define SYSTEM_DATETIME_GETDATEPART_OFFSET UNITYSDK_OFFSET(0x3834080)
#define SYSTEM_DATETIME_GETDATETIMEFORMATS_1_OFFSET UNITYSDK_OFFSET(0x3834D70)
#define SYSTEM_DATETIME_GETDATETIMEFORMATS_2_OFFSET UNITYSDK_OFFSET(0x3834DB0)
#define SYSTEM_DATETIME_GETDATETIMEFORMATS_3_OFFSET UNITYSDK_OFFSET(0x3834E60)
#define SYSTEM_DATETIME_GETDATETIMEFORMATS_OFFSET UNITYSDK_OFFSET(0x3834CC0)
#define SYSTEM_DATETIME_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x38341C0)
#define SYSTEM_DATETIME_GETSYSTEMTIMEASFILETIME_OFFSET UNITYSDK_OFFSET(0x18674070)
#define SYSTEM_DATETIME_GETTYPECODE_OFFSET UNITYSDK_OFFSET(0x3834EB0)
#define SYSTEM_DATETIME_GET_DATE_OFFSET UNITYSDK_OFFSET(0x3834030)
#define SYSTEM_DATETIME_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x38340A0)
#define SYSTEM_DATETIME_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x38340F0)
#define SYSTEM_DATETIME_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3834090)
#define SYSTEM_DATETIME_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x38341E0)
#define SYSTEM_DATETIME_GET_INTERNALKIND_OFFSET UNITYSDK_OFFSET(0x3833C60)
#define SYSTEM_DATETIME_GET_INTERNALTICKS_OFFSET UNITYSDK_OFFSET(0x3833C50)
#define SYSTEM_DATETIME_GET_KIND_OFFSET UNITYSDK_OFFSET(0x3834230)
#define SYSTEM_DATETIME_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x3834260)
#define SYSTEM_DATETIME_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x38342B0)
#define SYSTEM_DATETIME_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x38342F0)
#define SYSTEM_DATETIME_GET_NOW_OFFSET UNITYSDK_OFFSET(0x18673FB0)
#define SYSTEM_DATETIME_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x3834420)
#define SYSTEM_DATETIME_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x3833C50)
#define SYSTEM_DATETIME_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x3834460)
#define SYSTEM_DATETIME_GET_TODAY_OFFSET UNITYSDK_OFFSET(0x18674110)
#define SYSTEM_DATETIME_GET_UTCNOW_OFFSET UNITYSDK_OFFSET(0x18674040)
#define SYSTEM_DATETIME_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x38344A0)
#define SYSTEM_DATETIME_ISAMBIGUOUSDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x3834220)
#define SYSTEM_DATETIME_ISDAYLIGHTSAVINGTIME_OFFSET UNITYSDK_OFFSET(0x3833F30)
#define SYSTEM_DATETIME_ISLEAPYEAR_OFFSET UNITYSDK_OFFSET(0x18673100)
#define SYSTEM_DATETIME_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x18675980)
#define SYSTEM_DATETIME_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x18675AD0)
#define SYSTEM_DATETIME_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x18675B50)
#define SYSTEM_DATETIME_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x18675B30)
#define SYSTEM_DATETIME_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x18675AE0)
#define SYSTEM_DATETIME_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x18675B10)
#define SYSTEM_DATETIME_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x18675AF0)
#define SYSTEM_DATETIME_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x18675AB0)
#define SYSTEM_DATETIME_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x18675A10)
#define SYSTEM_DATETIME_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x18674680)
#define SYSTEM_DATETIME_PARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x18674700)
#define SYSTEM_DATETIME_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x186744A0)
#define SYSTEM_DATETIME_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1866C9D0)
#define SYSTEM_DATETIME_PARSE_2_OFFSET UNITYSDK_OFFSET(0x18674400)
#define SYSTEM_DATETIME_PARSE_OFFSET UNITYSDK_OFFSET(0x186742B0)
#define SYSTEM_DATETIME_SPECIFYKIND_OFFSET UNITYSDK_OFFSET(0x18673B60)
#define SYSTEM_DATETIME_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x38345A0)
#define SYSTEM_DATETIME_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x3834580)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET UNITYSDK_OFFSET(0x3834EC0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET UNITYSDK_OFFSET(0x3834EF0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET UNITYSDK_OFFSET(0x3834ED0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET UNITYSDK_OFFSET(0x5B60)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET UNITYSDK_OFFSET(0x3834F80)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET UNITYSDK_OFFSET(0x3834F70)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET UNITYSDK_OFFSET(0x3834F00)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET UNITYSDK_OFFSET(0x3834F20)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET UNITYSDK_OFFSET(0x3834F40)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET UNITYSDK_OFFSET(0x3834EE0)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET UNITYSDK_OFFSET(0x3834F60)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET UNITYSDK_OFFSET(0x3834F90)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET UNITYSDK_OFFSET(0x3834F10)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET UNITYSDK_OFFSET(0x3834F30)
#define SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET UNITYSDK_OFFSET(0x3834F50)
#define SYSTEM_DATETIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3833F20)
#define SYSTEM_DATETIME_TICKSTOOADATE_OFFSET UNITYSDK_OFFSET(0x18674950)
#define SYSTEM_DATETIME_TIMETOTICKS_OFFSET UNITYSDK_OFFSET(0x18671990)
#define SYSTEM_DATETIME_TOBINARYRAW_OFFSET UNITYSDK_OFFSET(0x5B60)
#define SYSTEM_DATETIME_TOBINARY_OFFSET UNITYSDK_OFFSET(0x3833FD0)
#define SYSTEM_DATETIME_TOFILETIMEUTC_OFFSET UNITYSDK_OFFSET(0x3834790)
#define SYSTEM_DATETIME_TOFILETIME_OFFSET UNITYSDK_OFFSET(0x3834780)
#define SYSTEM_DATETIME_TOLOCALTIME_1_OFFSET UNITYSDK_OFFSET(0x38349B0)
#define SYSTEM_DATETIME_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x3834880)
#define SYSTEM_DATETIME_TOLONGDATESTRING_OFFSET UNITYSDK_OFFSET(0x38349C0)
#define SYSTEM_DATETIME_TOLONGTIMESTRING_OFFSET UNITYSDK_OFFSET(0x3834A10)
#define SYSTEM_DATETIME_TOOADATE_OFFSET UNITYSDK_OFFSET(0x3834650)
#define SYSTEM_DATETIME_TOSHORTDATESTRING_OFFSET UNITYSDK_OFFSET(0x3834A60)
#define SYSTEM_DATETIME_TOSHORTTIMESTRING_OFFSET UNITYSDK_OFFSET(0x3834AB0)
#define SYSTEM_DATETIME_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3834B40)
#define SYSTEM_DATETIME_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3834B90)
#define SYSTEM_DATETIME_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x3834BE0)
#define SYSTEM_DATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3834B00)
#define SYSTEM_DATETIME_TOUNIVERSALTIME_OFFSET UNITYSDK_OFFSET(0x3834C30)
#define SYSTEM_DATETIME_TRYCREATE_OFFSET UNITYSDK_OFFSET(0x186763A0)
#define SYSTEM_DATETIME_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x18675790)
#define SYSTEM_DATETIME_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x18675520)
#define SYSTEM_DATETIME_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x186753E0)
#define SYSTEM_DATETIME_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x18675230)
#define SYSTEM_DATETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x18676510)
#define SYSTEM_DATETIME__CTOR_10_OFFSET UNITYSDK_OFFSET(0x3833C10)
#define SYSTEM_DATETIME__CTOR_11_OFFSET UNITYSDK_OFFSET(0x3833C20)
#define SYSTEM_DATETIME__CTOR_12_OFFSET UNITYSDK_OFFSET(0x3833C30)
#define SYSTEM_DATETIME__CTOR_13_OFFSET UNITYSDK_OFFSET(0x3833C40)
#define SYSTEM_DATETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0xC630)
#define SYSTEM_DATETIME__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3833910)
#define SYSTEM_DATETIME__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3833920)
#define SYSTEM_DATETIME__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3833990)
#define SYSTEM_DATETIME__CTOR_5_OFFSET UNITYSDK_OFFSET(0x38339B0)
#define SYSTEM_DATETIME__CTOR_6_OFFSET UNITYSDK_OFFSET(0x3833A80)
#define SYSTEM_DATETIME__CTOR_7_OFFSET UNITYSDK_OFFSET(0x3833B10)
#define SYSTEM_DATETIME__CTOR_8_OFFSET UNITYSDK_OFFSET(0x3833B20)
#define SYSTEM_DATETIME__CTOR_9_OFFSET UNITYSDK_OFFSET(0x3833C00)
#define SYSTEM_DATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x3833880)

namespace System
{
	inline static constexpr unsigned int DateTime_TypeDefinitionIndex = 223;

	struct alignas(8) DateTime
	{
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth365()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0xC90);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_DaysToMonth366()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0xC98);
		}
		static ::System::DateTime* StaticGet_MaxValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0x690);
		}
		static ::System::DateTime* StaticGet_MinValue()
		{
			return (::System::DateTime*)Il2CppClass::FromTypeDefinitionIndex(DateTime_TypeDefinitionIndex)->GetStaticField(0x698);
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

		::System::Void _ctor(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::System::Int64 a1, ::System::DateTimeKind a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::System::Int64 a1, ::System::DateTimeKind a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::DateTimeKind, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_4_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Globalization::Calendar* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_5_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ctor_6(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_6_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ctor_7(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::DateTimeKind a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_7_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_8(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Globalization::Calendar* a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_8_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_9(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_9_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void _ctor_10(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::DateTimeKind a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_10_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _ctor_11(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Globalization::Calendar* a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_11_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void _ctor_12(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Globalization::Calendar* a8, ::System::DateTimeKind a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_12_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		/*
		::System::Void _ctor_13(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME__CTOR_13_OFFSET))(this, a1, a2);
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
		::System::DateTime Add(::System::TimeSpan a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADD_OFFSET))(this, a1);
		}
		*/

		::System::DateTime Add_1(::System::Double a1, ::System::Int32 a2)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADD_1_OFFSET))(this, a1, a2);
		}

		::System::DateTime AddDays(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDDAYS_OFFSET))(this, a1);
		}

		::System::DateTime AddHours(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDHOURS_OFFSET))(this, a1);
		}

		::System::DateTime AddMilliseconds(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMILLISECONDS_OFFSET))(this, a1);
		}

		::System::DateTime AddMinutes(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMINUTES_OFFSET))(this, a1);
		}

		::System::DateTime AddMonths(::System::Int32 a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDMONTHS_OFFSET))(this, a1);
		}

		::System::DateTime AddSeconds(::System::Double a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDSECONDS_OFFSET))(this, a1);
		}

		::System::DateTime AddTicks(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDTICKS_OFFSET))(this, a1);
		}

		::System::DateTime AddYears(::System::Int32 a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ADDYEARS_OFFSET))(this, a1);
		}

		static ::System::Int32 Compare(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Int32(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARE_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::DateTime a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_COMPARETO_1_OFFSET))(this, a1);
		}

		static ::System::Int64 DateToTicks(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_DATETOTICKS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int64 TimeToTicks(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int64(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TIMETOTICKS_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 DaysInMonth(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_DAYSINMONTH_OFFSET))(a1, a2);
		}

		static ::System::Int64 DoubleDateToTicks(::System::Double a1)
		{
			return ((::System::Int64(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_DOUBLEDATETOTICKS_OFFSET))(a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::DateTime a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_EQUALS_1_OFFSET))(this, a1);
		}

		static ::System::Boolean Equals_2(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_EQUALS_2_OFFSET))(a1, a2);
		}

		static ::System::DateTime FromBinary(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMBINARY_OFFSET))(a1);
		}

		static ::System::DateTime FromBinaryRaw(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMBINARYRAW_OFFSET))(a1);
		}

		static ::System::DateTime FromFileTime(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMFILETIME_OFFSET))(a1);
		}

		static ::System::DateTime FromFileTimeUtc(::System::Int64 a1)
		{
			return ((::System::DateTime(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMFILETIMEUTC_OFFSET))(a1);
		}

		static ::System::DateTime FromOADate(::System::Double a1)
		{
			return ((::System::DateTime(*)(::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_FROMOADATE_OFFSET))(a1);
		}

		/*
		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
		*/

		::System::Boolean IsDaylightSavingTime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ISDAYLIGHTSAVINGTIME_OFFSET))(this);
		}

		static ::System::DateTime SpecifyKind(::System::DateTime a1, ::System::DateTimeKind a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::DateTimeKind))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SPECIFYKIND_OFFSET))(a1, a2);
		}

		::System::Int64 ToBinary()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOBINARY_OFFSET))(this);
		}

		::System::Int64 ToBinaryRaw()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOBINARYRAW_OFFSET))(this);
		}

		::System::DateTime get_Date()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GET_DATE_OFFSET))(this);
		}

		::System::Int32 GetDatePart(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATEPART_OFFSET))(this, a1);
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

		static ::System::Boolean IsLeapYear(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_ISLEAPYEAR_OFFSET))(a1);
		}

		static ::System::DateTime Parse(::System::String* a1)
		{
			return ((::System::DateTime(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_OFFSET))(a1);
		}

		static ::System::DateTime Parse_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_1_OFFSET))(a1, a2);
		}

		static ::System::DateTime Parse_2(::System::String* a1, ::System::IFormatProvider* a2, ::System::Globalization::DateTimeStyles a3)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::DateTime ParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_OFFSET))(a1, a2, a3);
		}

		static ::System::DateTime ParseExact_1(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4)
		{
			return ((::System::DateTime(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::DateTime ParseExact_2(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4)
		{
			return ((::System::DateTime(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_PARSEEXACT_2_OFFSET))(a1, a2, a3, a4);
		}

		/*
		::System::TimeSpan Subtract(::System::DateTime a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SUBTRACT_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTime Subtract_1(::System::TimeSpan a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SUBTRACT_1_OFFSET))(this, a1);
		}
		*/

		static ::System::Double TicksToOADate(::System::Int64 a1)
		{
			return ((::System::Double(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TICKSTOOADATE_OFFSET))(a1);
		}

		::System::Double ToOADate()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOOADATE_OFFSET))(this);
		}

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

		::System::DateTime ToLocalTime_1(::System::Boolean a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLOCALTIME_1_OFFSET))(this, a1);
		}

		::System::String* ToLongDateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLONGDATESTRING_OFFSET))(this);
		}

		::System::String* ToLongTimeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOLONGTIMESTRING_OFFSET))(this);
		}

		::System::String* ToShortDateString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSHORTDATESTRING_OFFSET))(this);
		}

		::System::String* ToShortTimeString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSHORTTIMESTRING_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOSTRING_3_OFFSET))(this, a1, a2);
		}

		::System::DateTime ToUniversalTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TOUNIVERSALTIME_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::DateTime& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::IFormatProvider* a2, ::System::Globalization::DateTimeStyles a3, ::System::DateTime& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTime& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSEEXACT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseExact_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTime& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYPARSEEXACT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		/*
		static ::System::DateTime op_Addition(::System::DateTime a1, ::System::TimeSpan a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_ADDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::DateTime op_Subtraction(::System::DateTime a1, ::System::TimeSpan a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_SUBTRACTION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::TimeSpan op_Subtraction_1(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::TimeSpan(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_SUBTRACTION_1_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean op_Equality(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::DateTime a1, ::System::DateTime a2)
		{
			return ((::System::Boolean(*)(::System::DateTime, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		::Il2CppArray<::System::String*>* GetDateTimeFormats()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATETIMEFORMATS_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* GetDateTimeFormats_1(::System::IFormatProvider* a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATETIMEFORMATS_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetDateTimeFormats_2(::System::Char a1)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATETIMEFORMATS_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::String*>* GetDateTimeFormats_3(::System::Char a1, ::System::IFormatProvider* a2)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID, ::System::Char, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETDATETIMEFORMATS_3_OFFSET))(this, a1, a2);
		}

		::System::TypeCode GetTypeCode()
		{
			return ((::System::TypeCode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_GETTYPECODE_OFFSET))(this);
		}

		::System::Boolean System_IConvertible_ToBoolean(::System::IFormatProvider* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBOOLEAN_OFFSET))(this, a1);
		}

		::System::Char System_IConvertible_ToChar(::System::IFormatProvider* a1)
		{
			return ((::System::Char(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOCHAR_OFFSET))(this, a1);
		}

		::System::SByte System_IConvertible_ToSByte(::System::IFormatProvider* a1)
		{
			return ((::System::SByte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSBYTE_OFFSET))(this, a1);
		}

		::System::Byte System_IConvertible_ToByte(::System::IFormatProvider* a1)
		{
			return ((::System::Byte(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOBYTE_OFFSET))(this, a1);
		}

		::System::Int16 System_IConvertible_ToInt16(::System::IFormatProvider* a1)
		{
			return ((::System::Int16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT16_OFFSET))(this, a1);
		}

		::System::UInt16 System_IConvertible_ToUInt16(::System::IFormatProvider* a1)
		{
			return ((::System::UInt16(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT16_OFFSET))(this, a1);
		}

		::System::Int32 System_IConvertible_ToInt32(::System::IFormatProvider* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT32_OFFSET))(this, a1);
		}

		::System::UInt32 System_IConvertible_ToUInt32(::System::IFormatProvider* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT32_OFFSET))(this, a1);
		}

		::System::Int64 System_IConvertible_ToInt64(::System::IFormatProvider* a1)
		{
			return ((::System::Int64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOINT64_OFFSET))(this, a1);
		}

		::System::UInt64 System_IConvertible_ToUInt64(::System::IFormatProvider* a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOUINT64_OFFSET))(this, a1);
		}

		::System::Single System_IConvertible_ToSingle(::System::IFormatProvider* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOSINGLE_OFFSET))(this, a1);
		}

		::System::Double System_IConvertible_ToDouble(::System::IFormatProvider* a1)
		{
			return ((::System::Double(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODOUBLE_OFFSET))(this, a1);
		}

		/*
		::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* a1)
		{
			return ((::System::Decimal(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODECIMAL_OFFSET))(this, a1);
		}
		*/

		::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* a1)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TODATETIME_OFFSET))(this, a1);
		}

		::System::Object* System_IConvertible_ToType(::System::Type* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Type*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_SYSTEM_ICONVERTIBLE_TOTYPE_OFFSET))(this, a1, a2);
		}

		static ::System::Boolean TryCreate(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::DateTime& a8)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIME_TRYCREATE_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}
	};
}
