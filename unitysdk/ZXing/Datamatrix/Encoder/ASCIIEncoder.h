#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_ENCODEASCIIDIGITS_OFFSET UNITYSDK_OFFSET(0x1AB37E20)
#define ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1AB375E0)
#define ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x1AB375D0)
#define ZXING_DATAMATRIX_ENCODER_ASCIIENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB38A70)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int ASCIIEncoder_TypeDefinitionIndex = 19098;

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

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_ENCODE_OFFSET))(this, context);
		}

		static ::System::Char encodeASCIIDigits(::System::Char digit1, ::System::Char digit2)
		{
			return ((::System::Char(*)(::System::Char, ::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ASCIIENCODER_ENCODEASCIIDIGITS_OFFSET))(digit1, digit2);
		}
	};
}
