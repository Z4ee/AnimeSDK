#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeParse_TM.h"
#include "unitysdk/System/ValueType.h"

namespace System { class DateTimeParse_MatchNumberDelegate; }
namespace System::Globalization { class Calendar; }

#define SYSTEM_PARSINGINFO_INIT_OFFSET UNITYSDK_OFFSET(0x9A4250)

namespace System
{
	inline static constexpr unsigned int ParsingInfo_TypeDefinitionIndex = 253;

	struct alignas(8) ParsingInfo
	{
		::System::Globalization::Calendar* calendar; // 0x10
		::System::Int32 dayOfWeek; // 0x18
		::System::DateTimeParse_TM timeMark; // 0x1C
		::System::Boolean fUseHour12; // 0x20
		::System::Boolean fUseTwoDigitYear; // 0x21
		::System::Boolean fAllowInnerWhite; // 0x22
		::System::Boolean fAllowTrailingWhite; // 0x23
		::System::Boolean fCustomNumberParser; // 0x24
		::System::DateTimeParse_MatchNumberDelegate* parseNumberDelegate; // 0x28

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_PARSINGINFO_INIT_OFFSET))(this);
		}
	};
}
