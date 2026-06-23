#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int OSX509Certificates_SecTrustResult_TypeDefinitionIndex = 3183;

	enum class OSX509Certificates_SecTrustResult : ::System::Int32
	{
		Invalid = 0,
		Proceed = 1,
		Confirm = 2,
		Deny = 3,
		Unspecified = 4,
		RecoverableTrustFailure = 5,
		FatalTrustFailure = 6,
		ResultOtherError = 7,
	};
}
