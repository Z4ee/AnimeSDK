#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509ContentType_TypeDefinitionIndex = 1124;

	enum class X509ContentType : ::System::Int32
	{
		Unknown = 0,
		Cert = 1,
		SerializedCert = 2,
		Pfx = 3,
		Pkcs12 = 3,
		SerializedStore = 4,
		Pkcs7 = 5,
		Authenticode = 6,
	};
}
