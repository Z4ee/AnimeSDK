#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Aztec::Internal { class AztecCode; }
namespace ZXing::Common { class BitArray; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::Common::ReedSolomon { class GenericGF; }

#define ZXING_AZTEC_INTERNAL_ENCODER_BITSTOWORDS_OFFSET UNITYSDK_OFFSET(0x1A737930)
#define ZXING_AZTEC_INTERNAL_ENCODER_DRAWBULLSEYE_OFFSET UNITYSDK_OFFSET(0x1A737380)
#define ZXING_AZTEC_INTERNAL_ENCODER_DRAWMODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A736E30)
#define ZXING_AZTEC_INTERNAL_ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1A734480)
#define ZXING_AZTEC_INTERNAL_ENCODER_GENERATECHECKWORDS_OFFSET UNITYSDK_OFFSET(0x1A736A20)
#define ZXING_AZTEC_INTERNAL_ENCODER_GENERATEMODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1A736BD0)
#define ZXING_AZTEC_INTERNAL_ENCODER_GETGF_OFFSET UNITYSDK_OFFSET(0x1A7376A0)
#define ZXING_AZTEC_INTERNAL_ENCODER_STUFFBITS_OFFSET UNITYSDK_OFFSET(0x1A736860)
#define ZXING_AZTEC_INTERNAL_ENCODER_TOTALBITSINLAYER_OFFSET UNITYSDK_OFFSET(0x1A736840)
#define ZXING_AZTEC_INTERNAL_ENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A737D60)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 6057;

	class Encoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_WORD_SIZE()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Encoder_TypeDefinitionIndex)->GetStaticField(0x1750);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER__CCTOR_OFFSET))();
		}

		static ::ZXing::Aztec::Internal::AztecCode* encode(::Il2CppArray<::System::Byte>* data, ::System::Int32 minECCPercent, ::System::Int32 userSpecifiedLayers)
		{
			return ((::ZXing::Aztec::Internal::AztecCode*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_ENCODE_OFFSET))(data, minECCPercent, userSpecifiedLayers);
		}

		static ::System::Void drawBullsEye(::ZXing::Common::BitMatrix* matrix, ::System::Int32 center, ::System::Int32 size)
		{
			return ((::System::Void(*)(::ZXing::Common::BitMatrix*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_DRAWBULLSEYE_OFFSET))(matrix, center, size);
		}

		static ::ZXing::Common::BitArray* generateModeMessage(::System::Boolean compact, ::System::Int32 layers, ::System::Int32 messageSizeInWords)
		{
			return ((::ZXing::Common::BitArray*(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_GENERATEMODEMESSAGE_OFFSET))(compact, layers, messageSizeInWords);
		}

		static ::System::Void drawModeMessage(::ZXing::Common::BitMatrix* matrix, ::System::Boolean compact, ::System::Int32 matrixSize, ::ZXing::Common::BitArray* modeMessage)
		{
			return ((::System::Void(*)(::ZXing::Common::BitMatrix*, ::System::Boolean, ::System::Int32, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_DRAWMODEMESSAGE_OFFSET))(matrix, compact, matrixSize, modeMessage);
		}

		static ::ZXing::Common::BitArray* generateCheckWords(::ZXing::Common::BitArray* bitArray, ::System::Int32 totalBits, ::System::Int32 wordSize)
		{
			return ((::ZXing::Common::BitArray*(*)(::ZXing::Common::BitArray*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_GENERATECHECKWORDS_OFFSET))(bitArray, totalBits, wordSize);
		}

		static ::Il2CppArray<::System::Int32>* bitsToWords(::ZXing::Common::BitArray* stuffedBits, ::System::Int32 wordSize, ::System::Int32 totalWords)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::ZXing::Common::BitArray*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_BITSTOWORDS_OFFSET))(stuffedBits, wordSize, totalWords);
		}

		static ::ZXing::Common::ReedSolomon::GenericGF* getGF(::System::Int32 wordSize)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGF*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_GETGF_OFFSET))(wordSize);
		}

		static ::ZXing::Common::BitArray* stuffBits(::ZXing::Common::BitArray* bits, ::System::Int32 wordSize)
		{
			return ((::ZXing::Common::BitArray*(*)(::ZXing::Common::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_STUFFBITS_OFFSET))(bits, wordSize);
		}

		static ::System::Int32 TotalBitsInLayer(::System::Int32 layers, ::System::Boolean compact)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_TOTALBITSINLAYER_OFFSET))(layers, compact);
		}
	};
}
