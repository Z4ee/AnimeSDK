#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ZXING_COMMON_ECI_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B53F240)
#define ZXING_COMMON_ECI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B53F100)

namespace ZXing::Common
{
	inline static constexpr unsigned int ECI_TypeDefinitionIndex = 6409;

	class ECI : public ::System::Object
	{
	public:
		::System::Int32 value_Renamed; // 0x10

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ZXING_COMMON_ECI__CTOR_OFFSET))(this, a1);
		}

		::System::Int32 get_Value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ZXING_COMMON_ECI_GET_VALUE_OFFSET))(this);
		}
	};
}
