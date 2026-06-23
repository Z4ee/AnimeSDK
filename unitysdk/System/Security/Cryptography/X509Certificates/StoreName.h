#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int StoreName_TypeDefinitionIndex = 3170;

	enum class StoreName : ::System::Int32
	{
		AddressBook = 1,
		AuthRoot = 2,
		CertificateAuthority = 3,
		Disallowed = 4,
		My = 5,
		Root = 6,
		TrustedPeople = 7,
		TrustedPublisher = 8,
	};
}
