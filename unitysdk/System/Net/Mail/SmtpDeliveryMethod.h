#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpDeliveryMethod_TypeDefinitionIndex = 3602;

	enum class SmtpDeliveryMethod : ::System::Int32
	{
		Network = 0,
		SpecifiedPickupDirectory = 1,
		PickupDirectoryFromIis = 2,
	};
}
