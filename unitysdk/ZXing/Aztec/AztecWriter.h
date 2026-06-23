#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Text { class Encoding; }
namespace ZXing::Aztec::Internal { class AztecCode; }
namespace ZXing::Common { class BitMatrix; }

#define ZXING_AZTEC_AZTECWRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x1AB25700)
#define ZXING_AZTEC_AZTECWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1AB251F0)
#define ZXING_AZTEC_AZTECWRITER_RENDERRESULT_OFFSET UNITYSDK_OFFSET(0x1AB26B20)
#define ZXING_AZTEC_AZTECWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB25110)
#define ZXING_AZTEC_AZTECWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB26FB0)

namespace ZXing::Aztec
{
	inline static constexpr unsigned int AztecWriter_TypeDefinitionIndex = 19170;

	class AztecWriter : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_DEFAULT_CHARSET()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(AztecWriter_TypeDefinitionIndex)->GetStaticField(0x8AB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		static ::ZXing::Common::BitMatrix* encode_1(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Text::Encoding* charset, ::System::Int32 eccPercent, ::System::Int32 layers)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Text::Encoding*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER_ENCODE_1_OFFSET))(contents, format, width, height, charset, eccPercent, layers);
		}

		static ::ZXing::Common::BitMatrix* renderResult(::ZXing::Aztec::Internal::AztecCode* code, ::System::Int32 width, ::System::Int32 height)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::Aztec::Internal::AztecCode*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER_RENDERRESULT_OFFSET))(code, width, height);
		}
	};
}
