#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/HashAlgorithm.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17A415F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_GET_KEY_OFFSET UNITYSDK_OFFSET(0x17A429A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_SET_KEY_OFFSET UNITYSDK_OFFSET(0x17A42A70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x17A41650)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int KeyedHashAlgorithm_TypeDefinitionIndex = 1025;

	class KeyedHashAlgorithm : public ::System::Security::Cryptography::HashAlgorithm
	{
	public:
		::Il2CppArray<::System::Byte>* KeyValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM__CTOR_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_DISPOSE_OFFSET))(this, disposing);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_KEYEDHASHALGORITHM_SET_KEY_OFFSET))(this, value);
		}
	};
}
