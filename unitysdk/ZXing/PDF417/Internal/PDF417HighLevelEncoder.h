#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/PDF417/Internal/Compaction.h"

namespace System { class String; }
namespace System::Text { class Encoding; }
namespace System::Text { class StringBuilder; }

#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVEBINARYCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB5BA40)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVEDIGITCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB5B460)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVETEXTCOUNT_OFFSET UNITYSDK_OFFSET(0x1AB5B660)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODEBINARY_OFFSET UNITYSDK_OFFSET(0x1AB5A9B0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODEHIGHLEVEL_OFFSET UNITYSDK_OFFSET(0x1AB57470)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODENUMERIC_OFFSET UNITYSDK_OFFSET(0x1AB5AF60)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODETEXT_OFFSET UNITYSDK_OFFSET(0x1AB59A40)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODINGECI_OFFSET UNITYSDK_OFFSET(0x1AB59790)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_GETENCODER_OFFSET UNITYSDK_OFFSET(0x1AB5C790)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISALPHALOWER_OFFSET UNITYSDK_OFFSET(0x1AB5CB60)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISALPHAUPPER_OFFSET UNITYSDK_OFFSET(0x1AB5CB40)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISDIGIT_OFFSET UNITYSDK_OFFSET(0x1AB5CCC0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISMIXED_OFFSET UNITYSDK_OFFSET(0x1AB5CB80)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISPUNCTUATION_OFFSET UNITYSDK_OFFSET(0x1AB5CC20)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISTEXT_OFFSET UNITYSDK_OFFSET(0x1AB5CCD0)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_TOBYTES_1_OFFSET UNITYSDK_OFFSET(0x1AB5CA80)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_TOBYTES_OFFSET UNITYSDK_OFFSET(0x1AB5A920)
#define ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB593D0)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int PDF417HighLevelEncoder_TypeDefinitionIndex = 19182;

	class PDF417HighLevelEncoder : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::SByte>** StaticGet_MIXED()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(PDF417HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x8DF0);
		}
		static ::System::String** StaticGet_DEFAULT_ENCODING_NAME()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PDF417HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x8DF8);
		}
		static ::Il2CppArray<::System::SByte>** StaticGet_Field_1_3()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(PDF417HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x8E00);
		}
		static ::Il2CppArray<::System::SByte>** StaticGet_TEXT_MIXED_RAW()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(PDF417HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x8E08);
		}
		static ::Il2CppArray<::System::SByte>** StaticGet_TEXT_PUNCTUATION_RAW()
		{
			return (::Il2CppArray<::System::SByte>**)Il2CppClass::FromTypeDefinitionIndex(PDF417HighLevelEncoder_TypeDefinitionIndex)->GetStaticField(0x8E10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER__CCTOR_OFFSET))();
		}

		static ::System::String* encodeHighLevel(::System::String* msg, ::ZXing::PDF417::Internal::Compaction compaction, ::System::Text::Encoding* encoding, ::System::Boolean disableEci)
		{
			return ((::System::String*(*)(::System::String*, ::ZXing::PDF417::Internal::Compaction, ::System::Text::Encoding*, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODEHIGHLEVEL_OFFSET))(msg, compaction, encoding, disableEci);
		}

		static ::System::Text::Encoding* getEncoder(::System::Text::Encoding* encoding)
		{
			return ((::System::Text::Encoding*(*)(::System::Text::Encoding*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_GETENCODER_OFFSET))(encoding);
		}

		static ::Il2CppArray<::System::Byte>* toBytes(::System::String* msg, ::System::Text::Encoding* encoding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::String*, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_TOBYTES_OFFSET))(msg, encoding);
		}

		static ::Il2CppArray<::System::Byte>* toBytes_1(::System::Char msg, ::System::Text::Encoding* encoding)
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::System::Char, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_TOBYTES_1_OFFSET))(msg, encoding);
		}

		static ::System::Int32 encodeText(::System::String* msg, ::System::Int32 startpos, ::System::Int32 count, ::System::Text::StringBuilder* sb, ::System::Int32 initialSubmode)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODETEXT_OFFSET))(msg, startpos, count, sb, initialSubmode);
		}

		static ::System::Void encodeBinary(::Il2CppArray<::System::Byte>* bytes, ::System::Int32 startpos, ::System::Int32 count, ::System::Int32 startmode, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODEBINARY_OFFSET))(bytes, startpos, count, startmode, sb);
		}

		static ::System::Void encodeNumeric(::System::String* msg, ::System::Int32 startpos, ::System::Int32 count, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::String*, ::System::Int32, ::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODENUMERIC_OFFSET))(msg, startpos, count, sb);
		}

		static ::System::Boolean isDigit(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISDIGIT_OFFSET))(ch);
		}

		static ::System::Boolean isAlphaUpper(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISALPHAUPPER_OFFSET))(ch);
		}

		static ::System::Boolean isAlphaLower(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISALPHALOWER_OFFSET))(ch);
		}

		static ::System::Boolean isMixed(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISMIXED_OFFSET))(ch);
		}

		static ::System::Boolean isPunctuation(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISPUNCTUATION_OFFSET))(ch);
		}

		static ::System::Boolean isText(::System::Char ch)
		{
			return ((::System::Boolean(*)(::System::Char))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ISTEXT_OFFSET))(ch);
		}

		static ::System::Int32 determineConsecutiveDigitCount(::System::String* msg, ::System::Int32 startpos)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVEDIGITCOUNT_OFFSET))(msg, startpos);
		}

		static ::System::Int32 determineConsecutiveTextCount(::System::String* msg, ::System::Int32 startpos)
		{
			return ((::System::Int32(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVETEXTCOUNT_OFFSET))(msg, startpos);
		}

		static ::System::Int32 determineConsecutiveBinaryCount(::System::String* msg, ::Il2CppArray<::System::Byte>* bytes, ::System::Int32 startpos, ::System::Text::Encoding* encoding)
		{
			return ((::System::Int32(*)(::System::String*, ::Il2CppArray<::System::Byte>*, ::System::Int32, ::System::Text::Encoding*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_DETERMINECONSECUTIVEBINARYCOUNT_OFFSET))(msg, bytes, startpos, encoding);
		}

		static ::System::Void encodingECI(::System::Int32 eci, ::System::Text::StringBuilder* sb)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Text::StringBuilder*))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_PDF417HIGHLEVELENCODER_ENCODINGECI_OFFSET))(eci, sb);
		}
	};
}
