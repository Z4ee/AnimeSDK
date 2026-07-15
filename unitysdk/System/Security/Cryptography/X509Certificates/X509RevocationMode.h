#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int X509RevocationMode_TypeDefinitionIndex = 2678;

	enum class X509RevocationMode : ::System::Int32
	{
		NoCheck = 0,
		Online = 1,
		Offline = 2,
	};
}
