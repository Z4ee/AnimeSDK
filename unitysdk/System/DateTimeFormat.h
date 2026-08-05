#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Globalization { class DateTimeFormatInfo; }
namespace System::Text { class StringBuilder; }

#define SYSTEM_DATETIMEFORMAT_EXPANDPREDEFINEDFORMAT_OFFSET UNITYSDK_OFFSET(0x1D8064F0)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDROUNDRIPTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1D805E00)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZEDTIMEZONE_OFFSET UNITYSDK_OFFSET(0x1D805A10)
#define SYSTEM_DATETIMEFORMAT_FORMATCUSTOMIZED_OFFSET UNITYSDK_OFFSET(0x1D804740)
#define SYSTEM_DATETIMEFORMAT_FORMATDAYOFWEEK_OFFSET UNITYSDK_OFFSET(0x1D803F90)
#define SYSTEM_DATETIMEFORMAT_FORMATDIGITS_1_OFFSET UNITYSDK_OFFSET(0x1D803CF0)
#define SYSTEM_DATETIMEFORMAT_FORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x1D803CE0)
#define SYSTEM_DATETIMEFORMAT_FORMATHEBREWMONTHNAME_OFFSET UNITYSDK_OFFSET(0x1D804010)
#define SYSTEM_DATETIMEFORMAT_FORMATMONTH_OFFSET UNITYSDK_OFFSET(0x1D803FD0)
#define SYSTEM_DATETIMEFORMAT_FORMAT_1_OFFSET UNITYSDK_OFFSET(0x1D8068A0)
#define SYSTEM_DATETIMEFORMAT_FORMAT_OFFSET UNITYSDK_OFFSET(0x1D806890)
#define SYSTEM_DATETIMEFORMAT_GETREALFORMAT_OFFSET UNITYSDK_OFFSET(0x1D806100)
#define SYSTEM_DATETIMEFORMAT_HEBREWFORMATDIGITS_OFFSET UNITYSDK_OFFSET(0x1D803E60)
#define SYSTEM_DATETIMEFORMAT_ISUSEGENITIVEFORM_OFFSET UNITYSDK_OFFSET(0x1D804460)
#define SYSTEM_DATETIMEFORMAT_PARSENEXTCHAR_OFFSET UNITYSDK_OFFSET(0x1D8043D0)
#define SYSTEM_DATETIMEFORMAT_PARSEQUOTESTRING_OFFSET UNITYSDK_OFFSET(0x1D8040C0)
#define SYSTEM_DATETIMEFORMAT_PARSEREPEATPATTERN_OFFSET UNITYSDK_OFFSET(0x1D803EE0)
#define SYSTEM_DATETIMEFORMAT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D806A30)

namespace System
{
	inline static constexpr unsigned int DateTimeFormat_TypeDefinitionIndex = 239;

	class DateTimeFormat : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_fixedNumberFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0xB20);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_allStandardFormats()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0xB28);
		}
		static ::System::TimeSpan* StaticGet_NullOffset()
		{
			return (::System::TimeSpan*)Il2CppClass::FromTypeDefinitionIndex(DateTimeFormat_TypeDefinitionIndex)->GetStaticField(0x260);
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
	};
}
