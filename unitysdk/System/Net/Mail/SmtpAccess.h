#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Mail
{
	inline static constexpr unsigned int SmtpAccess_TypeDefinitionIndex = 3592;

	enum class SmtpAccess : ::System::Int32
	{
		None = 0,
		Connect = 1,
		ConnectToUnrestrictedPort = 2,
	};
}
