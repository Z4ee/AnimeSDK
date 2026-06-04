#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/Datamatrix/Encoder/SymbolShapeHint.h"

namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }
namespace ZXing { class Dimension; }
namespace ZXing::Datamatrix::Encoder { class SymbolInfo; }

#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDCOUNT_OFFSET UNITYSDK_OFFSET(0x1B546A90)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDS_OFFSET UNITYSDK_OFFSET(0x1B54B060)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CURRENTCHAR_OFFSET UNITYSDK_OFFSET(0x1B545A40)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_HASMORECHARACTERS_OFFSET UNITYSDK_OFFSET(0x1B546A60)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_MESSAGE_OFFSET UNITYSDK_OFFSET(0x1B54B090)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_NEWENCODING_OFFSET UNITYSDK_OFFSET(0x1B54B080)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_POS_OFFSET UNITYSDK_OFFSET(0x1B54B040)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_REMAININGCHARACTERS_OFFSET UNITYSDK_OFFSET(0x1B54A9B0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_SYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x1B54B070)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_TOTALMESSAGECHARCOUNT_OFFSET UNITYSDK_OFFSET(0x1B54B020)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETENCODERSIGNAL_OFFSET UNITYSDK_OFFSET(0x1B54B010)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETSYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x1B547080)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSIZECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1B54AFE0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSKIPATEND_OFFSET UNITYSDK_OFFSET(0x1B54AFF0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSYMBOLSHAPE_OFFSET UNITYSDK_OFFSET(0x1B54AFD0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SET_POS_OFFSET UNITYSDK_OFFSET(0x1B54B050)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SIGNALENCODERCHANGE_OFFSET UNITYSDK_OFFSET(0x1B54B000)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_1_OFFSET UNITYSDK_OFFSET(0x1B546AB0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_OFFSET UNITYSDK_OFFSET(0x1B54A910)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORDS_OFFSET UNITYSDK_OFFSET(0x1B547280)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORD_OFFSET UNITYSDK_OFFSET(0x1B5459A0)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B54AA90)
#define ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54AB40)

namespace ZXing::Datamatrix::Encoder
{
	inline static constexpr unsigned int EncoderContext_TypeDefinitionIndex = 6478;

	class EncoderContext : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_encoding()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(EncoderContext_TypeDefinitionIndex)->GetStaticField(0x36F0);
		}
		::System::String* msg; // 0x10
		::ZXing::Datamatrix::Encoder::SymbolInfo* symbolInfo; // 0x18
		::ZXing::Dimension* maxSize; // 0x20
		::ZXing::Dimension* minSize; // 0x28
		::System::Text::StringBuilder* codewords; // 0x30
		::ZXing::Datamatrix::Encoder::SymbolShapeHint shape; // 0x38
		::System::Int32 pos; // 0x3C
		::System::Int32 skipAtEnd; // 0x40
		::System::Int32 newEncoding; // 0x44

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CCTOR_OFFSET))();
		}

		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT__CTOR_OFFSET))(this, a1);
		}

		::System::Void setSymbolShape(::ZXing::Datamatrix::Encoder::SymbolShapeHint a1)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Datamatrix::Encoder::SymbolShapeHint))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSYMBOLSHAPE_OFFSET))(this, a1);
		}

		::System::Void setSizeConstraints(::ZXing::Dimension* a1, ::ZXing::Dimension* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ZXing::Dimension*, ::ZXing::Dimension*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSIZECONSTRAINTS_OFFSET))(this, a1, a2);
		}

		::System::Void setSkipAtEnd(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SETSKIPATEND_OFFSET))(this, a1);
		}

		::System::Char get_CurrentChar()
		{
			return ((::System::Char(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CURRENTCHAR_OFFSET))(this);
		}

		::System::Void writeCodewords(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORDS_OFFSET))(this, a1);
		}

		::System::Void writeCodeword(::System::Char a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_WRITECODEWORD_OFFSET))(this, a1);
		}

		::System::Int32 get_CodewordCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_CODEWORDCOUNT_OFFSET))(this);
		}

		::System::Void signalEncoderChange(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SIGNALENCODERCHANGE_OFFSET))(this, a1);
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

		::System::Void updateSymbolInfo_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_UPDATESYMBOLINFO_1_OFFSET))(this, a1);
		}

		::System::Void resetSymbolInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_RESETSYMBOLINFO_OFFSET))(this);
		}

		::System::Int32 get_Pos()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_GET_POS_OFFSET))(this);
		}

		::System::Void set_Pos(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_DATAMATRIX_ENCODER_ENCODERCONTEXT_SET_POS_OFFSET))(this, a1);
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
