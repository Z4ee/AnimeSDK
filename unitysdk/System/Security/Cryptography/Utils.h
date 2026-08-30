#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { class Type; }
namespace System::Security::Cryptography { class HashAlgorithm; }
namespace System::Security::Cryptography { class PKCS1MaskGenerationMethod; }
namespace System::Security::Cryptography { class RNGCryptoServiceProvider; }
namespace System::Security::Cryptography { class RSA; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTBYTEARRAYTOINT_OFFSET UNITYSDK_OFFSET(0x1BBDA110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1BBDA190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_1_OFFSET UNITYSDK_OFFSET(0x1BBD9D90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET UNITYSDK_OFFSET(0x1BBD9D70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDESLOWPATH_OFFSET UNITYSDK_OFFSET(0x1BBDA380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1BBC8970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1BBD27A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x1BBDA270)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1BBD26C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x1BBDA2A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_FIXUPKEYPARITY_OFFSET UNITYSDK_OFFSET(0x1BBD8FF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x1BBCB1E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GET_STATICRANDOMNUMBERGENERATOR_OFFSET UNITYSDK_OFFSET(0x1BBCED50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_HASALGORITHM_OFFSET UNITYSDK_OFFSET(0x1BBD9320)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_INT_OFFSET UNITYSDK_OFFSET(0x1BBCA980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1BBD56E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDTOBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1BBD5560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPDECRYPT_OFFSET UNITYSDK_OFFSET(0x1BBC88D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPENCRYPT_OFFSET UNITYSDK_OFFSET(0x1BBC8F30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS__PRODUCELEGACYHMACVALUES_OFFSET UNITYSDK_OFFSET(0x1BBDA460)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 1073;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RNGCryptoServiceProvider** StaticGet__rng()
		{
			return (::System::Security::Cryptography::RNGCryptoServiceProvider**)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0xEB20);
		}

		static ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator()
		{
			return ((::System::Security::Cryptography::RNGCryptoServiceProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GET_STATICRANDOMNUMBERGENERATOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GenerateRandom(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GENERATERANDOM_OFFSET))(a1);
		}

		static ::System::Boolean HasAlgorithm(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_HASALGORITHM_OFFSET))(a1, a2);
		}

		static ::System::String* DiscardWhiteSpaces(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET))(a1);
		}

		static ::System::String* DiscardWhiteSpaces_1(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 ConvertByteArrayToInt(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTBYTEARRAYTOINT_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* ConvertIntToByteArray(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* FixupKeyParity(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_FIXUPKEYPARITY_OFFSET))(a1);
		}

		static ::System::Void DWORDFromLittleEndian(::System::UInt32* a1, ::System::Int32 a2, ::System::Byte* a3)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMLITTLEENDIAN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DWORDToLittleEndian(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOLITTLEENDIAN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DWORDFromBigEndian(::System::UInt32* a1, ::System::Int32 a2, ::System::Byte* a3)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMBIGENDIAN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DWORDToBigEndian(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::UInt32>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOBIGENDIAN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void QuadWordFromBigEndian(::System::UInt64* a1, ::System::Int32 a2, ::System::Byte* a3)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDFROMBIGENDIAN_OFFSET))(a1, a2, a3);
		}

		static ::System::Void QuadWordToBigEndian(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::UInt64>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt64>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDTOBIGENDIAN_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Byte>* Int(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_INT_OFFSET))(a1);
		}

		static ::Il2CppArray<::System::Byte>* RsaOaepEncrypt(::System::Security::Cryptography::RSA* a1, ::System::Security::Cryptography::HashAlgorithm* a2, ::System::Security::Cryptography::PKCS1MaskGenerationMethod* a3, ::System::Security::Cryptography::RandomNumberGenerator* a4, ::Il2CppArray<::System::Byte>* a5)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::System::Security::Cryptography::RandomNumberGenerator*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPENCRYPT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::Il2CppArray<::System::Byte>* RsaOaepDecrypt(::System::Security::Cryptography::RSA* a1, ::System::Security::Cryptography::HashAlgorithm* a2, ::System::Security::Cryptography::PKCS1MaskGenerationMethod* a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPDECRYPT_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean DoesRsaKeyOverride(::System::Security::Cryptography::RSA* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDE_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean DoesRsaKeyOverrideSlowPath(::System::Type* a1, ::System::String* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDESLOWPATH_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean _ProduceLegacyHmacValues()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS__PRODUCELEGACYHMACVALUES_OFFSET))();
		}
	};
}
