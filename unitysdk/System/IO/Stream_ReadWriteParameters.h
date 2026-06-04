#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::IO
{
	inline static constexpr unsigned int Stream_ReadWriteParameters_TypeDefinitionIndex = 682;

	struct alignas(8) Stream_ReadWriteParameters
	{
		::Il2CppArray<::System::Byte>* Buffer; // 0x10
		::System::Int32 Offset; // 0x18
		::System::Int32 Count; // 0x1C
	};
}
