#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/SymbolShapeHint.h"

namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }
namespace ZXing { class Dimension; }
namespace ZXing::Datamatrix::Encoder { class SymbolInfo; }

#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB39060)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDS_OFFSET UNITYSDK_OFFSET(0x1AB3C8F0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CURRENTCHAR_OFFSET UNITYSDK_OFFSET(0x1AB37F50)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_HASMORECHARACTERS_OFFSET UNITYSDK_OFFSET(0x1AB39030)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1AB3C920)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_NEWENCODING_OFFSET UNITYSDK_OFFSET(0x1AB3C910)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_POS_OFFSET UNITYSDK_OFFSET(0x1AB3C8D0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_REMAININGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1AB3C2E0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_SYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x1AB3C900)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_TOTALMESSAGECHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB3C8B0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETENCODERSIGNAL_OFFSET UNITYSDK_OFFSET(0x1AB3C8A0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETSYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x1AB396B0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSIZECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AB3C870)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSKIPATEND_OFFSET UNITYSDK_OFFSET(0x1AB3C880)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSYMBOLSHAPE_OFFSET UNITYSDK_OFFSET(0x1AB3C860)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SET_POS_OFFSET UNITYSDK_OFFSET(0x1AB3C8E0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SIGNALENCODERCHANGE_OFFSET UNITYSDK_OFFSET(0x1AB3C890)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_1_OFFSET UNITYSDK_OFFSET(0x1AB39080)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x1AB3C240)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORDS_OFFSET UNITYSDK_OFFSET(0x1AB39890)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORD_OFFSET UNITYSDK_OFFSET(0x1AB37EE0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB3C3C0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB3C4A0)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int EncoderContext_TypeDefinitionIndex = 19168;

	class EncoderContext : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(EncoderContext_TypeDefinitionIndex)->GetStaticField(0x8B70);
		}
		::ZXing::Datamatrix::Encoder::SymbolInfo* symbolInfo; // 0x10
		::System::Text::StringBuilder* codewords; // 0x18
		::ZXing::Dimension* maxSize; // 0x20
		::System::String* msg; // 0x28
		::ZXing::Dimension* minSize; // 0x30
		::ZXing::Datamatrix::Encoder::SymbolShapeHint shape; // 0x38
		::System::Int32 pos; // 0x3C
		::System::Int32 skipAtEnd; // 0x40
		::System::Int32 newEncoding; // 0x44

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::String* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CTOR_OFFSET))(this, msg);
		}

		::System::Void setSymbolShape(::ZXing::Datamatrix::Encoder::SymbolShapeHint shape)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::SymbolShapeHint))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSYMBOLSHAPE_OFFSET))(this, shape);
		}

		::System::Void setSizeConstraints(::ZXing::Dimension* minSize, ::ZXing::Dimension* maxSize)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Dimension*, ::ZXing::Dimension*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSIZECONSTRAINTS_OFFSET))(this, minSize, maxSize);
		}

		::System::Void setSkipAtEnd(::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSKIPATEND_OFFSET))(this, count);
		}

		::System::Char get_CurrentChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CURRENTCHAR_OFFSET))(this);
		}

		::System::Void writeCodewords(::System::String* codewords)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORDS_OFFSET))(this, codewords);
		}

		::System::Void writeCodeword(::System::Char codeword)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORD_OFFSET))(this, codeword);
		}

		::System::Int32 get_CodewordCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDCOUNT_OFFSET))(this);
		}

		::System::Void signalEncoderChange(::System::Int32 encoding)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SIGNALENCODERCHANGE_OFFSET))(this, encoding);
		}

		::System::Void resetEncoderSignal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETENCODERSIGNAL_OFFSET))(this);
		}

		::System::Boolean get_HasMoreCharacters()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_HASMORECHARACTERS_OFFSET))(this);
		}

		::System::Int32 get_TotalMessageCharCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_TOTALMESSAGECHARCOUNT_OFFSET))(this);
		}

		::System::Int32 get_RemainingCharacters()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_REMAININGCHARACTERS_OFFSET))(this);
		}

		::System::Void updateSymbolInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_OFFSET))(this);
		}

		::System::Void updateSymbolInfo_1(::System::Int32 len)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_1_OFFSET))(this, len);
		}

		::System::Void resetSymbolInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETSYMBOLINFO_OFFSET))(this);
		}

		::System::Int32 get_Pos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SET_POS_OFFSET))(this, value);
		}

		::System::Text::StringBuilder* get_Codewords()
		{
			return ((::System::Text::StringBuilder*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDS_OFFSET))(this);
		}

		::ZXing::Datamatrix::Encoder::SymbolInfo* get_SymbolInfo()
		{
			return ((::ZXing::Datamatrix::Encoder::SymbolInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_SYMBOLINFO_OFFSET))(this);
		}

		::System::Int32 get_NewEncoding()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_NEWENCODING_OFFSET))(this);
		}

		::System::String* get_Message()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_MESSAGE_OFFSET))(this);
		}
	};
}
