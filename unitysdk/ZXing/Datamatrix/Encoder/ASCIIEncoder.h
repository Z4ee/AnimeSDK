#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_ENCODEASCIIDIGITS_OFFSET UNITYSDK_OFFSET(0x1EFE4BE0)
#define ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1EFE4330)
#define ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x1EFE4320)
#define ZXING_DATAMATRIX_ENCODER_ASCIIENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFE55A0)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int ASCIIEncoder_TypeDefinitionIndex = 6958;

	class ASCIIEncoder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ASCIIENCODER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_EncodingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_GET_ENCODINGMODE_OFFSET))(this);
		}

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_ENCODE_OFFSET))(this, a1);
		}

		static ::System::Char encodeASCIIDigits(::System::Char a1, ::System::Char a2)
		{
			return ((::System::Char(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_ENCODEASCIIDIGITS_OFFSET))(a1, a2);
		}
	};
}
