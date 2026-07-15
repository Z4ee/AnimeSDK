#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int WebHeaderCollection_RfcChar_TypeDefinitionIndex = 2757;

	enum class WebHeaderCollection_RfcChar : ::System::Byte
	{
		High = 0x0,
		Reg = 0x1,
		Ctl = 0x2,
		CR = 0x3,
		LF = 0x4,
		WS = 0x5,
		Colon = 0x6,
		Delim = 0x7,
	};
}
