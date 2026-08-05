#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobData_TypeDefinitionIndex = 27528;

	struct alignas(4) LightLodJobData
	{
		::System::Int32 transformId; // 0x10
		::System::Int32 layer; // 0x14
		::System::Int32 lightInstanceId; // 0x18
	};
}
