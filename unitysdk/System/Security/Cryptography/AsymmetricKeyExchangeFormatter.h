#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1AFCB0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricKeyExchangeFormatter_TypeDefinitionIndex = 1040;

	class AsymmetricKeyExchangeFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
