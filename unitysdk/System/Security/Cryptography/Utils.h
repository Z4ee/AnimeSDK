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

#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTBYTEARRAYTOINT_OFFSET UNITYSDK_OFFSET(0x1CB2CEA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET UNITYSDK_OFFSET(0x1CB2CF20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_1_OFFSET UNITYSDK_OFFSET(0x1CB2CA60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET UNITYSDK_OFFSET(0x1CB2CA40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDESLOWPATH_OFFSET UNITYSDK_OFFSET(0x1CB2DA10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDE_OFFSET UNITYSDK_OFFSET(0x1CB2D8E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1CB2D2E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x1CB2D160)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1CB2D310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOLITTLEENDIAN_OFFSET UNITYSDK_OFFSET(0x1CB2D190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_FIXUPKEYPARITY_OFFSET UNITYSDK_OFFSET(0x1CB2D060)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x1CB2C740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GET_STATICRANDOMNUMBERGENERATOR_OFFSET UNITYSDK_OFFSET(0x1CB2C9A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_HASALGORITHM_OFFSET UNITYSDK_OFFSET(0x1CB2CA30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_INT_OFFSET UNITYSDK_OFFSET(0x1CB2D710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDFROMBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1CB2D460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDTOBIGENDIAN_OFFSET UNITYSDK_OFFSET(0x1CB2D490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPDECRYPT_OFFSET UNITYSDK_OFFSET(0x1CB2D840)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPENCRYPT_OFFSET UNITYSDK_OFFSET(0x1CB2D7C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS__PRODUCELEGACYHMACVALUES_OFFSET UNITYSDK_OFFSET(0x1CB2DA90)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 1112;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RNGCryptoServiceProvider** StaticGet__rng()
		{
			return (::System::Security::Cryptography::RNGCryptoServiceProvider**)Il2CppClass::FromTypeDefinitionIndex(Utils_TypeDefinitionIndex)->GetStaticField(0x12B0);
		}

		static ::System::Security::Cryptography::RNGCryptoServiceProvider* get_StaticRandomNumberGenerator()
		{
			return ((::System::Security::Cryptography::RNGCryptoServiceProvider*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GET_STATICRANDOMNUMBERGENERATOR_OFFSET))();
		}

		static ::Il2CppArray<::System::Byte>* GenerateRandom(::System::Int32 keySize)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_GENERATERANDOM_OFFSET))(keySize);
		}

		static ::System::Boolean HasAlgorithm(::System::Int32 dwCalg, ::System::Int32 dwKeySize)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_HASALGORITHM_OFFSET))(dwCalg, dwKeySize);
		}

		static ::System::String* DiscardWhiteSpaces(::System::String* inputBuffer)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_OFFSET))(inputBuffer);
		}

		static ::System::String* DiscardWhiteSpaces_1(::System::String* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::System::String*(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DISCARDWHITESPACES_1_OFFSET))(inputBuffer, inputOffset, inputCount);
		}

		static ::System::Int32 ConvertByteArrayToInt(::Il2CppArray<::System::Byte>* input)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTBYTEARRAYTOINT_OFFSET))(input);
		}

		static ::Il2CppArray<::System::Byte>* ConvertIntToByteArray(::System::Int32 dwInput)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_CONVERTINTTOBYTEARRAY_OFFSET))(dwInput);
		}

		static ::Il2CppArray<::System::Byte>* FixupKeyParity(::Il2CppArray<::System::Byte>* key)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_FIXUPKEYPARITY_OFFSET))(key);
		}

		static ::System::Void DWORDFromLittleEndian(::System::UInt32* x, ::System::Int32 digits, ::System::Byte* block)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMLITTLEENDIAN_OFFSET))(x, digits, block);
		}

		static ::System::Void DWORDToLittleEndian(::Il2CppArray<::System::Byte>* block, ::Il2CppArray<::System::UInt32>* x, ::System::Int32 digits)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOLITTLEENDIAN_OFFSET))(block, x, digits);
		}

		static ::System::Void DWORDFromBigEndian(::System::UInt32* x, ::System::Int32 digits, ::System::Byte* block)
		{
			return ((::System::Void(*)(::System::UInt32*, ::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDFROMBIGENDIAN_OFFSET))(x, digits, block);
		}

		static ::System::Void DWORDToBigEndian(::Il2CppArray<::System::Byte>* block, ::Il2CppArray<::System::UInt32>* x, ::System::Int32 digits)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DWORDTOBIGENDIAN_OFFSET))(block, x, digits);
		}

		static ::System::Void QuadWordFromBigEndian(::System::UInt64* x, ::System::Int32 digits, ::System::Byte* block)
		{
			return ((::System::Void(*)(::System::UInt64*, ::System::Int32, ::System::Byte*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDFROMBIGENDIAN_OFFSET))(x, digits, block);
		}

		static ::System::Void QuadWordToBigEndian(::Il2CppArray<::System::Byte>* block, ::Il2CppArray<::System::UInt64>* x, ::System::Int32 digits)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt64>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_QUADWORDTOBIGENDIAN_OFFSET))(block, x, digits);
		}

		static ::Il2CppArray<::System::Byte>* Int(::System::UInt32 i)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_INT_OFFSET))(i);
		}

		static ::Il2CppArray<::System::Byte>* RsaOaepEncrypt(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::System::Security::Cryptography::PKCS1MaskGenerationMethod* mgf, ::System::Security::Cryptography::RandomNumberGenerator* rng, ::Il2CppArray<::System::Byte>* data)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::System::Security::Cryptography::RandomNumberGenerator*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPENCRYPT_OFFSET))(rsa, hash, mgf, rng, data);
		}

		static ::Il2CppArray<::System::Byte>* RsaOaepDecrypt(::System::Security::Cryptography::RSA* rsa, ::System::Security::Cryptography::HashAlgorithm* hash, ::System::Security::Cryptography::PKCS1MaskGenerationMethod* mgf, ::Il2CppArray<::System::Byte>* encryptedData)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Security::Cryptography::RSA*, ::System::Security::Cryptography::HashAlgorithm*, ::System::Security::Cryptography::PKCS1MaskGenerationMethod*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_RSAOAEPDECRYPT_OFFSET))(rsa, hash, mgf, encryptedData);
		}

		static ::System::Boolean DoesRsaKeyOverride(::System::Security::Cryptography::RSA* rsaKey, ::System::String* methodName, ::Il2CppArray<::System::Type*>* parameterTypes)
		{
			return ((::System::Boolean(*)(::System::Security::Cryptography::RSA*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDE_OFFSET))(rsaKey, methodName, parameterTypes);
		}

		static ::System::Boolean DoesRsaKeyOverrideSlowPath(::System::Type* t, ::System::String* methodName, ::Il2CppArray<::System::Type*>* parameterTypes)
		{
			return ((::System::Boolean(*)(::System::Type*, ::System::String*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS_DOESRSAKEYOVERRIDESLOWPATH_OFFSET))(t, methodName, parameterTypes);
		}

		static ::System::Boolean _ProduceLegacyHmacValues()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_UTILS__PRODUCELEGACYHMACVALUES_OFFSET))();
		}
	};
}
