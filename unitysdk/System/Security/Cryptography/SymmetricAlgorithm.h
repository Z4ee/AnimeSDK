#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"

namespace System { class String; }
namespace System::Security::Cryptography { class ICryptoTransform; }
namespace System::Security::Cryptography { class KeySizes; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A98CB10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEDECRYPTOR_OFFSET UNITYSDK_OFFSET(0x1A98D770)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATEENCRYPTOR_OFFSET UNITYSDK_OFFSET(0x1A98D720)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET UNITYSDK_OFFSET(0x1A98D6A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1A98CBC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A98CA60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1A98CC10)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_FEEDBACKSIZE_OFFSET UNITYSDK_OFFSET(0x1A98CD20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_IV_OFFSET UNITYSDK_OFFSET(0x1A98CD30)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1A98D4A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1A98CFF0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALBLOCKSIZES_OFFSET UNITYSDK_OFFSET(0x1A98D3A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET UNITYSDK_OFFSET(0x1A9886A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_MODE_OFFSET UNITYSDK_OFFSET(0x1A98D5A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A98D620)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_BLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x1A98CC20)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_IV_OFFSET UNITYSDK_OFFSET(0x1A98CE50)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEYSIZE_OFFSET UNITYSDK_OFFSET(0x1A98D4B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEY_OFFSET UNITYSDK_OFFSET(0x1A98D110)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_MODE_OFFSET UNITYSDK_OFFSET(0x1A98D5B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_PADDING_OFFSET UNITYSDK_OFFSET(0x1A98D630)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_VALIDKEYSIZE_OFFSET UNITYSDK_OFFSET(0x1A98D310)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A98CA50)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int SymmetricAlgorithm_TypeDefinitionIndex = 1110;

	class SymmetricAlgorithm : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* LegalBlockSizesValue; // 0x10
		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* LegalKeySizesValue; // 0x18
		::Il2CppArray<::System::Byte>* IVValue; // 0x20
		::Il2CppArray<::System::Byte>* KeyValue; // 0x28
		::System::Security::Cryptography::PaddingMode PaddingValue; // 0x30
		::System::Security::Cryptography::CipherMode ModeValue; // 0x34
		::System::Int32 BlockSizeValue; // 0x38
		::System::Int32 KeySizeValue; // 0x3C
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

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Int32 get_BlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_BLOCKSIZE_OFFSET))(this);
		}

		::System::Void set_BlockSize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_BLOCKSIZE_OFFSET))(this, value);
		}

		::System::Int32 get_FeedbackSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_FEEDBACKSIZE_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* get_IV()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_IV_OFFSET))(this);
		}

		::System::Void set_IV(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_IV_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Byte>* get_Key()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEY_OFFSET))(this);
		}

		::System::Void set_Key(::Il2CppArray<::System::Byte>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEY_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* get_LegalBlockSizes()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::KeySizes*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALBLOCKSIZES_OFFSET))(this);
		}

		::Il2CppArray<::System::Security::Cryptography::KeySizes*>* get_LegalKeySizes()
		{
			return ((::Il2CppArray<::System::Security::Cryptography::KeySizes*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_LEGALKEYSIZES_OFFSET))(this);
		}

		::System::Int32 get_KeySize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_KEYSIZE_OFFSET))(this);
		}

		::System::Void set_KeySize(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_KEYSIZE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::CipherMode get_Mode()
		{
			return ((::System::Security::Cryptography::CipherMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_MODE_OFFSET))(this);
		}

		::System::Void set_Mode(::System::Security::Cryptography::CipherMode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::CipherMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_MODE_OFFSET))(this, value);
		}

		::System::Security::Cryptography::PaddingMode get_Padding()
		{
			return ((::System::Security::Cryptography::PaddingMode(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_GET_PADDING_OFFSET))(this);
		}

		::System::Void set_Padding(::System::Security::Cryptography::PaddingMode value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::PaddingMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_SET_PADDING_OFFSET))(this, value);
		}

		::System::Boolean ValidKeySize(::System::Int32 bitLength)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_VALIDKEYSIZE_OFFSET))(this, bitLength);
		}

		static ::System::Security::Cryptography::SymmetricAlgorithm* Create(::System::String* algName)
		{
			return ((::System::Security::Cryptography::SymmetricAlgorithm*(*)(::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_SYMMETRICALGORITHM_CREATE_OFFSET))(algName);
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
