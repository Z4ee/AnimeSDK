#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Globalization { class DateTimeFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DATETIMEFORMAT_EXPANDPREDEFINEDFORMAT_OFFSET UNITYSDK_OFFSET(0x16292E20)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDROUNDRIPTIMEZONE_OFFSET UNITYSDK_OFFSET(0x162926C0)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDTIMEZONE_OFFSET UNITYSDK_OFFSET(0x16292320)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZED_OFFSET UNITYSDK_OFFSET(0x162910D0)
#define SYSTEM_DATETIMEFORMAT_FORMATDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x16290B70)
#define SYSTEM_DATETIMEFORMAT_FORMATDIGITS_1_OFFSET UNITYSDK_OFFSET(0x16290910)
#define SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x16290900)
#define SYSTEM_DATETIMEFORMAT_FORMATHEBREWMONTHNAME_OFFSET UNITYSDK_OFFSET(0x16290BF0)
#define SYSTEM_DATETIMEFORMAT_FORMATMONTH_OFFSET UNITYSDK_OFFSET(0x16290BB0)
#define SYSTEM_DATETIMEFORMAT_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x16293340)
#define SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x1628F270)
#define SYSTEM_DATETIMEFORMAT_GETALLDATETIMES_1_OFFSET UNITYSDK_OFFSET(0x1628FE40)
#define SYSTEM_DATETIMEFORMAT_GETALLDATETIMES_OFFSET UNITYSDK_OFFSET(0x16290200)
#define SYSTEM_DATETIMEFORMAT_GETREALFORMAT_OFFSET UNITYSDK_OFFSET(0x16292950)
#define SYSTEM_DATETIMEFORMAT_HEBREWFORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x16290A80)
#define SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORLOCAL_OFFSET UNITYSDK_OFFSET(0x16293330)
#define SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORUTC_OFFSET UNITYSDK_OFFSET(0x16292940)
#define SYSTEM_DATETIMEFORMAT_ISUSEGENITIVEFORM_OFFSET UNITYSDK_OFFSET(0x16290F00)
#define SYSTEM_DATETIMEFORMAT_PARSENEXTCHAR_OFFSET UNITYSDK_OFFSET(0x16290EA0)
#define SYSTEM_DATETIMEFORMAT_PARSEQUOTESTRING_OFFSET UNITYSDK_OFFSET(0x16290CA0)
#define SYSTEM_DATETIMEFORMAT_PARSEREPEATPATTERN_OFFSET UNITYSDK_OFFSET(0x16290B00)
#define SYSTEM_DATETIMEFORMAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x162934A0)

namespace System
{
	inline static constexpr unsigned int DateTimeFormat_TypeDefinitionIndex = 252;

