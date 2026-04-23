#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_CREATE_OFFSET UNITYSDK_OFFSET(0x1780D3A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512__CTOR_OFFSET UNITYSDK_OFFSET(0x1780D390)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA512_TypeDefinitionIndex = 1053;

	class SHA512 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::SHA512* Create()
		{
			return ((::System::Security::Cryptography::SHA512*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA512_CREATE_OFFSET))();
		}
	};
}
