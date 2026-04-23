#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x17A36110)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricKeyExchangeFormatter_TypeDefinitionIndex = 995;

	class AsymmetricKeyExchangeFormatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
