#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/SymbolShapeHint.h"

namespace System { class String; }
namespace ZXing { class Dimension; }

#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_DETERMINECONSECUTIVEDIGITCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB37D30)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ENCODEHIGHLEVEL_OFFSET UNITYSDK_OFFSET(0x1AB335C0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_FINDMINIMUMS_OFFSET UNITYSDK_OFFSET(0x1AB3E510)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_GETMINIMUMCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB3E7F0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ILLEGALCHARACTER_OFFSET UNITYSDK_OFFSET(0x1AB3C310)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1AB38A60)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISEXTENDEDASCII_OFFSET UNITYSDK_OFFSET(0x1AB38A50)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEC40_OFFSET UNITYSDK_OFFSET(0x1AB3E840)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEEDIFACT_OFFSET UNITYSDK_OFFSET(0x1AB3E8C0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVETEXT_OFFSET UNITYSDK_OFFSET(0x1AB3E860)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEX12_OFFSET UNITYSDK_OFFSET(0x1AB3E880)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISSPECIALB256_OFFSET UNITYSDK_OFFSET(0x1AB3E8D0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISX12TERMSEP_OFFSET UNITYSDK_OFFSET(0x1AB3E8E0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_LOOKAHEADTEST_OFFSET UNITYSDK_OFFSET(0x1AB37FD0)
#define ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_RANDOMIZE253STATE_OFFSET UNITYSDK_OFFSET(0x1AB3E4A0)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int HighLevelEncoder_TypeDefinitionIndex = 19096;

	class HighLevelEncoder : public ::System::Object
	{
	public:
		static ::System::Char randomize253State(::System::Char ch, ::System::Int32 codewordPosition)
		{
			return ((::System::Char(*)(::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_RANDOMIZE253STATE_OFFSET))(ch, codewordPosition);
		}

		static ::System::String* encodeHighLevel(::System::String* msg, ::ZXing::Datamatrix::Encoder::SymbolShapeHint shape, ::ZXing::Dimension* minSize, ::ZXing::Dimension* maxSize, ::System::Int32 defaultEncodation)
		{
			return ((::System::String*(*)(::System::String*, ::ZXing::Datamatrix::Encoder::SymbolShapeHint, ::ZXing::Dimension*, ::ZXing::Dimension*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ENCODEHIGHLEVEL_OFFSET))(msg, shape, minSize, maxSize, defaultEncodation);
		}

		static ::System::Int32 lookAheadTest(::System::String* msg, ::System::Int32 startpos, ::System::Int32 currentMode)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_LOOKAHEADTEST_OFFSET))(msg, startpos, currentMode);
		}

		static ::System::Int32 findMinimums(::Il2CppArray<::System::Single>* charCounts, ::Il2CppArray<::System::Int32>* intCharCounts, ::System::Int32 min, ::Il2CppArray<::System::Byte>* mins)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_FINDMINIMUMS_OFFSET))(charCounts, intCharCounts, min, mins);
		}

		static ::System::Int32 getMinimumCount(::Il2CppArray<::System::Byte>* mins)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_GETMINIMUMCOUNT_OFFSET))(mins);
		}

		static ::System::Boolean isDigit(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISDIGIT_OFFSET))(ch);
		}

		static ::System::Boolean isExtendedASCII(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISEXTENDEDASCII_OFFSET))(ch);
		}

		static ::System::Boolean isNativeC40(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEC40_OFFSET))(ch);
		}

		static ::System::Boolean isNativeText(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVETEXT_OFFSET))(ch);
		}

		static ::System::Boolean isNativeX12(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEX12_OFFSET))(ch);
		}

		static ::System::Boolean isX12TermSep(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISX12TERMSEP_OFFSET))(ch);
		}

		static ::System::Boolean isNativeEDIFACT(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISNATIVEEDIFACT_OFFSET))(ch);
		}

		static ::System::Boolean isSpecialB256(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ISSPECIALB256_OFFSET))(ch);
		}

		static ::System::Int32 determineConsecutiveDigitCount(::System::String* msg, ::System::Int32 startpos)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_DETERMINECONSECUTIVEDIGITCOUNT_OFFSET))(msg, startpos);
		}

		static ::System::Void illegalCharacter(::System::Char c)
		{
			return ((::System::Void(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_HIGHLEVELENCODER_ILLEGALCHARACTER_OFFSET))(c);
		}
	};
}
