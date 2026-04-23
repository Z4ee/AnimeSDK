#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color32.h"
#include "unitysdk/ZXing/BarcodeWriterGeneric_1.h"

#define ZXING_BARCODEWRITER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A73C7F0)

namespace ZXing
{
	inline static constexpr unsigned int BarcodeWriter_TypeDefinitionIndex = 6039;

	class BarcodeWriter : public ::ZXing::BarcodeWriterGeneric_1<::Il2CppArray<::UnityEngine::Color32>*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_BARCODEWRITER__CTOR_OFFSET))(this);
		}
	};
}
