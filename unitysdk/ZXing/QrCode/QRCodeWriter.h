#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::QrCode::Internal { class QRCode; }

#define ZXING_QRCODE_QRCODEWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x1BEB4EB0)
#define ZXING_QRCODE_QRCODEWRITER_RENDERRESULT_OFFSET UNITYSDK_OFFSET(0x1BEB5540)
#define ZXING_QRCODE_QRCODEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE82360)

namespace ZXing::QrCode
{
	inline static constexpr unsigned int QRCodeWriter_TypeDefinitionIndex = 19494;

	class QRCodeWriter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* contents, ::ZXing::BarcodeFormat format, ::System::Int32 width, ::System::Int32 height, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* hints)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEWRITER_ENCODE_OFFSET))(this, contents, format, width, height, hints);
		}

		static ::ZXing::Common::BitMatrix* renderResult(::ZXing::QrCode::Internal::QRCode* code, ::System::Int32 width, ::System::Int32 height, ::System::Int32 quietZone)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::QrCode::Internal::QRCode*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEWRITER_RENDERRESULT_OFFSET))(code, width, height, quietZone);
		}
	};
}
