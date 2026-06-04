#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Globalization
{
	inline static constexpr unsigned int CultureInfo_Data_TypeDefinitionIndex = 788;

	struct alignas(4) CultureInfo_Data
	{
		::System::Int32 ansi; // 0x10
		::System::Int32 ebcdic; // 0x14
		::System::Int32 mac; // 0x18
		::System::Int32 oem; // 0x1C
		::System::Boolean right_to_left; // 0x20
		::System::Byte list_sep; // 0x21
	};
}
