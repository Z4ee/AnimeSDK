#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Decimal.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16392290)
#define SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x16392210)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DecimalConstantAttribute_TypeDefinitionIndex = 1372;

	class DecimalConstantAttribute : public ::System::Attribute
	{
	public:
		::System::Decimal dec; // 0x10

		::System::Void _ctor(::System::Byte scale, ::System::Byte sign, ::System::UInt32 hi, ::System::UInt32 mid, ::System::UInt32 low)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE__CTOR_OFFSET))(this, scale, sign, hi, mid, low);
		}

		::System::Decimal get_Value()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}
