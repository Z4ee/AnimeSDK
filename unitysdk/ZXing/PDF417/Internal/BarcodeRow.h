#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_PDF417_INTERNAL_BARCODEROW_ADDBAR_OFFSET UNITYSDK_OFFSET(0x1BE96C80)
#define ZXING_PDF417_INTERNAL_BARCODEROW_GETSCALEDROW_OFFSET UNITYSDK_OFFSET(0x1BE96B60)
#define ZXING_PDF417_INTERNAL_BARCODEROW_SET_OFFSET UNITYSDK_OFFSET(0x1BE96C40)
#define ZXING_PDF417_INTERNAL_BARCODEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE96890)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int BarcodeRow_TypeDefinitionIndex = 19481;

	class BarcodeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::SByte>* row; // 0x10
		::System::Int32 currentLocation; // 0x18

		::System::Void _ctor(::System::Int32 width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW__CTOR_OFFSET))(this, width);
		}

		::System::Void set(::System::Int32 x, ::System::Boolean black)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_SET_OFFSET))(this, x, black);
		}

		::System::Void addBar(::System::Boolean black, ::System::Int32 width)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_ADDBAR_OFFSET))(this, black, width);
		}

		::Il2CppArray<::System::SByte>* getScaledRow(::System::Int32 scale)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_GETSCALEDROW_OFFSET))(this, scale);
		}
	};
}
