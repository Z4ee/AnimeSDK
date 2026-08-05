#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/SymmetricAlgorithm.h"

namespace System { class String; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1D691C50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_OFFSET UNITYSDK_OFFSET(0x1D691BE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D691CF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CTOR_OFFSET UNITYSDK_OFFSET(0x1D691B50)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Aes_TypeDefinitionIndex = 1037;

	class Aes : public ::System::Security::Cryptography::SymmetricAlgorithm
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(Aes_TypeDefinitionIndex)->GetStaticField(0x930);
		}
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalBlockSizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(Aes_TypeDefinitionIndex)->GetStaticField(0x938);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES__CCTOR_OFFSET))();
		}

		static ::System::Security::Cryptography::Aes* Create()
		{
			return ((::System::Security::Cryptography::Aes*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_OFFSET))();
		}

		static ::System::Security::Cryptography::Aes* Create_1(::System::String* algorithmName)
		{
			return ((::System::Security::Cryptography::Aes*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AES_CREATE_1_OFFSET))(algorithmName);
		}
	};
}
