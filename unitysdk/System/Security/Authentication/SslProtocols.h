#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Authentication
{
	inline static constexpr unsigned int SslProtocols_TypeDefinitionIndex = 2662;

	enum class SslProtocols : ::System::Int32
	{
		None = 0,
		Ssl2 = 12,
		Ssl3 = 48,
		Tls = 192,
		Tls11 = 768,
		Tls12 = 3072,
		Default = 240,
	};
}
