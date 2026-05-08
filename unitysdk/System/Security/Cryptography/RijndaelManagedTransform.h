#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Security/Cryptography/CipherMode.h"
#include "unitysdk/System/Security/Cryptography/PaddingMode.h"
#include "unitysdk/System/Security/Cryptography/RijndaelManagedTransformMode.h"

#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DECRYPTDATA_OFFSET UNITYSDK_OFFSET(0x19556680)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DEC_OFFSET UNITYSDK_OFFSET(0x19558560)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x195548B0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x195548A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENCRYPTDATA_OFFSET UNITYSDK_OFFSET(0x19554C60)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENC_OFFSET UNITYSDK_OFFSET(0x19558370)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GENERATEKEYEXPANSION_OFFSET UNITYSDK_OFFSET(0x19554170)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_CANTRANSFORMMULTIPLEBLOCKS_OFFSET UNITYSDK_OFFSET(0x19554990)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_INPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x19554970)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GET_OUTPUTBLOCKSIZE_OFFSET UNITYSDK_OFFSET(0x19554980)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_MULX_OFFSET UNITYSDK_OFFSET(0x195588D0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_RESET_OFFSET UNITYSDK_OFFSET(0x19558300)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT1_OFFSET UNITYSDK_OFFSET(0x19558900)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT2_OFFSET UNITYSDK_OFFSET(0x195588F0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT3_OFFSET UNITYSDK_OFFSET(0x19558790)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_SUBWORD_OFFSET UNITYSDK_OFFSET(0x195587A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMBLOCK_OFFSET UNITYSDK_OFFSET(0x195549A0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMFINALBLOCK_OFFSET UNITYSDK_OFFSET(0x19557FD0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CCTOR_OFFSET UNITYSDK_OFFSET(0x19558910)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19558CC0)
#define SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x19553A00)

namespace System::Security::Cryptography
{
	inline static constexpr unsigned int RijndaelManagedTransform_TypeDefinitionIndex = 1085;

	class RijndaelManagedTransform : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_s_iTF()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xBB0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_TF()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xBB8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_T()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xBC0);
		}
		static ::Il2CppArray<::System::Byte>** StaticGet_s_Sbox()
		{
			return (::Il2CppArray<::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xBC8);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_iT()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xBD0);
		}
		static ::Il2CppArray<::System::Int32>** StaticGet_s_Rcon()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RijndaelManagedTransform_TypeDefinitionIndex)->GetStaticField(0xBD8);
		}
		::Il2CppArray<::System::Int32>* m_IV; // 0x10
		::Il2CppArray<::System::Int32>* m_decryptKeyExpansion; // 0x18
		::Il2CppArray<::System::Int32>* m_encryptindex; // 0x20
		::Il2CppArray<::System::Byte>* m_shiftRegister; // 0x28
		::Il2CppArray<::System::Int32>* m_lastBlockBuffer; // 0x30
		::Il2CppArray<::System::Int32>* m_encryptKeyExpansion; // 0x38
		::Il2CppArray<::System::Int32>* m_decryptindex; // 0x40
		::Il2CppArray<::System::Byte>* m_depadBuffer; // 0x48
		::System::Security::Cryptography::CipherMode m_cipherMode; // 0x50
		::System::Int32 m_inputBlockSize; // 0x54
		::System::Int32 m_outputBlockSize; // 0x58
		::System::Int32 m_Nr; // 0x5C
		::System::Security::Cryptography::RijndaelManagedTransformMode m_transformMode; // 0x60
		::System::Int32 m_Nb; // 0x64
		::System::Int32 m_blockSizeBytes; // 0x68
		::System::Security::Cryptography::PaddingMode m_paddingValue; // 0x6C
		::System::Int32 m_Nk; // 0x70
		::System::Int32 m_blockSizeBits; // 0x74

		::System::Void _ctor(::Il2CppArray<::System::Byte>* rgbKey, ::System::Security::Cryptography::CipherMode mode, ::Il2CppArray<::System::Byte>* rgbIV, ::System::Int32 blockSize, ::System::Int32 feedbackSize, ::System::Security::Cryptography::PaddingMode PaddingValue, ::System::Security::Cryptography::RijndaelManagedTransformMode transformMode)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Security::Cryptography::CipherMode, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Security::Cryptography::RijndaelManagedTransformMode))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_OFFSET))(this, rgbKey, mode, rgbIV, blockSize, feedbackSize, PaddingValue, transformMode);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CCTOR_OFFSET))();
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM__CTOR_1_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DISPOSE_1_OFFSET))(this, disposing);
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

		::System::Int32 TransformBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>* outputBuffer, ::System::Int32 outputOffset)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset);
		}

		::Il2CppArray<::System::Byte>* TransformFinalBlock(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_TRANSFORMFINALBLOCK_OFFSET))(this, inputBuffer, inputOffset, inputCount);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_RESET_OFFSET))(this);
		}

		::System::Int32 EncryptData(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>*& outputBuffer, ::System::Int32 outputOffset, ::System::Security::Cryptography::PaddingMode paddingMode, ::System::Boolean fLast)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENCRYPTDATA_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset, paddingMode, fLast);
		}

		::System::Int32 DecryptData(::Il2CppArray<::System::Byte>* inputBuffer, ::System::Int32 inputOffset, ::System::Int32 inputCount, ::Il2CppArray<::System::Byte>*& outputBuffer, ::System::Int32 outputOffset, ::System::Security::Cryptography::PaddingMode paddingMode, ::System::Boolean fLast)
		{
			return ((::System::Int32(*)(::PVOID, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::Byte>*&, ::System::Int32, ::System::Security::Cryptography::PaddingMode, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DECRYPTDATA_OFFSET))(this, inputBuffer, inputOffset, inputCount, outputBuffer, outputOffset, paddingMode, fLast);
		}

		::System::Void Enc(::System::Int32* encryptindex, ::System::Int32* encryptKeyExpansion, ::System::Int32* T, ::System::Int32* TF, ::System::Int32* work, ::System::Int32* temp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ENC_OFFSET))(this, encryptindex, encryptKeyExpansion, T, TF, work, temp);
		}

		::System::Void Dec(::System::Int32* decryptindex, ::System::Int32* decryptKeyExpansion, ::System::Int32* iT, ::System::Int32* iTF, ::System::Int32* work, ::System::Int32* temp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*, ::System::Int32*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_DEC_OFFSET))(this, decryptindex, decryptKeyExpansion, iT, iTF, work, temp);
		}

		::System::Void GenerateKeyExpansion(::Il2CppArray<::System::Byte>* rgbKey)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_GENERATEKEYEXPANSION_OFFSET))(this, rgbKey);
		}

		static ::System::Int32 rot1(::System::Int32 val)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT1_OFFSET))(val);
		}

		static ::System::Int32 rot2(::System::Int32 val)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT2_OFFSET))(val);
		}

		static ::System::Int32 rot3(::System::Int32 val)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_ROT3_OFFSET))(val);
		}

		static ::System::Int32 SubWord(::System::Int32 a)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_SUBWORD_OFFSET))(a);
		}

		static ::System::Int32 MulX(::System::Int32 x)
		{
			return ((::System::Int32(*)(::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_CRYPTOGRAPHY_RIJNDAELMANAGEDTRANSFORM_MULX_OFFSET))(x);
		}
	};
}
