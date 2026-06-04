#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/C40Encoder.h"

namespace System::Text { class StringBuilder; }
namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_X12ENCODER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1B54E6D0)
#define ZXING_DATAMATRIX_ENCODER_X12ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1B54E4C0)
#define ZXING_DATAMATRIX_ENCODER_X12ENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x1B54E4B0)
#define ZXING_DATAMATRIX_ENCODER_X12ENCODER_HANDLEEOD_OFFSET UNITYSDK_OFFSET(0x1B54E800)
#define ZXING_DATAMATRIX_ENCODER_X12ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54C580)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int X12Encoder_TypeDefinitionIndex = 6461;

	class X12Encoder : public ::ZXing::Datamatrix::Encoder::C40Encoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_X12ENCODER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_EncodingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_X12ENCODER_GET_ENCODINGMODE_OFFSET))(this);
		}

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_X12ENCODER_ENCODE_OFFSET))(this, a1);
		}

		::System::Int32 encodeChar(::System::Char a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_X12ENCODER_ENCODECHAR_OFFSET))(this, a1, a2);
		}

		::System::Void handleEOD(::ZXing::Datamatrix::Encoder::EncoderContext* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_X12ENCODER_HANDLEEOD_OFFSET))(this, a1, a2);
		}
	};
}
