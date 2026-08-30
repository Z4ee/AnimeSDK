#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HMAC.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x19BC06E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19BC0560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512__CTOR_OFFSET UNITYSDK_OFFSET(0x19BB5610)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int HMACSHA512_TypeDefinitionIndex = 1030;

	class HMACSHA512 : public ::System::Security::Cryptography::HMAC
	{
	public:
		::System::Boolean m_useLegacyBlockSize; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512__CTOR_1_OFFSET))(this, a1);
		}

		::System::Int32 get_BlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_HMACSHA512_GET_BLOCKSIZE_OFFSET))(this);
		}
	};
}
