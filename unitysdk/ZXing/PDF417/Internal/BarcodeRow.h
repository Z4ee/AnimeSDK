#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_PDF417_INTERNAL_BARCODEROW_ADDBAR_OFFSET UNITYSDK_OFFSET(0x1B561A50)
#define ZXING_PDF417_INTERNAL_BARCODEROW_GETSCALEDROW_OFFSET UNITYSDK_OFFSET(0x1B561980)
#define ZXING_PDF417_INTERNAL_BARCODEROW_SET_OFFSET UNITYSDK_OFFSET(0x1B561A20)
#define ZXING_PDF417_INTERNAL_BARCODEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B561720)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int BarcodeRow_TypeDefinitionIndex = 6446;

	class BarcodeRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::SByte>* row; // 0x10
		::System::Int32 currentLocation; // 0x18

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW__CTOR_OFFSET))(this, a1);
		}

		::System::Void set(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_SET_OFFSET))(this, a1, a2);
		}

		::System::Void addBar(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_ADDBAR_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::System::SByte>* getScaledRow(::System::Int32 a1)
		{
			return ((::Il2CppArray<::System::SByte>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEROW_GETSCALEDROW_OFFSET))(this, a1);
		}
	};
}
