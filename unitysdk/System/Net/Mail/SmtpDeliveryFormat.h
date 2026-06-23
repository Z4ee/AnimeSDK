#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpDeliveryFormat_TypeDefinitionIndex = 3601;

	enum class SmtpDeliveryFormat : ::System::Int32
	{
		SevenBit = 0,
		International = 1,
	};
}
