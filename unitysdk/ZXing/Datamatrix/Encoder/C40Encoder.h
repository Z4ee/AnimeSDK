#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Text { class StringBuilder; }
namespace ZXing::Datamatrix::Encoder { class EncoderContext; }

#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_BACKTRACKONECHARACTER_OFFSET UNITYSDK_OFFSET(0x16D4E330)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODECHAR_OFFSET UNITYSDK_OFFSET(0x16D4EB10)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODETOCODEWORDS_OFFSET UNITYSDK_OFFSET(0x16D4E4C0)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODE_OFFSET UNITYSDK_OFFSET(0x16D4DD70)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_GET_ENCODINGMODE_OFFSET UNITYSDK_OFFSET(0x16D4DD60)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_HANDLEEOD_OFFSET UNITYSDK_OFFSET(0x16D4E600)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER_WRITENEXTTRIPLET_OFFSET UNITYSDK_OFFSET(0x16D4E460)
#define ZXING_DATAMATRIX_ENCODER_C40ENCODER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D4F020)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int C40Encoder_TypeDefinitionIndex = 7010;

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

		::System::Void encode(::ZXing::Datamatrix::Encoder::EncoderContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODE_OFFSET))(this, a1);
		}

		::System::Int32 backtrackOneCharacter(::ZXing::Datamatrix::Encoder::EncoderContext* a1, ::System::Text::StringBuilder* a2, ::System::Text::StringBuilder* a3, ::System::Int32 a4)
		{
			return ((::System::Int32(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_BACKTRACKONECHARACTER_OFFSET))(this, a1, a2, a3, a4);
		}

		static ::System::Void writeNextTriplet(::ZXing::Datamatrix::Encoder::EncoderContext* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_WRITENEXTTRIPLET_OFFSET))(a1, a2);
		}

		::System::Void handleEOD(::ZXing::Datamatrix::Encoder::EncoderContext* a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::EncoderContext*, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_HANDLEEOD_OFFSET))(this, a1, a2);
		}

		::System::Int32 encodeChar(::System::Char a1, ::System::Text::StringBuilder* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Char, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODECHAR_OFFSET))(this, a1, a2);
		}

		static ::System::String* encodeToCodewords(::System::Text::StringBuilder* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_C40ENCODER_ENCODETOCODEWORDS_OFFSET))(a1, a2);
		}
	};
}
