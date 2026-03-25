#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Globalization
{
	inline static constexpr unsigned int CalendarId_TypeDefinitionIndex = 743;

	enum class CalendarId : ::System::UInt16
	{
		GREGORIAN = 0x1,
		GREGORIAN_US = 0x2,
		JAPAN = 0x3,
		TAIWAN = 0x4,
		KOREA = 0x5,
		HIJRI = 0x6,
		THAI = 0x7,
		HEBREW = 0x8,
		GREGORIAN_ME_FRENCH = 0x9,
		GREGORIAN_ARABIC = 0xA,
		GREGORIAN_XLIT_ENGLISH = 0xB,
		GREGORIAN_XLIT_FRENCH = 0xC,
		JULIAN = 0xD,
		JAPANESELUNISOLAR = 0xE,
		CHINESELUNISOLAR = 0xF,
		SAKA = 0x10,
		LUNAR_ETO_CHN = 0x11,
		LUNAR_ETO_KOR = 0x12,
		LUNAR_ETO_ROKUYOU = 0x13,
		KOREANLUNISOLAR = 0x14,
		TAIWANLUNISOLAR = 0x15,
		PERSIAN = 0x16,
		UMALQURA = 0x17,
		LAST_CALENDAR = 0x17,
	};
}
