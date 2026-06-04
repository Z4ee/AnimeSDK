#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/SymbolShapeHint.h"

namespace System { class String; }
namespace ZXing { class Dimension; }

#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_DETERMINECONSECUTIVEDIGITCOUNT_OFFSET UNITYSDK_OFFSET(0x1B545810)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ENCODEHIGHLEVEL_OFFSET UNITYSDK_OFFSET(0x1B542490)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_FINDMINIMUMS_OFFSET UNITYSDK_OFFSET(0x1B54C590)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_GETMINIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B54C840)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ILLEGALCHARACTER_OFFSET UNITYSDK_OFFSET(0x1B54A9E0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1B546290)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISEXTENDEDASCII_OFFSET UNITYSDK_OFFSET(0x1B546280)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEC40_OFFSET UNITYSDK_OFFSET(0x1B54C880)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEEDIFACT_OFFSET UNITYSDK_OFFSET(0x1B54C900)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVETEXT_OFFSET UNITYSDK_OFFSET(0x1B54C8A0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEX12_OFFSET UNITYSDK_OFFSET(0x1B54C8C0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISSPECIALB256_OFFSET UNITYSDK_OFFSET(0x1B54C910)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISX12TERMSEP_OFFSET UNITYSDK_OFFSET(0x1B54C920)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_LOOKAHEADTEST_OFFSET UNITYSDK_OFFSET(0x1B545AA0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_RANDOMIZE253STATE_OFFSET UNITYSDK_OFFSET(0x1B54C520)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int HighLevelEncoder_TypeDefinitionIndex = 6406;

	class HighLevelEncoder : public ::System::Object
	{
	public:
		static ::System::Char randomize253State(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Char(*)(::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_RANDOMIZE253STATE_OFFSET))(a1, a2);
		}

		static ::System::String* encodeHighLevel(::System::String* a1, ::ZXing::Datamatrix::Encoder::SymbolShapeHint a2, ::ZXing::Dimension* a3, ::ZXing::Dimension* a4, ::System::Int32 a5)
		{
			return ((::System::String*(*)(::System::String*, ::ZXing::Datamatrix::Encoder::SymbolShapeHint, ::ZXing::Dimension*, ::ZXing::Dimension*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ENCODEHIGHLEVEL_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Int32 lookAheadTest(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_LOOKAHEADTEST_OFFSET))(a1, a2, a3);
		}

		static ::System::Int32 findMinimums(::Il2CppArray<::System::Single>* a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Byte>* a4)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_FINDMINIMUMS_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int32 getMinimumCount(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_GETMINIMUMCOUNT_OFFSET))(a1);
		}

		static ::System::Boolean isDigit(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISDIGIT_OFFSET))(a1);
		}

		static ::System::Boolean isExtendedASCII(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISEXTENDEDASCII_OFFSET))(a1);
		}

		static ::System::Boolean isNativeC40(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEC40_OFFSET))(a1);
		}

		static ::System::Boolean isNativeText(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVETEXT_OFFSET))(a1);
		}

		static ::System::Boolean isNativeX12(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEX12_OFFSET))(a1);
		}

		static ::System::Boolean isX12TermSep(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISX12TERMSEP_OFFSET))(a1);
		}

		static ::System::Boolean isNativeEDIFACT(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEEDIFACT_OFFSET))(a1);
		}

		static ::System::Boolean isSpecialB256(::System::Char a1)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISSPECIALB256_OFFSET))(a1);
		}

		static ::System::Int32 determineConsecutiveDigitCount(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_DETERMINECONSECUTIVEDIGITCOUNT_OFFSET))(a1, a2);
		}

		static ::System::Void illegalCharacter(::System::Char a1)
		{
			return ((::System::Void(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ILLEGALCHARACTER_OFFSET))(a1);
		}
	};
}
