#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Aztec::Internal { class AztecCode; }
namespace ZXing::Common { class BitArray; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::Common::ReedSolomon { class GenericGF; }

#define ZXING_AZTEC_INTERNAL_ENCODER_BITSTOWORDS_OFFSET UNITYSDK_OFFSET(0x1552F500)
#define ZXING_AZTEC_INTERNAL_ENCODER_DRAWBULLSEYE_OFFSET UNITYSDK_OFFSET(0x1552EFA0)
#define ZXING_AZTEC_INTERNAL_ENCODER_DRAWMODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1552EB50)
#define ZXING_AZTEC_INTERNAL_ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1552C270)
#define ZXING_AZTEC_INTERNAL_ENCODER_GENERATECHECKWORDS_OFFSET UNITYSDK_OFFSET(0x1552E770)
#define ZXING_AZTEC_INTERNAL_ENCODER_GENERATEMODEMESSAGE_OFFSET UNITYSDK_OFFSET(0x1552E910)
#define ZXING_AZTEC_INTERNAL_ENCODER_GETGF_OFFSET UNITYSDK_OFFSET(0x1552F220)
#define ZXING_AZTEC_INTERNAL_ENCODER_STUFFBITS_OFFSET UNITYSDK_OFFSET(0x1552E5C0)
#define ZXING_AZTEC_INTERNAL_ENCODER_TOTALBITSINLAYER_OFFSET UNITYSDK_OFFSET(0x1552E5A0)
#define ZXING_AZTEC_INTERNAL_ENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1552F8F0)

namespace ZXing::Aztec::Internal
{
	inline static constexpr unsigned int Encoder_TypeDefinitionIndex = 6435;

	class Encoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_WORD_SIZE()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Encoder_TypeDefinitionIndex)->GetStaticField(0x1830);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER__CCTOR_OFFSET))();
		}

		static ::ZXing::Aztec::Internal::AztecCode* encode(::Il2CppArray<::System::Byte>* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::ZXing::Aztec::Internal::AztecCode*(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_ENCODE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void drawBullsEye(::ZXing::Common::BitMatrix* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::ZXing::Common::BitMatrix*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_DRAWBULLSEYE_OFFSET))(a1, a2, a3);
		}

		static ::ZXing::Common::BitArray* generateModeMessage(::System::Boolean a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::ZXing::Common::BitArray*(*)(::System::Boolean, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_GENERATEMODEMESSAGE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void drawModeMessage(::ZXing::Common::BitMatrix* a1, ::System::Boolean a2, ::System::Int32 a3, ::ZXing::Common::BitArray* a4)
		{
			return ((::System::Void(*)(::ZXing::Common::BitMatrix*, ::System::Boolean, ::System::Int32, ::ZXing::Common::BitArray*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_DRAWMODEMESSAGE_OFFSET))(a1, a2, a3, a4);
		}

		static ::ZXing::Common::BitArray* generateCheckWords(::ZXing::Common::BitArray* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::ZXing::Common::BitArray*(*)(::ZXing::Common::BitArray*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_GENERATECHECKWORDS_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Int32>* bitsToWords(::ZXing::Common::BitArray* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::ZXing::Common::BitArray*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_BITSTOWORDS_OFFSET))(a1, a2, a3);
		}

		static ::ZXing::Common::ReedSolomon::GenericGF* getGF(::System::Int32 a1)
		{
			return ((::ZXing::Common::ReedSolomon::GenericGF*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_GETGF_OFFSET))(a1);
		}

		static ::ZXing::Common::BitArray* stuffBits(::ZXing::Common::BitArray* a1, ::System::Int32 a2)
		{
			return ((::ZXing::Common::BitArray*(*)(::ZXing::Common::BitArray*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_STUFFBITS_OFFSET))(a1, a2);
		}

		static ::System::Int32 TotalBitsInLayer(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_AZTEC_INTERNAL_ENCODER_TOTALBITSINLAYER_OFFSET))(a1, a2);
		}
	};
}
