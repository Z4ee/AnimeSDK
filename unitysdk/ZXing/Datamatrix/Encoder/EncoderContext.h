#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/SymbolShapeHint.h"

namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }
namespace ZXing { class Dimension; }
namespace ZXing::Datamatrix::Encoder { class SymbolInfo; }

#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDCOUNT_OFFSET UNITYSDK_OFFSET(0x18863AD0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDS_OFFSET UNITYSDK_OFFSET(0x18867370)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CURRENTCHAR_OFFSET UNITYSDK_OFFSET(0x188629C0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_HASMORECHARACTERS_OFFSET UNITYSDK_OFFSET(0x18863AA0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x188673A0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_NEWENCODING_OFFSET UNITYSDK_OFFSET(0x18867390)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_POS_OFFSET UNITYSDK_OFFSET(0x18867350)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_REMAININGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x18866D60)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_SYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x18867380)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_TOTALMESSAGECHARCOUNT_OFFSET UNITYSDK_OFFSET(0x18867330)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETENCODERSIGNAL_OFFSET UNITYSDK_OFFSET(0x18867320)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETSYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x18864120)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSIZECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x188672F0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSKIPATEND_OFFSET UNITYSDK_OFFSET(0x18867300)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSYMBOLSHAPE_OFFSET UNITYSDK_OFFSET(0x188672E0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SET_POS_OFFSET UNITYSDK_OFFSET(0x18867360)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SIGNALENCODERCHANGE_OFFSET UNITYSDK_OFFSET(0x18867310)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_1_OFFSET UNITYSDK_OFFSET(0x18863AF0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x18866CC0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORDS_OFFSET UNITYSDK_OFFSET(0x18864300)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORD_OFFSET UNITYSDK_OFFSET(0x18862950)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x18866E40)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18866F20)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int EncoderContext_TypeDefinitionIndex = 8670;

	class EncoderContext : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(EncoderContext_TypeDefinitionIndex)->GetStaticField(0x7930);
		}
		::System::String* msg; // 0x10
		::ZXing::Dimension* minSize; // 0x18
		::ZXing::Datamatrix::Encoder::SymbolInfo* symbolInfo; // 0x20
		::System::Text::StringBuilder* codewords; // 0x28
		::ZXing::Dimension* maxSize; // 0x30
		::System::Int32 newEncoding; // 0x38
		::System::Int32 pos; // 0x3C
		::ZXing::Datamatrix::Encoder::SymbolShapeHint shape; // 0x40
		::System::Int32 skipAtEnd; // 0x44

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
