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

#define SYSTEM_DATETIMEOFFSET_ADDDAYS_OFFSET UNITYSDK_OFFSET(0x38356F0)
#define SYSTEM_DATETIMEOFFSET_ADDHOURS_OFFSET UNITYSDK_OFFSET(0x3835760)
#define SYSTEM_DATETIMEOFFSET_ADDMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x38357D0)
#define SYSTEM_DATETIMEOFFSET_ADDMINUTES_OFFSET UNITYSDK_OFFSET(0x3835840)
#define SYSTEM_DATETIMEOFFSET_ADDMONTHS_OFFSET UNITYSDK_OFFSET(0x38358B0)
#define SYSTEM_DATETIMEOFFSET_ADDSECONDS_OFFSET UNITYSDK_OFFSET(0x3835910)
#define SYSTEM_DATETIMEOFFSET_ADDTICKS_OFFSET UNITYSDK_OFFSET(0x3835640)
#define SYSTEM_DATETIMEOFFSET_ADDYEARS_OFFSET UNITYSDK_OFFSET(0x3835980)
#define SYSTEM_DATETIMEOFFSET_ADD_OFFSET UNITYSDK_OFFSET(0x3835640)
#define SYSTEM_DATETIMEOFFSET_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3835A60)
#define SYSTEM_DATETIMEOFFSET_COMPARE_OFFSET UNITYSDK_OFFSET(0x1867AF90)
#define SYSTEM_DATETIMEOFFSET_EQUALSEXACT_OFFSET UNITYSDK_OFFSET(0x3835AB0)
#define SYSTEM_DATETIMEOFFSET_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3835A90)
#define SYSTEM_DATETIMEOFFSET_EQUALS_2_OFFSET UNITYSDK_OFFSET(0x1867B410)
#define SYSTEM_DATETIMEOFFSET_EQUALS_OFFSET UNITYSDK_OFFSET(0x3835A80)
#define SYSTEM_DATETIMEOFFSET_FROMFILETIME_OFFSET UNITYSDK_OFFSET(0x1867B4C0)
#define SYSTEM_DATETIMEOFFSET_FROMUNIXTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x1867B600)
#define SYSTEM_DATETIMEOFFSET_FROMUNIXTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x1867B4F0)
#define SYSTEM_DATETIMEOFFSET_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3835B50)
#define SYSTEM_DATETIMEOFFSET_GET_CLOCKDATETIME_OFFSET UNITYSDK_OFFSET(0x3835030)
#define SYSTEM_DATETIMEOFFSET_GET_DATETIME_OFFSET UNITYSDK_OFFSET(0x3835030)
#define SYSTEM_DATETIMEOFFSET_GET_DATE_OFFSET UNITYSDK_OFFSET(0x3835150)
#define SYSTEM_DATETIMEOFFSET_GET_DAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x38351C0)
#define SYSTEM_DATETIMEOFFSET_GET_DAYOFYEAR_OFFSET UNITYSDK_OFFSET(0x3835220)
#define SYSTEM_DATETIMEOFFSET_GET_DAY_OFFSET UNITYSDK_OFFSET(0x3835190)
#define SYSTEM_DATETIMEOFFSET_GET_HOUR_OFFSET UNITYSDK_OFFSET(0x3835300)
#define SYSTEM_DATETIMEOFFSET_GET_LOCALDATETIME_OFFSET UNITYSDK_OFFSET(0x38350B0)
#define SYSTEM_DATETIMEOFFSET_GET_MILLISECOND_OFFSET UNITYSDK_OFFSET(0x3835350)
#define SYSTEM_DATETIMEOFFSET_GET_MINUTE_OFFSET UNITYSDK_OFFSET(0x38353B0)
#define SYSTEM_DATETIMEOFFSET_GET_MONTH_OFFSET UNITYSDK_OFFSET(0x3835400)
#define SYSTEM_DATETIMEOFFSET_GET_NOW_OFFSET UNITYSDK_OFFSET(0x1867A0E0)
#define SYSTEM_DATETIMEOFFSET_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0x3835410)
#define SYSTEM_DATETIMEOFFSET_GET_SECOND_OFFSET UNITYSDK_OFFSET(0x3835420)
#define SYSTEM_DATETIMEOFFSET_GET_TICKS_OFFSET UNITYSDK_OFFSET(0x3835470)
#define SYSTEM_DATETIMEOFFSET_GET_TIMEOFDAY_OFFSET UNITYSDK_OFFSET(0x3835500)
#define SYSTEM_DATETIMEOFFSET_GET_UTCDATETIME_OFFSET UNITYSDK_OFFSET(0x3835040)
#define SYSTEM_DATETIMEOFFSET_GET_UTCNOW_OFFSET UNITYSDK_OFFSET(0x1867A190)
#define SYSTEM_DATETIMEOFFSET_GET_UTCTICKS_OFFSET UNITYSDK_OFFSET(0x3835490)
#define SYSTEM_DATETIMEOFFSET_GET_YEAR_OFFSET UNITYSDK_OFFSET(0x3835550)
#define SYSTEM_DATETIMEOFFSET_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1867D690)
#define SYSTEM_DATETIMEOFFSET_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1867D8B0)
#define SYSTEM_DATETIMEOFFSET_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1867DC20)
#define SYSTEM_DATETIMEOFFSET_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1867DB70)
#define SYSTEM_DATETIMEOFFSET_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1867D670)
#define SYSTEM_DATETIMEOFFSET_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1867D960)
#define SYSTEM_DATETIMEOFFSET_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1867DAC0)
#define SYSTEM_DATETIMEOFFSET_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1867DA10)
#define SYSTEM_DATETIMEOFFSET_OP_SUBTRACTION_1_OFFSET UNITYSDK_OFFSET(0x1867D800)
#define SYSTEM_DATETIMEOFFSET_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1867D740)
#define SYSTEM_DATETIMEOFFSET_PARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1867C040)
#define SYSTEM_DATETIMEOFFSET_PARSEEXACT_2_OFFSET UNITYSDK_OFFSET(0x1867C310)
#define SYSTEM_DATETIMEOFFSET_PARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1867BFE0)
#define SYSTEM_DATETIMEOFFSET_PARSE_1_OFFSET UNITYSDK_OFFSET(0x1867BD80)
#define SYSTEM_DATETIMEOFFSET_PARSE_2_OFFSET UNITYSDK_OFFSET(0x1867BDD0)
#define SYSTEM_DATETIMEOFFSET_PARSE_OFFSET UNITYSDK_OFFSET(0x1867BBF0)
#define SYSTEM_DATETIMEOFFSET_SUBTRACT_1_OFFSET UNITYSDK_OFFSET(0x3835BF0)
#define SYSTEM_DATETIMEOFFSET_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x3835BD0)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x3835A50)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET UNITYSDK_OFFSET(0x3835B20)
#define SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET UNITYSDK_OFFSET(0x3835B30)
#define SYSTEM_DATETIMEOFFSET_TOFILETIME_OFFSET UNITYSDK_OFFSET(0x3835C10)
#define SYSTEM_DATETIMEOFFSET_TOLOCALTIME_1_OFFSET UNITYSDK_OFFSET(0x3835DC0)
#define SYSTEM_DATETIMEOFFSET_TOLOCALTIME_OFFSET UNITYSDK_OFFSET(0x3835D20)
#define SYSTEM_DATETIMEOFFSET_TOOFFSET_OFFSET UNITYSDK_OFFSET(0x38350C0)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x3835EB0)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x3835F10)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_3_OFFSET UNITYSDK_OFFSET(0x3835F70)
#define SYSTEM_DATETIMEOFFSET_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3835E60)
#define SYSTEM_DATETIMEOFFSET_TOUNIVERSALTIME_OFFSET UNITYSDK_OFFSET(0x3835FD0)
#define SYSTEM_DATETIMEOFFSET_TOUNIXTIMEMILLISECONDS_OFFSET UNITYSDK_OFFSET(0x3835CA0)
#define SYSTEM_DATETIMEOFFSET_TOUNIXTIMESECONDS_OFFSET UNITYSDK_OFFSET(0x3835C20)
#define SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_1_OFFSET UNITYSDK_OFFSET(0x1867D3C0)
#define SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_OFFSET UNITYSDK_OFFSET(0x1867D070)
#define SYSTEM_DATETIMEOFFSET_TRYPARSE_1_OFFSET UNITYSDK_OFFSET(0x1867CEC0)
#define SYSTEM_DATETIMEOFFSET_TRYPARSE_OFFSET UNITYSDK_OFFSET(0x1867CCA0)
#define SYSTEM_DATETIMEOFFSET_VALIDATEDATE_OFFSET UNITYSDK_OFFSET(0x18679AD0)
#define SYSTEM_DATETIMEOFFSET_VALIDATEOFFSET_OFFSET UNITYSDK_OFFSET(0x186799E0)
#define SYSTEM_DATETIMEOFFSET_VALIDATESTYLES_OFFSET UNITYSDK_OFFSET(0x1867BEE0)
#define SYSTEM_DATETIMEOFFSET__CCTOR_OFFSET UNITYSDK_OFFSET(0x1867DCD0)
#define SYSTEM_DATETIMEOFFSET__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3834FE0)
#define SYSTEM_DATETIMEOFFSET__CTOR_2_OFFSET UNITYSDK_OFFSET(0x3834FF0)
#define SYSTEM_DATETIMEOFFSET__CTOR_3_OFFSET UNITYSDK_OFFSET(0x3835000)
#define SYSTEM_DATETIMEOFFSET__CTOR_4_OFFSET UNITYSDK_OFFSET(0x3835010)
#define SYSTEM_DATETIMEOFFSET__CTOR_5_OFFSET UNITYSDK_OFFSET(0x3835020)
#define SYSTEM_DATETIMEOFFSET__CTOR_6_OFFSET UNITYSDK_OFFSET(0x3835B40)
#define SYSTEM_DATETIMEOFFSET__CTOR_OFFSET UNITYSDK_OFFSET(0x3834FD0)

