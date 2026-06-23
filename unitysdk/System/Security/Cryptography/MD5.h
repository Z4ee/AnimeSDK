#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_CREATE_OFFSET UNITYSDK_OFFSET(0x1C1B0D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_MD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B0D70)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int MD5_TypeDefinitionIndex = 1075;

	class MD5 : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::MD5* Create()
		{
			return ((::System::Security::Cryptography::MD5*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_MD5_CREATE_OFFSET))();
		}
	};
}
