#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int GlobalSDFSettings_TypeDefinitionIndex = 4840;

	struct alignas(4) GlobalSDFSettings
	{
		::System::Boolean Enable; // 0x10
		::System::Int32 VisualizeMethod; // 0x14
		::System::Boolean DisableIncrementalUpdate; // 0x18
		::System::Boolean Debug; // 0x19
	};
}
