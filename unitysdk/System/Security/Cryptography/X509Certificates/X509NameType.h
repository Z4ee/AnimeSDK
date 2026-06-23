#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509NameType_TypeDefinitionIndex = 3176;

	enum class X509NameType : ::System::Int32
	{
		SimpleName = 0,
		EmailName = 1,
		UpnName = 2,
		DnsName = 3,
		DnsFromAlternativeName = 4,
		UrlName = 5,
	};
}
