#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ZXing/BarcodeFormat.h"
#include "unitysdk/ZXing/EncodeHintType.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace ZXing::Common { class BitMatrix; }
namespace ZXing::QrCode::Internal { class QRCode; }

#define ZXING_QRCODE_QRCODEWRITER_ENCODE_OFFSET UNITYSDK_OFFSET(0x15576700)
#define ZXING_QRCODE_QRCODEWRITER_RENDERRESULT_OFFSET UNITYSDK_OFFSET(0x15576FC0)
#define ZXING_QRCODE_QRCODEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x15548110)

namespace ZXing::QrCode
{
	inline static constexpr unsigned int QRCodeWriter_TypeDefinitionIndex = 6464;

	class QRCodeWriter : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEWRITER__CTOR_OFFSET))(this);
		}

		::ZXing::Common::BitMatrix* encode(::System::String* a1, ::ZXing::BarcodeFormat a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>* a5)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::PVOID, ::System::String*, ::ZXing::BarcodeFormat, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IDictionary_2<::ZXing::EncodeHintType, ::System::Object*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEWRITER_ENCODE_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::ZXing::Common::BitMatrix* renderResult(::ZXing::QrCode::Internal::QRCode* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::ZXing::Common::BitMatrix*(*)(::ZXing::QrCode::Internal::QRCode*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEWRITER_RENDERRESULT_OFFSET))(a1, a2, a3, a4);
		}
	};
}
