#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::QrCode::Internal { class Version_ECB; }

#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GETECBLOCKS_OFFSET UNITYSDK_OFFSET(0x155766F0)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_ECCODEWORDSPERBLOCK_OFFSET UNITYSDK_OFFSET(0x155766E0)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_NUMBLOCKS_OFFSET UNITYSDK_OFFSET(0x15565930)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_TOTALECCODEWORDS_OFFSET UNITYSDK_OFFSET(0x15565660)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS__CTOR_OFFSET UNITYSDK_OFFSET(0x15576610)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Version_ECBlocks_TypeDefinitionIndex = 6440;

	class Version_ECBlocks : public ::System::Object
	{
	public:
		::Il2CppArray<::ZXing::QrCode::Internal::Version_ECB*>* ecBlocks; // 0x10
		::System::Int32 ecCodewordsPerBlock; // 0x18

		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::ZXing::QrCode::Internal::Version_ECB*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::ZXing::QrCode::Internal::Version_ECB*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_ECCodewordsPerBlock()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_ECCODEWORDSPERBLOCK_OFFSET))(this);
		}

		::System::Int32 get_NumBlocks()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_NUMBLOCKS_OFFSET))(this);
		}

		::System::Int32 get_TotalECCodewords()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_TOTALECCODEWORDS_OFFSET))(this);
		}

		::Il2CppArray<::ZXing::QrCode::Internal::Version_ECB*>* getECBlocks()
		{
			return ((::Il2CppArray<::ZXing::QrCode::Internal::Version_ECB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GETECBLOCKS_OFFSET))(this);
		}
	};
}
