#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int AuthenticationSchemes_TypeDefinitionIndex = 2718;

	enum class AuthenticationSchemes : ::System::Int32
	{
		None = 0,
		Digest = 1,
		Negotiate = 2,
		Ntlm = 4,
		Basic = 8,
		Anonymous = 32768,
		IntegratedWindowsAuthentication = 6,
	};
}
