#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/Rijndael.h"
#include "unitysdk/System/Security/Cryptography/RijndaelManagedTransformMode.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x17800E50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x17800CD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x17800FF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x17800F00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_NEWENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x17800D80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x17800B80)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManaged_TypeDefinitionIndex = 1035;

	class RijndaelManaged : public ::System::Security::Cryptography::Rijndael
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEENCRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* rgbKey, ::Il2CppArray<::System::Byte>* rgbIV)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEDECRYPTOR_OFFSET))(this, rgbKey, rgbIV);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEKEY_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEIV_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* NewEncryptor(::Il2CppArray<::System::Byte>* rgbKey, ::System::Security::Cryptography::CipherMode mode, ::Il2CppArray<::System::Byte>* rgbIV, ::System::Int32 feedbackSize, ::System::Security::Cryptography::RijndaelManagedTransformMode encryptMode)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::CipherMode, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Security::Cryptography::RijndaelManagedTransformMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_NEWENCRYPTOR_OFFSET))(this, rgbKey, mode, rgbIV, feedbackSize, encryptMode);
		}
	};
}
