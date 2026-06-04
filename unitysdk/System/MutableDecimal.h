#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define SYSTEM_MUTABLEDECIMAL_GET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x3828760)
#define SYSTEM_MUTABLEDECIMAL_GET_SCALE_OFFSET UNITYSDK_OFFSET(0x3837310)
#define SYSTEM_MUTABLEDECIMAL_SET_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x3868C40)
#define SYSTEM_MUTABLEDECIMAL_SET_SCALE_OFFSET UNITYSDK_OFFSET(0x3868C60)

namespace System
{
	inline static constexpr unsigned int MutableDecimal_TypeDefinitionIndex = 4945;

	struct alignas(4) MutableDecimal
	{
		::System::UInt32 Flags; // 0x10
		::System::UInt32 High; // 0x14
		::System::UInt32 Low; // 0x18
		::System::UInt32 Mid; // 0x1C

		::System::Boolean get_IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_GET_ISNEGATIVE_OFFSET))(this);
		}

		::System::Void set_IsNegative(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_SET_ISNEGATIVE_OFFSET))(this, a1);
		}

		::System::Int32 get_Scale()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_GET_SCALE_OFFSET))(this);
		}

		::System::Void set_Scale(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_MUTABLEDECIMAL_SET_SCALE_OFFSET))(this, a1);
		}
	};
}
