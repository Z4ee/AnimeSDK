#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::QrCode::Internal { class Version_ECB; }

#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GETECBLOCKS_OFFSET UNITYSDK_OFFSET(0x18D40570)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_ECCODEWORDSPERBLOCK_OFFSET UNITYSDK_OFFSET(0x18D40560)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_NUMBLOCKS_OFFSET UNITYSDK_OFFSET(0x18D2DF20)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS_GET_TOTALECCODEWORDS_OFFSET UNITYSDK_OFFSET(0x18D2DC50)
#define ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS__CTOR_OFFSET UNITYSDK_OFFSET(0x18D40490)

namespace ZXing::QrCode::Internal
{
	inline static constexpr unsigned int Version_ECBlocks_TypeDefinitionIndex = 6050;

	class Version_ECBlocks : public ::System::Object
	{
	public:
		::Il2CppArray<::ZXing::QrCode::Internal::Version_ECB*>* ecBlocks; // 0x10
		::System::Int32 ecCodewordsPerBlock; // 0x18

		::System::Void _ctor(::System::Int32 ecCodewordsPerBlock, ::Il2CppArray<::ZXing::QrCode::Internal::Version_ECB*>* ecBlocks)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::ZXing::QrCode::Internal::Version_ECB*>*))((::PBYTE)hIl2Cpp + ZXING_QRCODE_INTERNAL_VERSION_ECBLOCKS__CTOR_OFFSET))(this, ecCodewordsPerBlock, ecBlocks);
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
