#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x15542670)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODETOCODEWORDS_OFFSET UNITYSDK_OFFSET(0x15542730)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x155422D0)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x155422C0)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_HANDLEEOD_OFFSET UNITYSDK_OFFSET(0x15542A30)
#define ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x15542FF0)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int EdifactEncoder_TypeDefinitionIndex = 6461;

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

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODE_OFFSET))(this, a1);
		}

		static ::System::Void handleEOD(::ZXing::Datamatrix::Encoder::EncoderContext* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_HANDLEEOD_OFFSET))(a1, a2);
		}

		static ::System::Void encodeChar(::System::Char a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::System::Char, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODECHAR_OFFSET))(a1, a2);
		}

		static ::System::String* encodeToCodewords(::System::Text::StringBuilder* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_EDIFACTENCODER_ENCODETOCODEWORDS_OFFSET))(a1, a2);
		}
	};
}
