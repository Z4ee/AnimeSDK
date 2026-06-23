#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACMD5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C1B0590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACMD5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1B0560)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACMD5_TypeDefinitionIndex = 1064;

	class HMACMD5 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACMD5__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACMD5__CTOR_1_OFFSET))(this, key);
		}
	};
}
