#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x17A41EF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17A41D70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512__CTOR_OFFSET UNITYSDK_OFFSET(0x17A37DF0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA512_TypeDefinitionIndex = 1023;

	class HMACSHA512 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Boolean m_useLegacyBlockSize; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512__CTOR_1_OFFSET))(this, key);
		}

		::System::Int32 get_BlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_GET_BLOCKSIZE_OFFSET))(this);
		}
	};
}
