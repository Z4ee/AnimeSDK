#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/TimeSpan.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }

#define SYSTEM_NET_MIME_SMTPDATETIME_FORMATDATE_OFFSET UNITYSDK_OFFSET(0x1DAC7ED0)
#define SYSTEM_NET_MIME_SMTPDATETIME_GET_DATE_OFFSET UNITYSDK_OFFSET(0x1DAC7B50)
#define SYSTEM_NET_MIME_SMTPDATETIME_INITIALIZESHORTHANDLOOKUPS_OFFSET UNITYSDK_OFFSET(0x1DAC6BB0)
#define SYSTEM_NET_MIME_SMTPDATETIME_PARSEVALUE_OFFSET UNITYSDK_OFFSET(0x1DAC7420)
#define SYSTEM_NET_MIME_SMTPDATETIME_TIMESPANTOOFFSET_OFFSET UNITYSDK_OFFSET(0x1DAC7F70)
#define SYSTEM_NET_MIME_SMTPDATETIME_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DAC7CB0)
#define SYSTEM_NET_MIME_SMTPDATETIME_TRYPARSETIMEZONESTRING_OFFSET UNITYSDK_OFFSET(0x1DAC7710)
#define SYSTEM_NET_MIME_SMTPDATETIME_VALIDATEANDGETSANITIZEDTIMESPAN_OFFSET UNITYSDK_OFFSET(0x1DAC71F0)
#define SYSTEM_NET_MIME_SMTPDATETIME_VALIDATEANDGETTIMEZONEOFFSETVALUES_OFFSET UNITYSDK_OFFSET(0x1DAC80B0)
#define SYSTEM_NET_MIME_SMTPDATETIME_VALIDATETIMEZONESHORTHANDVALUE_OFFSET UNITYSDK_OFFSET(0x1DAC82C0)
#define SYSTEM_NET_MIME_SMTPDATETIME__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DAC8350)
#define SYSTEM_NET_MIME_SMTPDATETIME__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DAC73E0)
#define SYSTEM_NET_MIME_SMTPDATETIME__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC70B0)

namespace System::Net::Mime
{
	inline static constexpr unsigned int SmtpDateTime_TypeDefinitionIndex = 3633;

	class SmtpDateTime : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::String*>** StaticGet_validDateTimeFormats()
		{
			return (::Il2CppArray<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SmtpDateTime_TypeDefinitionIndex)->GetStaticField(0x3500);
		}
		static ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::TimeSpan>** StaticGet_timeZoneOffsetLookup()
		{
			return (::System::Collections::Generic::IDictionary_2<::System::String*, ::System::TimeSpan>**)Il2CppClass::FromTypeDefinitionIndex(SmtpDateTime_TypeDefinitionIndex)->GetStaticField(0x3508);
		}
		static ::Il2CppArray<::System::Char>** StaticGet_allowedWhiteSpaceChars()
		{
			return (::Il2CppArray<::System::Char>**)Il2CppClass::FromTypeDefinitionIndex(SmtpDateTime_TypeDefinitionIndex)->GetStaticField(0x3510);
		}
		static ::System::Int64* StaticGet_timeSpanMaxTicks()
		{
			return (::System::Int64*)Il2CppClass::FromTypeDefinitionIndex(SmtpDateTime_TypeDefinitionIndex)->GetStaticField(0x1390);
		}
		static ::System::Int32* StaticGet_offsetMaxValue()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SmtpDateTime_TypeDefinitionIndex)->GetStaticField(0x1398);
		}
		// static const ::System::String* unknownTimeZoneDefaultOffset; // 0x0
		// static const ::System::String* utcDefaultTimeZoneOffset; // 0x0
		// static const ::System::Int32 offsetLength = 0x5; // 0x0
		// static const ::System::Int32 maxMinuteValue = 0x3B; // 0x0
		// static const ::System::String* dateFormatWithDayOfWeek; // 0x0
		// static const ::System::String* dateFormatWithoutDayOfWeek; // 0x0
		// static const ::System::String* dateFormatWithDayOfWeekAndNoSeconds; // 0x0
		// static const ::System::String* dateFormatWithoutDayOfWeekAndNoSeconds; // 0x0
		::System::Boolean unknownTimeZone; // 0x10
		::System::DateTime date; // 0x18
		::System::TimeSpan timeZone; // 0x20

		::System::Void _ctor(::System::DateTime value)
		{
			return ((::System::Void(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME__CTOR_1_OFFSET))(this, value);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME__CCTOR_OFFSET))();
		}

		static ::System::Collections::Generic::IDictionary_2<::System::String*, ::System::TimeSpan>* InitializeShortHandLookups()
		{
			return ((::System::Collections::Generic::IDictionary_2<::System::String*, ::System::TimeSpan>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_INITIALIZESHORTHANDLOOKUPS_OFFSET))();
		}

		::System::DateTime get_Date()
		{
			return ((::System::DateTime(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_GET_DATE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_TOSTRING_OFFSET))(this);
		}

		::System::Void ValidateAndGetTimeZoneOffsetValues(::System::String* offset, ::System::Boolean& positive, ::System::Int32& hours, ::System::Int32& minutes)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean&, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_VALIDATEANDGETTIMEZONEOFFSETVALUES_OFFSET))(this, offset, positive, hours, minutes);
		}

		::System::Void ValidateTimeZoneShortHandValue(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_VALIDATETIMEZONESHORTHANDVALUE_OFFSET))(this, value);
		}

		::System::String* FormatDate(::System::DateTime value)
		{
			return ((::System::String*(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_FORMATDATE_OFFSET))(this, value);
		}

		::System::DateTime ParseValue(::System::String* data, ::System::String*& timeZone)
		{
			return ((::System::DateTime(*)(::PVOID, ::System::String*, ::System::String*&))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_PARSEVALUE_OFFSET))(this, data, timeZone);
		}

		::System::Boolean TryParseTimeZoneString(::System::String* timeZoneString, ::System::TimeSpan& timeZone)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::TimeSpan&))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_TRYPARSETIMEZONESTRING_OFFSET))(this, timeZoneString, timeZone);
		}

		::System::TimeSpan ValidateAndGetSanitizedTimeSpan(::System::TimeSpan span)
		{
			return ((::System::TimeSpan(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_VALIDATEANDGETSANITIZEDTIMESPAN_OFFSET))(this, span);
		}

		::System::String* TimeSpanToOffset(::System::TimeSpan span)
		{
			return ((::System::String*(*)(::PVOID, ::System::TimeSpan))((::PBYTE)hIl2Cpp + SYSTEM_NET_MIME_SMTPDATETIME_TIMESPANTOOFFSET_OFFSET))(this, span);
		}
	};
}
