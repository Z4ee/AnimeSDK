#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/DES.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x187EC010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x187EBC90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x187EC730)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x187EC170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x187E6410)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DESCryptoServiceProvider_TypeDefinitionIndex = 1010;

	class DESCryptoServiceProvider : public ::System::Security::Cryptography::DES
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESCRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(this, a1, a2);
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
