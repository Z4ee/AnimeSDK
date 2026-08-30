#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Security/Cryptography/Aes.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"

namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class RijndaelManaged; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF2A030)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1EF2A010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_1_OFFSET UNITYSDK_OFFSET(0x1EF2A170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1EF2A150)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EF2A290)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEIV_OFFSET UNITYSDK_OFFSET(0x1EF2A350)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEKEY_OFFSET UNITYSDK_OFFSET(0x1EF2A400)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x1DF54740)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_IV_OFFSET UNITYSDK_OFFSET(0x1DF54760)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1EF29E00)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1EF29DC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1EF29EB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1EF29F90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_IV_OFFSET UNITYSDK_OFFSET(0x1EF29DA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1EF29E20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1EF29DE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1EF29ED0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1EF29FB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF54530)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int AesManaged_TypeDefinitionIndex = 3129;

	class AesManaged : public ::System::Security::Cryptography::Aes
	{
	public:
		::System::Security::Cryptography::RijndaelManaged* m_rijndael; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED__CTOR_OFFSET))(this);
		}

		::System::Int32 get_FeedbackSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_FEEDBACKSIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_IV_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_IV_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEY_OFFSET))(this, a1);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_KEYSIZE_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::CipherMode get_Mode()
		{
			return ((::System::Security::Cryptography::CipherMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CipherMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_MODE_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::PaddingMode get_Padding()
		{
			return ((::System::Security::Cryptography::PaddingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_SET_PADDING_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor_1(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEDECRYPTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor_1(::Il2CppArray<::System::Byte>* a1, ::Il2CppArray<::System::Byte>* a2)
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_CREATEENCRYPTOR_1_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_DISPOSE_OFFSET))(this, a1);
		}

		::System::Void GenerateIV()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEIV_OFFSET))(this);
		}

		::System::Void GenerateKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_AESMANAGED_GENERATEKEY_OFFSET))(this);
		}
	};
}
