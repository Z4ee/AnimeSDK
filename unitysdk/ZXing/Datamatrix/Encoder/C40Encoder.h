#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_BACKTRACKONECHARACTER_OFFSET UNITYSDK_OFFSET(0x18864040)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x188647A0)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODETOCODEWORDS_OFFSET UNITYSDK_OFFSET(0x18864190)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x18863BF0)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x18863BE0)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_HANDLEEOD_OFFSET UNITYSDK_OFFSET(0x18864320)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_WRITENEXTTRIPLET_OFFSET UNITYSDK_OFFSET(0x18864130)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x18864BD0)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int C40Encoder_TypeDefinitionIndex = 8652;

	class C40Encoder : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER__CTOR_OFFSET))(this);
		}

		::System::Int32 get_EncodingMode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_GET_ENCODINGMODE_OFFSET))(this);
		}

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODE_OFFSET))(this, context);
		}

		::System::Int32 backtrackOneCharacter(::ZXing::Datamatrix::Encoder::EncoderContext* context, ::System::Text::StringBuilder* buffer, ::System::Text::StringBuilder* removed, ::System::Int32 lastCharSize)
		{
			return ((::System::Int32(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_BACKTRACKONECHARACTER_OFFSET))(this, context, buffer, removed, lastCharSize);
		}

		static ::System::Void writeNextTriplet(::ZXing::Datamatrix::Encoder::EncoderContext* context, ::System::Text::StringBuilder* buffer)
		{
			return ((::System::Void(*)(::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_WRITENEXTTRIPLET_OFFSET))(context, buffer);
		}

		::System::Void handleEOD(::ZXing::Datamatrix::Encoder::EncoderContext* context, ::System::Text::StringBuilder* buffer)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_HANDLEEOD_OFFSET))(this, context, buffer);
		}

		::System::Int32 encodeChar(::System::Char c, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODECHAR_OFFSET))(this, c, sb);
		}

		static ::System::String* encodeToCodewords(::System::Text::StringBuilder* sb, ::System::Int32 startPos)
		{
			return ((::System::String*(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODETOCODEWORDS_OFFSET))(sb, startPos);
		}
	};
}
