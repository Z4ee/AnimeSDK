#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509RevocationFlag_TypeDefinitionIndex = 2677;

	enum class X509RevocationFlag : ::System::Int32
	{
		EndCertificateOnly = 0,
		EntireChain = 1,
		ExcludeRoot = 2,
	};
}
