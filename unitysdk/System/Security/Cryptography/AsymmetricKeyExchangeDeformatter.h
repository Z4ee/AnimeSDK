#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D691E00)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AsymmetricKeyExchangeDeformatter_TypeDefinitionIndex = 1039;

	class AsymmetricKeyExchangeDeformatter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_ASYMMETRICKEYEXCHANGEDEFORMATTER__CTOR_OFFSET))(this);
		}
	};
}