	class DateTimeFormat : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fixedNumberFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0x2290);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_allStandardFormats()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0x2298);
		}
		static ::System::TimeSpan* StaticGet_NullOffset()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0x2520);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT__CCTOR_OFFSET))();
		}

		static ::System::Void FormatDigits(::System::Text::StringBuilder* outputBuffer, ::System::Int32 value, ::System::Int32 len)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET))(outputBuffer, value, len);
		}

		static ::System::Void FormatDigits_1(::System::Text::StringBuilder* outputBuffer, ::System::Int32 value, ::System::Int32 len, ::System::Boolean overrideLengthLimit)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDIGITS_1_OFFSET))(outputBuffer, value, len, overrideLengthLimit);
		}

		static ::System::Void HebrewFormatDigits(::System::Text::StringBuilder* outputBuffer, ::System::Int32 digits)
		{
			return ((::System::Void(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_HEBREWFORMATDIGITS_OFFSET))(outputBuffer, digits);
		}

		static ::System::Int32 ParseRepeatPattern(::System::String* format, ::System::Int32 pos, ::System::Char patternChar)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSEREPEATPATTERN_OFFSET))(format, pos, patternChar);
		}

		static ::System::String* FormatDayOfWeek(::System::Int32 dayOfWeek, ::System::Int32 repeat, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATDAYOFWEEK_OFFSET))(dayOfWeek, repeat, dtfi);
		}

		static ::System::String* FormatMonth(::System::Int32 month, ::System::Int32 repeatCount, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::String*(*)(::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATMONTH_OFFSET))(month, repeatCount, dtfi);
		}

		static ::System::String* FormatHebrewMonthName(::System::DateTime time, ::System::Int32 month, ::System::Int32 repeatCount, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::Int32, ::System::Int32, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATHEBREWMONTHNAME_OFFSET))(time, month, repeatCount, dtfi);
		}

		static ::System::Int32 ParseQuoteString(::System::String* format, ::System::Int32 pos, ::System::Text::StringBuilder* result)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSEQUOTESTRING_OFFSET))(format, pos, result);
		}

		static ::System::Int32 ParseNextChar(::System::String* format, ::System::Int32 pos)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_PARSENEXTCHAR_OFFSET))(format, pos);
		}

		static ::System::Boolean IsUseGenitiveForm(::System::String* format, ::System::Int32 index, ::System::Int32 tokenLen, ::System::Char patternToMatch)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_ISUSEGENITIVEFORM_OFFSET))(format, index, tokenLen, patternToMatch);
		}

		static ::System::String* FormatCustomized(::System::DateTime dateTime, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::TimeSpan offset)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZED_OFFSET))(dateTime, format, dtfi, offset);
		}

		static ::System::Void FormatCustomizedTimeZone(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::String* format, ::System::Int32 tokenLen, ::System::Boolean timeOnly, ::System::Text::StringBuilder* result)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::TimeSpan, ::System::String*, ::System::Int32, ::System::Boolean, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDTIMEZONE_OFFSET))(dateTime, offset, format, tokenLen, timeOnly, result);
		}

		static ::System::Void FormatCustomizedRoundripTimeZone(::System::DateTime dateTime, ::System::TimeSpan offset, ::System::Text::StringBuilder* result)
		{
			return ((::System::Void(*)(::System::DateTime, ::System::TimeSpan, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDROUNDRIPTIMEZONE_OFFSET))(dateTime, offset, result);
		}

		static ::System::String* GetRealFormat(::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::String*(*)(::System::String*, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_GETREALFORMAT_OFFSET))(format, dtfi);
		}

		static ::System::String* ExpandPredefinedFormat(::System::String* format, ::System::DateTime& dateTime, ::System::Globalization::DateTimeFormatInfo*& dtfi, ::System::TimeSpan& offset)
		{
			return ((::System::String*(*)(::System::String*, ::System::DateTime&, ::System::Globalization::DateTimeFormatInfo*&, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_EXPANDPREDEFINEDFORMAT_OFFSET))(format, dateTime, dtfi, offset);
		}

		static ::System::String* Format(::System::DateTime dateTime, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET))(dateTime, format, dtfi);
		}

		static ::System::String* Format_1(::System::DateTime dateTime, ::System::String* format, ::System::Globalization::DateTimeFormatInfo* dtfi, ::System::TimeSpan offset)
		{
			return ((::System::String*(*)(::System::DateTime, ::System::String*, ::System::Globalization::DateTimeFormatInfo*, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_FORMAT_1_OFFSET))(dateTime, format, dtfi, offset);
		}

		static ::Il2CppArray<::System::String*>* GetAllDateTimes(::System::DateTime dateTime, ::System::Char format, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::DateTime, ::System::Char, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_GETALLDATETIMES_OFFSET))(dateTime, format, dtfi);
		}

		static ::Il2CppArray<::System::String*>* GetAllDateTimes_1(::System::DateTime dateTime, ::System::Globalization::DateTimeFormatInfo* dtfi)
		{
			return ((::Il2CppArray<::System::String*>*(*)(::System::DateTime, ::System::Globalization::DateTimeFormatInfo*))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_GETALLDATETIMES_1_OFFSET))(dateTime, dtfi);
		}

		static ::System::Void InvalidFormatForLocal(::System::String* format, ::System::DateTime dateTime)
		{
			return ((::System::Void(*)(::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORLOCAL_OFFSET))(format, dateTime);
		}

		static ::System::Void InvalidFormatForUtc(::System::String* format, ::System::DateTime dateTime)
		{
			return ((::System::Void(*)(::System::String*, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_DATETIMEFORMAT_INVALIDFORMATFORUTC_OFFSET))(format, dateTime);
		}
	};
}
