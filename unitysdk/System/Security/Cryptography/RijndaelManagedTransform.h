#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"
#include "unitysdk/System/Security/Cryptography/RijndaelManagedTransformMode.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DECRYPTDATA_OFFSET UNITYSDK_OFFSET(0x185BE340)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DEC_OFFSET UNITYSDK_OFFSET(0x185BFC80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x185BCCB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x185BCCA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENCRYPTDATA_OFFSET UNITYSDK_OFFSET(0x185BD030)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENC_OFFSET UNITYSDK_OFFSET(0x185BFA90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GENERATEKEYEXPANSION_OFFSET UNITYSDK_OFFSET(0x185BC6B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x185BCD90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x185BCD70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x185BCD80)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_MULX_OFFSET UNITYSDK_OFFSET(0x185BFF70)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_RESET_OFFSET UNITYSDK_OFFSET(0x185BF9C0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT1_OFFSET UNITYSDK_OFFSET(0x185BFFA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT2_OFFSET UNITYSDK_OFFSET(0x185BFF90)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT3_OFFSET UNITYSDK_OFFSET(0x185BFEB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_SUBWORD_OFFSET UNITYSDK_OFFSET(0x185BFEC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x185BCDA0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x185BF6B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x185BFFB0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x185BBFF0)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManagedTransform_TypeDefinitionIndex = 1036;

	class RijndaelManagedTransform : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_iTF()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xF6E0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_T()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xF6E8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_TF()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xF6F0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_iT()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xF6F8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Rcon()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xF700);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_Sbox()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xF708);
		}
		::Il2CppArray<::System::Byte>* m_depadBuffer; // 0x10
		::Il2CppArray<::System::Int32>* m_decryptindex; // 0x18
		::Il2CppArray<::System::Int32>* m_encryptKeyExpansion; // 0x20
		::Il2CppArray<::System::Int32>* m_lastBlockBuffer; // 0x28
		::Il2CppArray<::System::Int32>* m_decryptKeyExpansion; // 0x30
		::Il2CppArray<::System::Byte>* m_shiftRegister; // 0x38
		::Il2CppArray<::System::Int32>* m_encryptindex; // 0x40
		::Il2CppArray<::System::Int32>* m_IV; // 0x48
		::System::Int32 m_outputBlockSize; // 0x50
		::System::Int32 m_Nb; // 0x54
		::System::Int32 m_Nr; // 0x58
		::System::Security::Cryptography::CipherMode m_cipherMode; // 0x5C
		::System::Int32 m_blockSizeBits; // 0x60
		::System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode; // 0x64
		::System::Int32 m_inputBlockSize; // 0x68
		::System::Int32 m_blockSizeBytes; // 0x6C
		::System::Int32 m_Nk; // 0x70
		::System::Security::Cryptography::PaddingMode m_paddingValue; // 0x74

		::System::Void _ctor(::Il2CppArray<::System::Byte>* a1, ::System::Security::Cryptography::CipherMode a2, ::Il2CppArray<::System::Byte>* a3, ::System::Int32 a4, ::System::Int32 a5, ::System::Security::Cryptography::PaddingMode a6, ::System::Security::Cryptography::RijndaelManagedTransformMode a7)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::CipherMode, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Security::Cryptography::RijndaelManagedTransformMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Int32 get_InputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Int32 get_OutputBlockSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET))(this);
		}

		::System::Boolean get_CanTransformMultipleBlocks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET))(this);
		}

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4, ::System::Int32 a5)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMBLOCK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_RESET_OFFSET))(this);
		}

		::System::Int32 EncryptData(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>*& a4, ::System::Int32 a5, ::System::Security::Cryptography::PaddingMode a6, ::System::Boolean a7)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENCRYPTDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Int32 DecryptData(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>*& a4, ::System::Int32 a5, ::System::Security::Cryptography::PaddingMode a6, ::System::Boolean a7)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DECRYPTDATA_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void Enc(::System::Int32* a1, ::System::Int32* a2, ::System::Int32* a3, ::System::Int32* a4, ::System::Int32* a5, ::System::Int32* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void Dec(::System::Int32* a1, ::System::Int32* a2, ::System::Int32* a3, ::System::Int32* a4, ::System::Int32* a5, ::System::Int32* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DEC_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void GenerateKeyExpansion(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GENERATEKEYEXPANSION_OFFSET))(this, a1);
		}

		static ::System::Int32 rot1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT1_OFFSET))(a1);
		}

		static ::System::Int32 rot2(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT2_OFFSET))(a1);
		}

		static ::System::Int32 rot3(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT3_OFFSET))(a1);
		}

		static ::System::Int32 SubWord(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_SUBWORD_OFFSET))(a1);
		}

		static ::System::Int32 MulX(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_MULX_OFFSET))(a1);
		}
	};
}
