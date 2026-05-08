#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/AsymmetricAlgorithm.h"
#include "unitysdk/System/Security/Cryptography/RSAParameters.h"

namespace System { class Exception; }
namespace System { class String; }
namespace System::Security::Cryptography { class RSAEncryptionPadding; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET UNITYSDK_OFFSET(0x1A5AD5C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1A5AD770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPT_OFFSET UNITYSDK_OFFSET(0x1A5AD720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DERIVEDCLASSMUSTOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1A5AD660)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPTVALUE_OFFSET UNITYSDK_OFFSET(0x1A5AD7D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPT_OFFSET UNITYSDK_OFFSET(0x1A5AD610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_FROMXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1A5AD8B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_GET_KEYEXCHANGEALGORITHM_OFFSET UNITYSDK_OFFSET(0x1A5AD830)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_GET_SIGNATUREALGORITHM_OFFSET UNITYSDK_OFFSET(0x1A5AD870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TOXMLSTRING_OFFSET UNITYSDK_OFFSET(0x1A5ADCA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RSA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5AD5B0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RSA_TypeDefinitionIndex = 1089;

	class RSA : public ::System::Security::Cryptography::AsymmetricAlgorithm
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA__CTOR_OFFSET))(this);
		}

		static ::System::Security::Cryptography::RSA* Create()
		{
			return ((::System::Security::Cryptography::RSA*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_CREATE_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* Encrypt(::Il2CppArray<::System::Byte>* data, ::System::Security::Cryptography::RSAEncryptionPadding* padding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPT_OFFSET))(this, data, padding);
		}

		::Il2CppArray<::System::Byte>* Decrypt(::Il2CppArray<::System::Byte>* data, ::System::Security::Cryptography::RSAEncryptionPadding* padding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::RSAEncryptionPadding*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPT_OFFSET))(this, data, padding);
		}

		static ::System::Exception* DerivedClassMustOverride()
		{
			return ((::System::Exception*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DERIVEDCLASSMUSTOVERRIDE_OFFSET))();
		}

		::Il2CppArray<::System::Byte>* DecryptValue(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_DECRYPTVALUE_OFFSET))(this, rgb);
		}

		::Il2CppArray<::System::Byte>* EncryptValue(::Il2CppArray<::System::Byte>* rgb)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_ENCRYPTVALUE_OFFSET))(this, rgb);
		}

		::System::String* get_KeyExchangeAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_GET_KEYEXCHANGEALGORITHM_OFFSET))(this);
		}

		::System::String* get_SignatureAlgorithm()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_GET_SIGNATUREALGORITHM_OFFSET))(this);
		}

		::System::Void FromXmlString(::System::String* xmlString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_FROMXMLSTRING_OFFSET))(this, xmlString);
		}

		::System::String* ToXmlString(::System::Boolean includePrivateParameters)
		{
			return ((::System::String*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RSA_TOXMLSTRING_OFFSET))(this, includePrivateParameters);
		}
	};
}
