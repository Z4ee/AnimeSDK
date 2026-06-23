#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Net
{
	inline static constexpr unsigned int CertificateEncoding_TypeDefinitionIndex = 3311;

	enum class CertificateEncoding : ::System::Int32
	{
		Zero = 0,
		X509AsnEncoding = 1,
		X509NdrEncoding = 2,
		Pkcs7AsnEncoding = 65536,
		Pkcs7NdrEncoding = 131072,
		AnyAsnEncoding = 65537,
	};
}
