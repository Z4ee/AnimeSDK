#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x1A749030)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODETOCODEWORDS_OFFSET UNITYSDK_OFFSET(0x1A749080)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1A748DF0)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x1A748DE0)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_HANDLEEOD_OFFSET UNITYSDK_OFFSET(0x1A749220)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7497D0)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int EdifactEncoder_TypeDefinitionIndex = 6083;

	class EdifactEncoder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_EncodingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_GET_ENCODINGMODE_OFFSET))(this);
		}

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODE_OFFSET))(this, context);
		}

		static ::System::Void handleEOD(::ZXing::Datamatrix::Encoder::EncoderContext* context, ::System::Text::StringBuilder* buffer)
		{
			return ((::System::Void(*)(::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_HANDLEEOD_OFFSET))(context, buffer);
		}

		static ::System::Void encodeChar(::System::Char c, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::Char, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODECHAR_OFFSET))(c, sb);
		}

		static ::System::String* encodeToCodewords(::System::Text::StringBuilder* sb, ::System::Int32 startPos)
		{
			return ((::System::String*(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODETOCODEWORDS_OFFSET))(sb, startPos);
		}
	};
}
