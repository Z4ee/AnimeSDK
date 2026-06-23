#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509FindType_TypeDefinitionIndex = 3173;

	enum class X509FindType : ::System::Int32
	{
		FindByThumbprint = 0,
		FindBySubjectName = 1,
		FindBySubjectDistinguishedName = 2,
		FindByIssuerName = 3,
		FindByIssuerDistinguishedName = 4,
		FindBySerialNumber = 5,
		FindByTimeValid = 6,
		FindByTimeNotYetValid = 7,
		FindByTimeExpired = 8,
		FindByTemplateName = 9,
		FindByApplicationPolicy = 10,
		FindByCertificatePolicy = 11,
		FindByExtension = 12,
		FindByKeyUsage = 13,
		FindBySubjectKeyIdentifier = 14,
	};
}
