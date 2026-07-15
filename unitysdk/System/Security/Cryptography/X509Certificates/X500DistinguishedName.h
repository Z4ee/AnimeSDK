#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsnEncodedData.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X500DistinguishedName_TypeDefinitionIndex = 2683;

	class X500DistinguishedName : public ::System::Security::Cryptography::AsnEncodedData
	{
	public:
	};
}
