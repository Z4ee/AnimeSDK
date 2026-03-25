#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/C40Encoder.h"

namespace System::Text { class StringBuilder; }

#define ZXING_DATAMATRIX_ENCODER_TEXTENCODER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x18D11BA0)
#define ZXING_DATAMATRIX_ENCODER_TEXTENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x18D11B90)
#define ZXING_DATAMATRIX_ENCODER_TEXTENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x18D0FF70)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int TextEncoder_TypeDefinitionIndex = 6092;

	class TextEncoder : public ::ZXing::Datamatrix::Encoder::C40Encoder
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_TEXTENCODER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_EncodingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_TEXTENCODER_GET_ENCODINGMODE_OFFSET))(this);
		}

		::System::Int32 encodeChar(::System::Char c, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_TEXTENCODER_ENCODECHAR_OFFSET))(this, c, sb);
		}
	};
}
