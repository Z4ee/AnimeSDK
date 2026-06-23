#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpClient_AuthMechs_TypeDefinitionIndex = 3594;

	enum class SmtpClient_AuthMechs : ::System::Int32
	{
		None = 0,
		Login = 1,
		Plain = 2,
	};
}
