#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_DIMENSION_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1AB40C90)
#define ZXING_DIMENSION_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1AB40C80)

namespace ZXing
{
	inline static constexpr unsigned int Dimension_TypeDefinitionIndex = 19140;

	class Dimension : public ::System::Object
	{
	public:
		::System::Int32 height; // 0x10
		::System::Int32 width; // 0x14

		::System::Int32 get_Width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DIMENSION_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_Height()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_DIMENSION_GET_HEIGHT_OFFSET))(this);
		}
	};
}
