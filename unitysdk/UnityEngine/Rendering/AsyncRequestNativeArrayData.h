#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int AsyncRequestNativeArrayData_TypeDefinitionIndex = 6136;

	struct alignas(8) AsyncRequestNativeArrayData
	{
		::System::Void* nativeArrayBuffer; // 0x10
		::System::Int64 lengthInBytes; // 0x18
	};
}
