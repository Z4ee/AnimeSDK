#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ZXing::PDF417::Internal { class BarcodeRow; }

#define ZXING_PDF417_INTERNAL_BARCODEMATRIX_GETCURRENTROW_OFFSET UNITYSDK_OFFSET(0x1B561760)
#define ZXING_PDF417_INTERNAL_BARCODEMATRIX_GETSCALEDMATRIX_OFFSET UNITYSDK_OFFSET(0x1B561790)
#define ZXING_PDF417_INTERNAL_BARCODEMATRIX_STARTROW_OFFSET UNITYSDK_OFFSET(0x1B561750)
#define ZXING_PDF417_INTERNAL_BARCODEMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x1B561620)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int BarcodeMatrix_TypeDefinitionIndex = 6463;

	class BarcodeMatrix : public ::System::Object
	{
	public:
		::Il2CppArray<::ZXing::PDF417::Internal::BarcodeRow*>* matrix; // 0x10
		::System::Int32 width; // 0x18
		::System::Int32 currentRow; // 0x1C
		::System::Int32 height; // 0x20

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEMATRIX__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void startRow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEMATRIX_STARTROW_OFFSET))(this);
		}

		::ZXing::PDF417::Internal::BarcodeRow* getCurrentRow()
		{
			return ((::ZXing::PDF417::Internal::BarcodeRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEMATRIX_GETCURRENTROW_OFFSET))(this);
		}

		::Il2CppArray<::Il2CppArray<::System::SByte>*>* getScaledMatrix(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::Il2CppArray<::Il2CppArray<::System::SByte>*>*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_BARCODEMATRIX_GETSCALEDMATRIX_OFFSET))(this, a1, a2);
		}
	};
}
