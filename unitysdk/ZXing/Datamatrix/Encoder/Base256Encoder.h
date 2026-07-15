#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1553E890)
#define ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x1553E880)
#define ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_RANDOMIZE255STATE_OFFSET UNITYSDK_OFFSET(0x1553F110)
#define ZXING_DATAMATRIX_ENCODER_BASE256ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1553F160)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int Base256Encoder_TypeDefinitionIndex = 6499;

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

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_ENCODE_OFFSET))(this, a1);
		}

		static ::System::Char randomize255State(::System::Char a1, ::System::Int32 a2)
		{
			return ((::System::Char(*)(::System::Char, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_BASE256ENCODER_RANDOMIZE255STATE_OFFSET))(a1, a2);
		}
	};
}
