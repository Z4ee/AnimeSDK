#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net::Security
{
	inline static constexpr unsigned int SslPolicyErrors_TypeDefinitionIndex = 2925;

	enum class SslPolicyErrors : ::System::Int32
	{
		None = 0,
		RemoteCertificateNotAvailable = 1,
		RemoteCertificateNameMismatch = 2,
		RemoteCertificateChainErrors = 4,
	};
}
