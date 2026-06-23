#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/FalloffType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LightMode.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LinearColor.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int PointLight_TypeDefinitionIndex = 6313;

	struct alignas(4) PointLight
	{
		::System::Int32 instanceID; // 0x10
		::System::Boolean shadow; // 0x14
		::UnityEngine::Experimental::GlobalIllumination::LightMode mode; // 0x15
		::UnityEngine::Vector3 position; // 0x18
		::UnityEngine::Experimental::GlobalIllumination::LinearColor color; // 0x24
		::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor; // 0x34
		::System::Single range; // 0x44
		::System::Single sphereRadius; // 0x48
		::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff; // 0x4C
	};
}
