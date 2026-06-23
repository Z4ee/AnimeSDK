#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mime
{
	inline static constexpr unsigned int TransferEncoding_TypeDefinitionIndex = 3634;

	enum class TransferEncoding : ::System::Int32
	{
		QuotedPrintable = 0,
		Base64 = 1,
		SevenBit = 2,
		EightBit = 3,
		Unknown = -1,
	};
}
