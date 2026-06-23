#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define SYSTEM_NET_HTTPDATEPARSE_MAKE_UPPER_OFFSET UNITYSDK_OFFSET(0x1C49BCA0)
#define SYSTEM_NET_HTTPDATEPARSE_MAPDAYMONTHTODWORD_OFFSET UNITYSDK_OFFSET(0x1C49BCC0)
#define SYSTEM_NET_HTTPDATEPARSE_PARSEHTTPDATE_OFFSET UNITYSDK_OFFSET(0x1C49C060)

namespace System::Net
{
	inline static constexpr unsigned int HttpDateParse_TypeDefinitionIndex = 3371;

	class HttpDateParse : public ::System::Object
	{
	public:
		// static const ::System::Int32 BASE_DEC = 0xA; // 0x0
		// static const ::System::Int32 DATE_INDEX_DAY_OF_WEEK = 0x0; // 0x0
		// static const ::System::Int32 DATE_1123_INDEX_DAY = 0x1; // 0x0
		// static const ::System::Int32 DATE_1123_INDEX_MONTH = 0x2; // 0x0
		// static const ::System::Int32 DATE_1123_INDEX_YEAR = 0x3; // 0x0
		// static const ::System::Int32 DATE_1123_INDEX_HRS = 0x4; // 0x0
		// static const ::System::Int32 DATE_1123_INDEX_MINS = 0x5; // 0x0
		// static const ::System::Int32 DATE_1123_INDEX_SECS = 0x6; // 0x0
		// static const ::System::Int32 DATE_ANSI_INDEX_MONTH = 0x1; // 0x0
		// static const ::System::Int32 DATE_ANSI_INDEX_DAY = 0x2; // 0x0
		// static const ::System::Int32 DATE_ANSI_INDEX_HRS = 0x3; // 0x0
		// static const ::System::Int32 DATE_ANSI_INDEX_MINS = 0x4; // 0x0
		// static const ::System::Int32 DATE_ANSI_INDEX_SECS = 0x5; // 0x0
		// static const ::System::Int32 DATE_ANSI_INDEX_YEAR = 0x6; // 0x0
		// static const ::System::Int32 DATE_INDEX_TZ = 0x7; // 0x0
		// static const ::System::Int32 DATE_INDEX_LAST = 0x7; // 0x0
		// static const ::System::Int32 MAX_FIELD_DATE_ENTRIES = 0x8; // 0x0
		// static const ::System::Int32 DATE_TOKEN_JANUARY = 0x1; // 0x0
		// static const ::System::Int32 DATE_TOKEN_FEBRUARY = 0x2; // 0x0
		// static const ::System::Int32 DATE_TOKEN_Microsoft = 0x3; // 0x0
		// static const ::System::Int32 DATE_TOKEN_APRIL = 0x4; // 0x0
		// static const ::System::Int32 DATE_TOKEN_MAY = 0x5; // 0x0
		// static const ::System::Int32 DATE_TOKEN_JUNE = 0x6; // 0x0
		// static const ::System::Int32 DATE_TOKEN_JULY = 0x7; // 0x0
		// static const ::System::Int32 DATE_TOKEN_AUGUST = 0x8; // 0x0
		// static const ::System::Int32 DATE_TOKEN_SEPTEMBER = 0x9; // 0x0
		// static const ::System::Int32 DATE_TOKEN_OCTOBER = 0xA; // 0x0
		// static const ::System::Int32 DATE_TOKEN_NOVEMBER = 0xB; // 0x0
		// static const ::System::Int32 DATE_TOKEN_DECEMBER = 0xC; // 0x0
		// static const ::System::Int32 DATE_TOKEN_LAST_MONTH = 0xD; // 0x0
		// static const ::System::Int32 DATE_TOKEN_SUNDAY = 0x0; // 0x0
		// static const ::System::Int32 DATE_TOKEN_MONDAY = 0x1; // 0x0
		// static const ::System::Int32 DATE_TOKEN_TUESDAY = 0x2; // 0x0
		// static const ::System::Int32 DATE_TOKEN_WEDNESDAY = 0x3; // 0x0
		// static const ::System::Int32 DATE_TOKEN_THURSDAY = 0x4; // 0x0
		// static const ::System::Int32 DATE_TOKEN_FRIDAY = 0x5; // 0x0
		// static const ::System::Int32 DATE_TOKEN_SATURDAY = 0x6; // 0x0
		// static const ::System::Int32 DATE_TOKEN_LAST_DAY = 0x7; // 0x0
		// static const ::System::Int32 DATE_TOKEN_GMT = 0xFFFFFC18; // 0x0
		// static const ::System::Int32 DATE_TOKEN_LAST = 0xFFFFFC18; // 0x0
		// static const ::System::Int32 DATE_TOKEN_ERROR = 0xFFFFFC19; // 0x0

		static ::System::Char MAKE_UPPER(::System::Char c)
		{
			return ((::System::Char(*)(::System::Char))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPDATEPARSE_MAKE_UPPER_OFFSET))(c);
		}

		static ::System::Int32 MapDayMonthToDword(::Il2CppArray<::System::Char>* lpszDay, ::System::Int32 index)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Char>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPDATEPARSE_MAPDAYMONTHTODWORD_OFFSET))(lpszDay, index);
		}

		static ::System::Boolean ParseHttpDate(::System::String* DateString, ::System::DateTime& dtOut)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::DateTime&))((::PBYTE)hIl2Cpp + SYSTEM_NET_HTTPDATEPARSE_PARSEHTTPDATE_OFFSET))(DateString, dtOut);
		}
	};
}
