#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DES.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1D816490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1D816330)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1D816A40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1D8165F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D816260)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DESCryptoServiceProvider_TypeDefinitionIndex = 1057;

	class DESCryptoServiceProvider : public ::System::Security::Cryptography::DES
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(this);
		}
	};
}
