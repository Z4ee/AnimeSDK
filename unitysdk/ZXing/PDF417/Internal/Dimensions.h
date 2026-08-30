#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_PDF417_INTERNAL_DIMENSIONS_GET_MAXCOLS_OFFSET UNITYSDK_OFFSET(0x1F000EF0)
#define ZXING_PDF417_INTERNAL_DIMENSIONS_GET_MAXROWS_OFFSET UNITYSDK_OFFSET(0x1F000F10)
#define ZXING_PDF417_INTERNAL_DIMENSIONS_GET_MINCOLS_OFFSET UNITYSDK_OFFSET(0x1F000EE0)
#define ZXING_PDF417_INTERNAL_DIMENSIONS_GET_MINROWS_OFFSET UNITYSDK_OFFSET(0x1F000F00)

namespace ZXing::PDF417::Internal
{
	inline static constexpr unsigned int Dimensions_TypeDefinitionIndex = 7019;

	class Dimensions : public ::System::Object
	{
	public:
		::System::Int32 maxRows; // 0x10
		::System::Int32 minCols; // 0x14
		::System::Int32 minRows; // 0x18
		::System::Int32 maxCols; // 0x1C

		::System::Int32 get_MinCols()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_DIMENSIONS_GET_MINCOLS_OFFSET))(this);
		}

		::System::Int32 get_MaxCols()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_DIMENSIONS_GET_MAXCOLS_OFFSET))(this);
		}

		::System::Int32 get_MinRows()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_DIMENSIONS_GET_MINROWS_OFFSET))(this);
		}

		::System::Int32 get_MaxRows()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_PDF417_INTERNAL_DIMENSIONS_GET_MAXROWS_OFFSET))(this);
		}
	};
}
