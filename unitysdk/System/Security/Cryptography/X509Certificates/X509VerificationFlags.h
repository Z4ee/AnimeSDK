#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509VerificationFlags_TypeDefinitionIndex = 2680;

	enum class X509VerificationFlags : ::System::Int32
	{
		NoFlag = 0,
		IgnoreNotTimeValid = 1,
		IgnoreCtlNotTimeValid = 2,
		IgnoreNotTimeNested = 4,
		IgnoreInvalidBasicConstraints = 8,
		AllowUnknownCertificateAuthority = 16,
		IgnoreWrongUsage = 32,
		IgnoreInvalidName = 64,
		IgnoreInvalidPolicy = 128,
		IgnoreEndRevocationUnknown = 256,
		IgnoreCtlSignerRevocationUnknown = 512,
		IgnoreCertificateAuthorityRevocationUnknown = 1024,
		IgnoreRootRevocationUnknown = 2048,
		AllFlags = 4095,
	};
}
