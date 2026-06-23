#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightDataEnableChange_TypeDefinitionIndex = 26819;

	struct alignas(4) LightDataEnableChange
	{
		::System::Int32 index; // 0x10
		::System::Boolean enable; // 0x14
	};
}
