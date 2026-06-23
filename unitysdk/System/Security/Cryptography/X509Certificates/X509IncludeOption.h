#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509IncludeOption_TypeDefinitionIndex = 3174;

	enum class X509IncludeOption : ::System::Int32
	{
		None = 0,
		ExcludeRoot = 1,
		EndCertOnly = 2,
		WholeChain = 3,
	};
}
