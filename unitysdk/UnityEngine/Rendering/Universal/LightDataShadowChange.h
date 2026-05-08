#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LightShadows.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightDataShadowChange_TypeDefinitionIndex = 30011;

	struct alignas(4) LightDataShadowChange
	{
		::System::Int32 index; // 0x10
		::UnityEngine::LightShadows shadow; // 0x14
	};
}
