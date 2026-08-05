#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/Aes.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x1F690770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1F690460)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6907A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1F690520)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F6907D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1F690420)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1F690440)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x1F690510)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_IV_OFFSET UNITYSDK_OFFSET(0x1F6905C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1F690600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1F6905E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1F690500)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1F6906F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_IV_OFFSET UNITYSDK_OFFSET(0x1F6905D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1F690610)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1F6905F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1F690620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1F690700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F690330)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesCryptoServiceProvider_TypeDefinitionIndex = 4338;

	class AesCryptoServiceProvider : public ::System::Security::Cryptography::Aes
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* key, ::Il2CppArray<::System::Byte>* iv)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(this, key, iv);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* key, ::Il2CppArray<::System::Byte>* iv)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(this, key, iv);
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_IV_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_IV_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_KEY_OFFSET))(this, value);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_KEYSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_FeedbackSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_FEEDBACKSIZE_OFFSET))(this);
		}

		::System::Security::Cryptography::CipherMode get_Mode()
		{
			return ((::System::Security::Cryptography::CipherMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CipherMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_MODE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::PaddingMode get_Padding()
		{
			return ((::System::Security::Cryptography::PaddingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_SET_PADDING_OFFSET))(this, value);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor_1()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_1_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor_1()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_1_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESCRYPTOSERVICEPROVIDER_DISPOSE_OFFSET))(this, disposing);
		}
	};
}
