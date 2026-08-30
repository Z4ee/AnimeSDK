#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BC00F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB52B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACRIPEMD160_TypeDefinitionIndex = 1026;

	class HMACRIPEMD160 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACRIPEMD160__CTOR_1_OFFSET))(this, a1);
		}
	};
}
