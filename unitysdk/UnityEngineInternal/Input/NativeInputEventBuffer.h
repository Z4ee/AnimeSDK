#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngineInternal::Input
{
	inline static constexpr unsigned int NativeInputEventBuffer_TypeDefinitionIndex = 5710;

	struct alignas(1) NativeInputEventBuffer
	{
		::System::Void* eventBuffer; // 0x10
		::System::Int32 eventCount; // 0x18
		::System::Int32 sizeInBytes; // 0x1C
		::System::Int32 capacityInBytes; // 0x20
	};
}
