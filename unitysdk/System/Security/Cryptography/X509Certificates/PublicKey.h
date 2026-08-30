#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODEDSA_OFFSET UNITYSDK_OFFSET(0x1E9E3680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODERSA_OFFSET UNITYSDK_OFFSET(0x1E9E3340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GETUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1E9E3BC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDKEYVALUE_OFFSET UNITYSDK_OFFSET(0x1E9E3150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1E9E3160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1E9E3170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_OID_OFFSET UNITYSDK_OFFSET(0x1E9E3BB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E3C20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E24F0)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int PublicKey_TypeDefinitionIndex = 2689;

	class PublicKey : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Empty()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PublicKey_TypeDefinitionIndex)->GetStaticField(0x21690);
		}
		::System::Security::Cryptography::AsnEncodedData* _keyValue; // 0x10
		::System::Security::Cryptography::AsymmetricAlgorithm* _key; // 0x18
		::System::Security::Cryptography::Oid* _oid; // 0x20
		::System::Security::Cryptography::AsnEncodedData* _params; // 0x28

		::System::Void _ctor(::Mono::Security::X509::X509Certificate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CCTOR_OFFSET))();
		}

		::System::Security::Cryptography::AsnEncodedData* get_EncodedKeyValue()
		{
			return ((::System::Security::Cryptography::AsnEncodedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDKEYVALUE_OFFSET))(this);
		}

		::System::Security::Cryptography::AsnEncodedData* get_EncodedParameters()
		{
			return ((::System::Security::Cryptography::AsnEncodedData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDPARAMETERS_OFFSET))(this);
		}

		::System::Security::Cryptography::AsymmetricAlgorithm* get_Key()
		{
			return ((::System::Security::Cryptography::AsymmetricAlgorithm*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_KEY_OFFSET))(this);
		}

		::System::Security::Cryptography::Oid* get_Oid()
		{
			return ((::System::Security::Cryptography::Oid*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_OID_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Byte>* GetUnsignedBigInteger(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GETUNSIGNEDBIGINTEGER_OFFSET))(a1);
		}

		static ::System::Security::Cryptography::DSA* DecodeDSA(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODEDSA_OFFSET))(a1, a2);
		}

		static ::System::Security::Cryptography::RSA* DecodeRSA(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODERSA_OFFSET))(a1);
		}
	};
}
