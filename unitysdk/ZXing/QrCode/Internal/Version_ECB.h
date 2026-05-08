#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_QRCODE_INTERNAL_VERSION_ECB_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1889F080)
#define ZXING_QRCODE_INTERNAL_VERSION_ECB_GET_DATACODEWORDS_OFFSET UNITYSDK_OFFSET(0x1889F090)
#define ZXING_QRCODE_INTERNAL_VERSION_ECB__CTOR_OFFSET UNITYSDK_OFFSET(0x1889EFA0)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Version_ECB_TypeDefinitionIndex = 8628;

	class Version_ECB : public ::System::Object
	{
	public:
		::System::Int32 count; // 0x10
		::System::Int32 dataCodewords; // 0x14

		::System::Void _ctor(::System::Int32 count, ::System::Int32 dataCodewords)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECB__CTOR_OFFSET))(this, count, dataCodewords);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECB_GET_COUNT_OFFSET))(this);
		}

		::System::Int32 get_DataCodewords()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECB_GET_DATACODEWORDS_OFFSET))(this);
		}
	};
}
