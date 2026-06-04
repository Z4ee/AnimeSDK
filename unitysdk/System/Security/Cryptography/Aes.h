#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CCTOR_OFFSET UNITYSDK_OFFSET(0x187E4580)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CTOR_OFFSET UNITYSDK_OFFSET(0x187E4500)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Aes_TypeDefinitionIndex = 991;

	class Aes : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(Aes_TypeDefinitionIndex)->GetStaticField(0xE2E0);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(Aes_TypeDefinitionIndex)->GetStaticField(0xE2E8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CCTOR_OFFSET))();
		}
	};
}
