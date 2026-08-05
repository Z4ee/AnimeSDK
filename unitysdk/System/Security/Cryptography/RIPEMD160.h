#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160_CREATE_OFFSET UNITYSDK_OFFSET(0x1C3328D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3328C0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RIPEMD160_TypeDefinitionIndex = 1085;

	class RIPEMD160 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::RIPEMD160* Create()
		{
			return ((::System::Security::Cryptography::RIPEMD160*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIPEMD160_CREATE_OFFSET))();
		}
	};
}
