#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/TripleDES.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x161E4470)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x161E3FA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x161E4710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x161E4550)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x161E3AE0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int TripleDESCryptoServiceProvider_TypeDefinitionIndex = 1062;

	class TripleDESCryptoServiceProvider : public ::System::Security::Cryptography::TripleDES
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_TRIPLEDESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(this);
		}
	};
}
