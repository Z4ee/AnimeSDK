#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int CubeLightBakeOnly_LightProxyConfig_TypeDefinitionIndex = 29836;

	struct alignas(8) CubeLightBakeOnly_LightProxyConfig
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 eulerAngle; // 0x1C
		::System::String* name; // 0x28
		::System::Int32 index; // 0x30
	};
}
