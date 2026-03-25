#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeParse_DTT.h"
#include "unitysdk/System/TokenType.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int DateTimeToken_TypeDefinitionIndex = 261;

	struct alignas(4) DateTimeToken
	{
		::System::DateTimeParse_DTT dtt; // 0x10
		::System::TokenType suffix; // 0x14
		::System::Int32 num; // 0x18
	};
}
