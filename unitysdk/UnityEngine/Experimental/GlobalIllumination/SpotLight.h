#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/AngularFalloffType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/FalloffType.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LightMode.h"
#include "unitysdk/UnityEngine/Experimental/GlobalIllumination/LinearColor.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Experimental::GlobalIllumination
{
	inline static constexpr unsigned int SpotLight_TypeDefinitionIndex = 6314;

	struct alignas(4) SpotLight
	{
		::System::Int32 instanceID; // 0x10
		::System::Boolean shadow; // 0x14
		::UnityEngine::Experimental::GlobalIllumination::LightMode mode; // 0x15
		::UnityEngine::Vector3 position; // 0x18
		::UnityEngine::Quaternion orientation; // 0x24
		::UnityEngine::Experimental::GlobalIllumination::LinearColor color; // 0x34
		::UnityEngine::Experimental::GlobalIllumination::LinearColor indirectColor; // 0x44
		::System::Single range; // 0x54
		::System::Single sphereRadius; // 0x58
		::System::Single coneAngle; // 0x5C
		::System::Single innerConeAngle; // 0x60
		::UnityEngine::Experimental::GlobalIllumination::FalloffType falloff; // 0x64
		::UnityEngine::Experimental::GlobalIllumination::AngularFalloffType angularFalloff; // 0x65
	};
}
