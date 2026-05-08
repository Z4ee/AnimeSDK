#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x18863500)
#define ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x188634F0)
#define ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_RANDOMIZE255STATE_OFFSET UNITYSDK_OFFSET(0x18863B80)
#define ZXING_DATAMATRIX_ENCODER_BASE256ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x18863BD0)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int Base256Encoder_TypeDefinitionIndex = 8689;

	class Base256Encoder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_BASE256ENCODER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_EncodingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_GET_ENCODINGMODE_OFFSET))(this);
		}

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_ENCODE_OFFSET))(this, context);
		}

		static ::System::Char randomize255State(::System::Char ch, ::System::Int32 codewordPosition)
		{
			return ((::System::Char(*)(::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_RANDOMIZE255STATE_OFFSET))(ch, codewordPosition);
		}
	};
}
