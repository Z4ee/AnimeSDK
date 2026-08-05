#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Security/Cryptography/SymmetricTransform.h"

namespace System::Security::Cryptography { class SymmetricAlgorithm; }

#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_BSWAP_OFFSET UNITYSDK_OFFSET(0x1CE8E880)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CIPHERFUNCT_OFFSET UNITYSDK_OFFSET(0x1CE8E010)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_ECB_OFFSET UNITYSDK_OFFSET(0x1CE8EDC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_GETSTRONGKEY_OFFSET UNITYSDK_OFFSET(0x1CE8D510)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PERMUTATION_OFFSET UNITYSDK_OFFSET(0x1CE8E380)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PROCESSBLOCK_OFFSET UNITYSDK_OFFSET(0x1CE8E920)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_SETKEY_OFFSET UNITYSDK_OFFSET(0x1CE8D8E0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE8EE60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE8D270)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int DESTransform_TypeDefinitionIndex = 1114;

	class DESTransform : public ::Mono::Security::Cryptography::SymmetricTransform
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_spBoxes()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0xF50);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_fpTab()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0xF58);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_leftRotTotal()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0xF60);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_PC1()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0xF68);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_ipTab()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0xF70);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_PC2()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0xF78);
		}
		static ::System::Int32* StaticGet_BLOCK_BYTE_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x4B0);
		}
		static ::System::Int32* StaticGet_BLOCK_BIT_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x4B4);
		}
		static ::System::Int32* StaticGet_KEY_BYTE_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x4B8);
		}
		static ::System::Int32* StaticGet_KEY_BIT_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DESTransform_TypeDefinitionIndex)->GetStaticField(0x4BC);
		}
		::Il2CppArray<::System::UInt32>* dwordBuff; // 0x50
		::Il2CppArray<::System::Byte>* keySchedule; // 0x58
		::Il2CppArray<::System::Byte>* byteBuff; // 0x60

		::System::Void _ctor(::System::Security::Cryptography::SymmetricAlgorithm* symmAlgo, ::System::Boolean encryption, ::Il2CppArray<::System::Byte>* key, ::Il2CppArray<::System::Byte>* iv)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::SymmetricAlgorithm*, ::System::Boolean, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM__CTOR_OFFSET))(this, symmAlgo, encryption, key, iv);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM__CCTOR_OFFSET))();
		}

		::System::UInt32 CipherFunct(::System::UInt32 r, ::System::Int32 n)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_CIPHERFUNCT_OFFSET))(this, r, n);
		}

		static ::System::Void Permutation(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output, ::Il2CppArray<::System::UInt32>* permTab, ::System::Boolean preSwap)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PERMUTATION_OFFSET))(input, output, permTab, preSwap);
		}

		static ::System::Void BSwap(::Il2CppArray<::System::Byte>* byteBuff)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_BSWAP_OFFSET))(byteBuff);
		}

		::System::Void SetKey(::Il2CppArray<::System::Byte>* key)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_SETKEY_OFFSET))(this, key);
		}

		::System::Void ProcessBlock(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_PROCESSBLOCK_OFFSET))(this, input, output);
		}

		::System::Void ECB(::Il2CppArray<::System::Byte>* input, ::Il2CppArray<::System::Byte>* output)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_ECB_OFFSET))(this, input, output);
		}

		static ::Il2CppArray<::System::Byte>* GetStrongKey()
		{
			return ((::Il2CppArray<::System::Byte>*(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_DESTRANSFORM_GETSTRONGKEY_OFFSET))();
		}
	};
}
