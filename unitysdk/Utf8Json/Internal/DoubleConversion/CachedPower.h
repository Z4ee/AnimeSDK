#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UTF8JSON_INTERNAL_DOUBLECONVERSION_CACHEDPOWER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA92B0)

namespace Utf8Json::Internal::DoubleConversion
{
	inline static constexpr unsigned int CachedPower_TypeDefinitionIndex = 95202;

	struct alignas(8) CachedPower
	{
		::System::UInt64 significand; // 0x10
		::System::Int16 binary_exponent; // 0x18
		::System::Int16 decimal_exponent; // 0x1A

		::System::Void _ctor(::System::UInt64 significand, ::System::Int16 binary_exponent, ::System::Int16 decimal_exponent)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64, ::System::Int16, ::System::Int16))((::PBYTE)hIl2Cpp + UTF8JSON_INTERNAL_DOUBLECONVERSION_CACHEDPOWER__CTOR_OFFSET))(this, significand, binary_exponent, decimal_exponent);
		}
	};
}
