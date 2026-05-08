#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_DATA_RANGE_CHECKNULL_OFFSET UNITYSDK_OFFSET(0x8819D0)
#define SYSTEM_DATA_RANGE_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x881960)
#define SYSTEM_DATA_RANGE_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0x5784D0)
#define SYSTEM_DATA_RANGE_GET_MIN_OFFSET UNITYSDK_OFFSET(0x881980)
#define SYSTEM_DATA_RANGE__CTOR_OFFSET UNITYSDK_OFFSET(0x881900)

namespace System::Data
{
	inline static constexpr unsigned int Range_TypeDefinitionIndex = 37044;

	struct alignas(4) Range
	{
		::System::Int32 _min; // 0x10
		::System::Int32 _max; // 0x14
		::System::Boolean _isNotNull; // 0x18

		::System::Void _ctor(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE__CTOR_OFFSET))(this, min, max);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_GET_ISNULL_OFFSET))(this);
		}

		::System::Int32 get_Min()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_GET_MIN_OFFSET))(this);
		}

		::System::Void CheckNull()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_RANGE_CHECKNULL_OFFSET))(this);
		}
	};
}
