#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X500DistinguishedNameFlags_TypeDefinitionIndex = 3171;

	enum class X500DistinguishedNameFlags : ::System::Int32
	{
		None = 0,
		Reversed = 1,
		UseSemicolons = 16,
		DoNotUsePlusSign = 32,
		DoNotUseQuotes = 64,
		UseCommas = 128,
		UseNewLines = 256,
		UseUTF8Encoding = 4096,
		UseT61Encoding = 8192,
		ForceUTF8Encoding = 16384,
	};
}
