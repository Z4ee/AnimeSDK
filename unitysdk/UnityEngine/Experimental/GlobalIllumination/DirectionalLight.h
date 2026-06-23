#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LightMode.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LinearColor.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int DirectionalLight_TypeDefinitionIndex = 6312;

	struct alignas(4) DirectionalLight
	{
		::System::Int32 instanceID; // 0x10
		::System::Boolean shadow; // 0x14
		::UnityEngine::Experimental::GlobalIllumination::LightMode mode; // 0x15
		::UnityEngine::Vector3 direction; // 0x18
		::UnityEngine::Experimental::GlobalIllumination::LinearColor color; // 0x24
		::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor; // 0x34
		::System::Single penumbraWidthRadian; // 0x44
	};
}
