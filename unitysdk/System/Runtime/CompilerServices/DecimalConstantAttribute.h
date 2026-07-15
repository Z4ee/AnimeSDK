#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
#include "unitysdk/System/Decimal.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1A824230)
#define SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8241B0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int DecimalConstantAttribute_TypeDefinitionIndex = 1377;

	class DecimalConstantAttribute : public ::System::Attribute
	{
	public:
		::System::Decimal dec; // 0x10

		::System::Void _ctor(::System::Byte a1, ::System::Byte a2, ::System::UInt32 a3, ::System::UInt32 a4, ::System::UInt32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte, ::System::Byte, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Decimal get_Value()
		{
			return ((::System::Decimal(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_DECIMALCONSTANTATTRIBUTE_GET_VALUE_OFFSET))(this);
		}
	};
}
