#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Net/WebParseErrorCode.h"
#include "unitysdk/System/Net/WebParseErrorSection.h"
#include "unitysdk/System/ValueType.h"

namespace System::Net
{
	inline static constexpr unsigned int WebParseError_TypeDefinitionIndex = 3370;

	struct alignas(4) WebParseError
	{
		::System::Net::WebParseErrorSection Section; // 0x10
		::System::Net::WebParseErrorCode Code; // 0x14
	};
}
