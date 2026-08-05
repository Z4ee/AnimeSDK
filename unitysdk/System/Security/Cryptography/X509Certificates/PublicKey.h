#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Security::X509 { class X509Certificate; }
namespace System { class String; }
namespace System::Security::Cryptography { class AsnEncodedData; }
namespace System::Security::Cryptography { class AsymmetricAlgorithm; }
namespace System::Security::Cryptography { class DSA; }
namespace System::Security::Cryptography { class Oid; }
namespace System::Security::Cryptography { class RSA; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODEDSA_OFFSET UNITYSDK_OFFSET(0x1DECCCE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODERSA_OFFSET UNITYSDK_OFFSET(0x1DECCA70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GETUNSIGNEDBIGINTEGER_OFFSET UNITYSDK_OFFSET(0x1DECD080)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDKEYVALUE_OFFSET UNITYSDK_OFFSET(0x1DECC880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_ENCODEDPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1DECC890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1DECC8A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GET_OID_OFFSET UNITYSDK_OFFSET(0x1DECD070)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DECD110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DECC1B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DECC030)

namespace System::Security::Cryptography::X509Certificates
{
	inline static constexpr unsigned int PublicKey_TypeDefinitionIndex = 3184;

	class PublicKey : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Byte>** StaticGet_Empty()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(PublicKey_TypeDefinitionIndex)->GetStaticField(0x2880);
		}
		// static const ::System::String* rsaOid; // 0x0
		// static const ::System::String* dsaOid; // 0x0
		::System::Security::Cryptography::AsnEncodedData* _params; // 0x10
		::System::Security::Cryptography::AsnEncodedData* _keyValue; // 0x18
		::System::Security::Cryptography::Oid* _oid; // 0x20
		::System::Security::Cryptography::AsymmetricAlgorithm* _key; // 0x28

		::System::Void _ctor(::System::Security::Cryptography::Oid* oid, ::System::Security::Cryptography::AsnEncodedData* parameters, ::System::Security::Cryptography::AsnEncodedData* keyValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::Oid*, ::System::Security::Cryptography::AsnEncodedData*, ::System::Security::Cryptography::AsnEncodedData*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CTOR_OFFSET))(this, oid, parameters, keyValue);
		}

		::System::Void _ctor_1(::Mono::Security::X509::X509Certificate* certificate)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Security::X509::X509Certificate*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY__CTOR_1_OFFSET))(this, certificate);
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

		static ::Il2CppArray<::System::Byte>* GetUnsignedBigInteger(::Il2CppArray<::System::Byte>* integer)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_GETUNSIGNEDBIGINTEGER_OFFSET))(integer);
		}

		static ::System::Security::Cryptography::DSA* DecodeDSA(::Il2CppArray<::System::Byte>* rawPublicKey, ::Il2CppArray<::System::Byte>* rawParameters)
		{
			return ((::System::Security::Cryptography::DSA*(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODEDSA_OFFSET))(rawPublicKey, rawParameters);
		}

		static ::System::Security::Cryptography::RSA* DecodeRSA(::Il2CppArray<::System::Byte>* rawPublicKey)
		{
			return ((::System::Security::Cryptography::RSA*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_X509CERTIFICATES_PUBLICKEY_DECODERSA_OFFSET))(rawPublicKey);
		}
	};
}
