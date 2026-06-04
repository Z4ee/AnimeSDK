#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_CREATE_OFFSET UNITYSDK_OFFSET(0x185BA010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1__CTOR_OFFSET UNITYSDK_OFFSET(0x185C0240)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SHA1_TypeDefinitionIndex = 1046;

	class SHA1 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::SHA1* Create()
		{
			return ((::System::Security::Cryptography::SHA1*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SHA1_CREATE_OFFSET))();
		}
	};
}
