#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A418F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_2_OFFSET UNITYSDK_OFFSET(0x17A41900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_OFFSET UNITYSDK_OFFSET(0x17A37D60)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA1_TypeDefinitionIndex = 1020;

	class HMACSHA1 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_1_OFFSET))(this, key);
		}

		::System::Void _ctor_2(::Il2CppArray<::System::Byte>* key, ::System::Boolean useManagedSha1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA1__CTOR_2_OFFSET))(this, key, useManagedSha1);
		}
	};
}
