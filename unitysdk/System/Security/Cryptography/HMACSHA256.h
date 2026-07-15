#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256__CTOR_1_OFFSET UNITYSDK_OFFSET(0x18366A50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256__CTOR_OFFSET UNITYSDK_OFFSET(0x1835BDC0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA256_TypeDefinitionIndex = 1021;

	class HMACSHA256 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA256__CTOR_1_OFFSET))(this, a1);
		}
	};
}
