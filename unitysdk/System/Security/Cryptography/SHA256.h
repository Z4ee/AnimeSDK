#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CREATE_OFFSET UNITYSDK_OFFSET(0x1995F3A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256__CTOR_OFFSET UNITYSDK_OFFSET(0x19983680)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA256_TypeDefinitionIndex = 1097;

	class SHA256 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::SHA256* Create()
		{
			return ((::System::Security::Cryptography::SHA256*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA256_CREATE_OFFSET))();
		}
	};
}