namespace System
{
	inline static constexpr unsigned int DateTimeOffset_TypeDefinitionIndex = 225;

	struct alignas(8) DateTimeOffset
	{
		static ::System::DateTimeOffset* StaticGet_MaxValue()
		{
			return (::System::DateTimeOffset*)Il2CppClass::FromTypeDefinitionIndex(DateTimeOffset_TypeDefinitionIndex)->GetStaticField(0x2A60);
		}
		static ::System::DateTimeOffset* StaticGet_MinValue()
		{
			return (::System::DateTimeOffset*)Il2CppClass::FromTypeDefinitionIndex(DateTimeOffset_TypeDefinitionIndex)->GetStaticField(0x2A70);
		}
		// static const ::System::Int64 MaxOffset = 0x7558BDB000; // 0x0
		// static const ::System::Int64 MinOffset = 0xFFFFFF8AA7425000; // 0x0
		// static const ::System::Int64 UnixEpochTicks = 0x89F7FF5F7B58000; // 0x0
		// static const ::System::Int64 UnixEpochSeconds = 0xE7791F700; // 0x0
		// static const ::System::Int64 UnixEpochMilliseconds = 0x3883122CD800; // 0x0
		::System::DateTime m_dateTime; // 0x10
		::System::Int16 m_offsetMinutes; // 0x18

