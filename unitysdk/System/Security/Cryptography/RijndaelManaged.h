#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/Rijndael.h"
#include "unitysdk/System/Security/Cryptography/RijndaelManagedTransformMode.h"

namespace System::Security::Cryptography { class ICryptoTransform; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x150A05C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x150A0250)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x150A08A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x150A0770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_NEWENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x150A0400)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x150A00E0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManaged_TypeDefinitionIndex = 1036;

	class RijndaelManaged : public ::System::Security::Cryptography::Rijndael
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED__CTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEENCRYPTOR_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_CREATEDECRYPTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEKEY_OFFSET))(this);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_GENERATEIV_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* NewEncryptor(::Il2CppArray<::System::Byte>* a1, ::System::Security::Cryptography::CipherMode a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Security::Cryptography::RijndaelManagedTransformMode a5)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::CipherMode, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Security::Cryptography::RijndaelManagedTransformMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGED_NEWENCRYPTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}
	};
}
