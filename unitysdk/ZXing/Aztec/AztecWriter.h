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

#define ZXING_AZTEC_AZTECWRITER_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x16D3AEC0)
#define ZXING_AZTEC_AZTECWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x16D3A710)
#define ZXING_AZTEC_AZTECWRITER_RENDERRESULT_OFFSET UNITYSDK_OFFSET(0x16D3C1C0)
#define ZXING_AZTEC_AZTECWRITER__CCTOR_OFFSET UNITYSDK_OFFSET(0x16D3A660)
#define ZXING_AZTEC_AZTECWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x16D3C630)

namespace ZXing::Aztec
{
	inline static constexpr unsigned int AztecWriter_TypeDefinitionIndex = 7030;

	class AztecWriter : public ::System::Object
	{
	public:
		static ::System::Text::Encoding** StaticGet_DEFAULT_CHARSET()
		{
			return (::System::Text::Encoding**)Il2CppClass::FromTypeDefinitionIndex(AztecWriter_TypeDefinitionIndex)->GetStaticField(0x2FED0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::ZXing::Common::BitMatrix* encode_1(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Text::Encoding* a5, ::System::Int32 a6, ::System::Int32 a7)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Text::Encoding*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER_ENCODE_1_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::ZXing::Common::BitMatrix* renderResult(::ZXing::Aztec::Internal::AztecCode* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::Aztec::Internal::AztecCode*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_AZTEC_AZTECWRITER_RENDERRESULT_OFFSET))(a1, a2, a3);
		}
	};
}