		/*
		::System::Void _ctor(::System::Int64 a1, ::System::TimeSpan a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_OFFSET))(this, a1, a2);
		}
		*/

		::System::Void _ctor_1(::System::DateTime a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_1_OFFSET))(this, a1);
		}

		/*
		::System::Void _ctor_2(::System::DateTime a1, ::System::TimeSpan a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_2_OFFSET))(this, a1, a2);
		}
		*/

		/*
		::System::Void _ctor_3(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::TimeSpan a7)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_3_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}
		*/

		/*
		::System::Void _ctor_4(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::TimeSpan a8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_4_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}
		*/

		/*
		::System::Void _ctor_5(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Globalization::Calendar* a8, ::System::TimeSpan a9)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Globalization::Calendar*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_5_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}
		*/

		/*
		::System::Void _ctor_6(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET__CTOR_6_OFFSET))(this, a1, a2);
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
		::System::DateTimeOffset ToOffset(::System::TimeSpan a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOOFFSET_OFFSET))(this, a1);
		}
		*/

		::System::DateTime get_ClockDateTime()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_CLOCKDATETIME_OFFSET))(this);
		}

		::System::DateTime get_Date()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DATE_OFFSET))(this);
		}

		::System::Int32 get_Day()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DAY_OFFSET))(this);
		}

		::System::DayOfWeek get_DayOfWeek()
		{
			return ((::System::DayOfWeek(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DAYOFWEEK_OFFSET))(this);
		}

		::System::Int32 get_DayOfYear()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GET_DAYOFYEAR_OFFSET))(this);
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
		::System::DateTimeOffset Add(::System::TimeSpan a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADD_OFFSET))(this, a1);
		}
		*/

		::System::DateTimeOffset AddDays(::System::Double a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDDAYS_OFFSET))(this, a1);
		}

		::System::DateTimeOffset AddHours(::System::Double a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDHOURS_OFFSET))(this, a1);
		}

		::System::DateTimeOffset AddMilliseconds(::System::Double a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDMILLISECONDS_OFFSET))(this, a1);
		}

		::System::DateTimeOffset AddMinutes(::System::Double a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDMINUTES_OFFSET))(this, a1);
		}

		::System::DateTimeOffset AddMonths(::System::Int32 a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDMONTHS_OFFSET))(this, a1);
		}

		::System::DateTimeOffset AddSeconds(::System::Double a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDSECONDS_OFFSET))(this, a1);
		}

		::System::DateTimeOffset AddTicks(::System::Int64 a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDTICKS_OFFSET))(this, a1);
		}

		::System::DateTimeOffset AddYears(::System::Int32 a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_ADDYEARS_OFFSET))(this, a1);
		}

		static ::System::Int32 Compare(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Int32(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_COMPARE_OFFSET))(a1, a2);
		}

		::System::Int32 System_IComparable_CompareTo(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_ICOMPARABLE_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo(::System::DateTimeOffset a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_COMPARETO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::DateTimeOffset a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Boolean EqualsExact(::System::DateTimeOffset a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALSEXACT_OFFSET))(this, a1);
		}

		static ::System::Boolean Equals_2(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_EQUALS_2_OFFSET))(a1, a2);
		}

		static ::System::DateTimeOffset FromFileTime(::System::Int64 a1)
		{
			return ((::System::DateTimeOffset(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_FROMFILETIME_OFFSET))(a1);
		}

		static ::System::DateTimeOffset FromUnixTimeSeconds(::System::Int64 a1)
		{
			return ((::System::DateTimeOffset(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_FROMUNIXTIMESECONDS_OFFSET))(a1);
		}

		static ::System::DateTimeOffset FromUnixTimeMilliseconds(::System::Int64 a1)
		{
			return ((::System::DateTimeOffset(*)(::System::Int64))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_FROMUNIXTIMEMILLISECONDS_OFFSET))(a1);
		}

		::System::Void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_IDESERIALIZATIONCALLBACK_ONDESERIALIZATION_OFFSET))(this, a1);
		}

		/*
		::System::Void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* a1, ::System::Runtime::Serialization::StreamingContext a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SYSTEM_RUNTIME_SERIALIZATION_ISERIALIZABLE_GETOBJECTDATA_OFFSET))(this, a1, a2);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_GETHASHCODE_OFFSET))(this);
		}

		static ::System::DateTimeOffset Parse(::System::String* a1)
		{
			return ((::System::DateTimeOffset(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSE_OFFSET))(a1);
		}

		static ::System::DateTimeOffset Parse_1(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSE_1_OFFSET))(a1, a2);
		}

		static ::System::DateTimeOffset Parse_2(::System::String* a1, ::System::IFormatProvider* a2, ::System::Globalization::DateTimeStyles a3)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSE_2_OFFSET))(a1, a2, a3);
		}

		static ::System::DateTimeOffset ParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSEEXACT_OFFSET))(a1, a2, a3);
		}

		static ::System::DateTimeOffset ParseExact_1(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSEEXACT_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::DateTimeOffset ParseExact_2(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4)
		{
			return ((::System::DateTimeOffset(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_PARSEEXACT_2_OFFSET))(a1, a2, a3, a4);
		}

		/*
		::System::TimeSpan Subtract(::System::DateTimeOffset a1)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SUBTRACT_OFFSET))(this, a1);
		}
		*/

		/*
		::System::DateTimeOffset Subtract_1(::System::TimeSpan a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_SUBTRACT_1_OFFSET))(this, a1);
		}
		*/

		::System::Int64 ToFileTime()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOFILETIME_OFFSET))(this);
		}

		::System::Int64 ToUnixTimeSeconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIXTIMESECONDS_OFFSET))(this);
		}

		::System::Int64 ToUnixTimeMilliseconds()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIXTIMEMILLISECONDS_OFFSET))(this);
		}

		::System::DateTimeOffset ToLocalTime()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOLOCALTIME_OFFSET))(this);
		}

		::System::DateTimeOffset ToLocalTime_1(::System::Boolean a1)
		{
			return ((::System::DateTimeOffset(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOLOCALTIME_1_OFFSET))(this, a1);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_1_OFFSET))(this, a1);
		}

		::System::String* ToString_2(::System::IFormatProvider* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_2_OFFSET))(this, a1);
		}

		::System::String* ToString_3(::System::String* a1, ::System::IFormatProvider* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::IFormatProvider*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOSTRING_3_OFFSET))(this, a1, a2);
		}

		::System::DateTimeOffset ToUniversalTime()
		{
			return ((::System::DateTimeOffset(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TOUNIVERSALTIME_OFFSET))(this);
		}

		static ::System::Boolean TryParse(::System::String* a1, ::System::DateTimeOffset& a2)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSE_OFFSET))(a1, a2);
		}

		static ::System::Boolean TryParse_1(::System::String* a1, ::System::IFormatProvider* a2, ::System::Globalization::DateTimeStyles a3, ::System::DateTimeOffset& a4)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSE_1_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean TryParseExact(::System::String* a1, ::System::String* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTimeOffset& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::String*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean TryParseExact_1(::System::String* a1, ::Il2CppArray<::System::String*>* a2, ::System::IFormatProvider* a3, ::System::Globalization::DateTimeStyles a4, ::System::DateTimeOffset& a5)
		{
			return ((::System::Boolean(*)(::System::String*, ::Il2CppArray<::System::String*>*, ::System::IFormatProvider*, ::System::Globalization::DateTimeStyles, ::System::DateTimeOffset&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_TRYPARSEEXACT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		/*
		static ::System::Int16 ValidateOffset(::System::TimeSpan a1)
		{
			return ((::System::Int16(*)(::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATEOFFSET_OFFSET))(a1);
		}
		*/

		/*
		static ::System::DateTime ValidateDate(::System::DateTime a1, ::System::TimeSpan a2)
		{
			return ((::System::DateTime(*)(::System::DateTime, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATEDATE_OFFSET))(a1, a2);
		}
		*/

		static ::System::Globalization::DateTimeStyles ValidateStyles(::System::Globalization::DateTimeStyles a1, ::System::String* a2)
		{
			return ((::System::Globalization::DateTimeStyles(*)(::System::Globalization::DateTimeStyles, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_VALIDATESTYLES_OFFSET))(a1, a2);
		}

		static ::System::DateTimeOffset op_Implicit(::System::DateTime a1)
		{
			return ((::System::DateTimeOffset(*)(::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_IMPLICIT_OFFSET))(a1);
		}

		/*
		static ::System::DateTimeOffset op_Addition(::System::DateTimeOffset a1, ::System::TimeSpan a2)
		{
			return ((::System::DateTimeOffset(*)(::System::DateTimeOffset, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_ADDITION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::DateTimeOffset op_Subtraction(::System::DateTimeOffset a1, ::System::TimeSpan a2)
		{
			return ((::System::DateTimeOffset(*)(::System::DateTimeOffset, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_SUBTRACTION_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::TimeSpan op_Subtraction_1(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::TimeSpan(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_SUBTRACTION_1_OFFSET))(a1, a2);
		}
		*/

		static ::System::Boolean op_Equality(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::System::DateTimeOffset a1, ::System::DateTimeOffset a2)
		{
			return ((::System::Boolean(*)(::System::DateTimeOffset, ::System::DateTimeOffset))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEOFFSET_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}
	};
}
