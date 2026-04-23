#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Text { class StringBuilder; }

#define SYSTEM_NUMERICS_BIGNUMBER_BIGNUMBERBUFFER_CREATE_OFFSET UNITYSDK_OFFSET(0x19F8D980)

namespace System::Numerics
{
	inline static constexpr unsigned int BigNumber_BigNumberBuffer_TypeDefinitionIndex = 4861;

	struct alignas(8) BigNumber_BigNumberBuffer
	{
		::System::Text::StringBuilder* digits; // 0x10
		::System::Int32 precision; // 0x18
		::System::Int32 scale; // 0x1C
		::System::Boolean sign; // 0x20

		static ::System::Numerics::BigNumber_BigNumberBuffer Create()
		{
			return ((::System::Numerics::BigNumber_BigNumberBuffer(*)())((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BIGNUMBER_BIGNUMBERBUFFER_CREATE_OFFSET))();
		}
	};
}
