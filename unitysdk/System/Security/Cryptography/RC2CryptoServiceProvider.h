#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/RC2.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x193E3490)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x193E33F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x193E3890)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x193E3530)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GET_EFFECTIVEKEYSIZE_OFFSET UNITYSDK_OFFSET(0x193E33E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER__CCTOR_OFFSET UNITYSDK_OFFSET(0x193E3970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x193E32D0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RC2CryptoServiceProvider_TypeDefinitionIndex = 1080;

	class RC2CryptoServiceProvider : public ::System::Security::Cryptography::RC2
	{
	public:
		static ::Il2CppArray<::System::Security::Cryptography::KeySizes*>** StaticGet_s_legalKeySizes()
		{
			return (::Il2CppArray<::System::Security::Cryptography::KeySizes*>**)Il2CppClass::FromTypeDefinitionIndex(RC2CryptoServiceProvider_TypeDefinitionIndex)->GetStaticField(0x710);
		}
		::System::Boolean m_use40bitSalt; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER__CCTOR_OFFSET))();
		}

		::System::Int32 get_EffectiveKeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GET_EFFECTIVEKEYSIZE_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEENCRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_CREATEDECRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEKEY_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RC2CRYPTOSERVICEPROVIDER_GENERATEIV_OFFSET))(this);
		}
	};
}
