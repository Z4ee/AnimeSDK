#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"

namespace System { class String; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BBD7590)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8190)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1BBD8020)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x1BBD7FA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1BBD75A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1BBD74B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1BBD75F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x1BBD7700)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_IV_OFFSET UNITYSDK_OFFSET(0x1BBD7710)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1BBD7E50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1BBD79C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET UNITYSDK_OFFSET(0x1BBD7D70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1BBD7EE0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1BBD7F40)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1BBD7600)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_IV_OFFSET UNITYSDK_OFFSET(0x1BBD7870)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1BBD7E60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1BBD7B20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1BBD7EF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1BBD7F50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_VALIDKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1BBD7C80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1BBCAA40)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricAlgorithm_TypeDefinitionIndex = 1070;

	class SymmetricAlgorithm : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* LegalBlockSizesValue; // 0x10
		::Il2CppArray<::System::Byte>* IVValue; // 0x18
		::Il2CppArray<::System::Byte>* KeyValue; // 0x20
		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* LegalKeySizesValue; // 0x28
		::System::Int32 BlockSizeValue; // 0x30
		::System::Security::Cryptography::CipherMode ModeValue; // 0x34
		::System::Int32 KeySizeValue; // 0x38
		::System::Security::Cryptography::PaddingMode PaddingValue; // 0x3C
		::System::Int32 FeedbackSizeValue; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM__CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CLEAR_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Int32 get_BlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_BLOCKSIZE_OFFSET))(this);
		}

		::System::Void set_BlockSize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_BLOCKSIZE_OFFSET))(this, a1);
		}

		::System::Int32 get_FeedbackSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_FEEDBACKSIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_IV_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_IV_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEY_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* get_LegalKeySizes()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::KeySizes*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEYSIZE_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::CipherMode get_Mode()
		{
			return ((::System::Security::Cryptography::CipherMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CipherMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_MODE_OFFSET))(this, a1);
		}

		::System::Security::Cryptography::PaddingMode get_Padding()
		{
			return ((::System::Security::Cryptography::PaddingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_PADDING_OFFSET))(this, a1);
		}

		::System::Boolean ValidKeySize(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_VALIDKEYSIZE_OFFSET))(this, a1);
		}

		static ::System::Security::Cryptography::SymmetricAlgorithm* Create(::System::String* a1)
		{
			return ((::System::Security::Cryptography::SymmetricAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET))(a1);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateEncryptor()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_OFFSET))(this);
		}

		::System::Security::Cryptography::ICryptoTransform* CreateDecryptor()
		{
			return ((::System::Security::Cryptography::ICryptoTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET))(this);
		}
	};
}
