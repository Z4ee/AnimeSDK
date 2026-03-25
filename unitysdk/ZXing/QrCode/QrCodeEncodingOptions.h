#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZXing/Common/EncodingOptions.h"

namespace System { class String; }

#define ZXING_QRCODE_QRCODEENCODINGOPTIONS_SET_CHARACTERSET_OFFSET UNITYSDK_OFFSET(0x18D40E00)
#define ZXING_QRCODE_QRCODEENCODINGOPTIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x18D41030)

namespace ZXing::QrCode
{
	inline static constexpr unsigned int QrCodeEncodingOptions_TypeDefinitionIndex = 6067;

	class QrCodeEncodingOptions : public ::ZXing::Common::EncodingOptions
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEENCODINGOPTIONS__CTOR_OFFSET))(this);
		}

		::System::Void set_CharacterSet(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_QRCODEENCODINGOPTIONS_SET_CHARACTERSET_OFFSET))(this, value);
		}
	};
}
