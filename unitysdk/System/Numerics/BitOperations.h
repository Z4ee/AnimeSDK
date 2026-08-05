#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NUMERICS_BITOPERATIONS_ROTATELEFT_OFFSET UNITYSDK_OFFSET(0x1EAA2020)

namespace System::Numerics
{
	inline static constexpr unsigned int BitOperations_TypeDefinitionIndex = 31441;

	class BitOperations : public ::System::Object
	{
	public:
		static ::System::UInt32 RotateLeft(::System::UInt32 value, ::System::Int32 offset)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_NUMERICS_BITOPERATIONS_ROTATELEFT_OFFSET))(value, offset);
		}
	};
}
