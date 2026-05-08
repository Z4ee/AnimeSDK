#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LightShadows.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobData_TypeDefinitionIndex = 30009;

	struct alignas(4) LightLodJobData
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Int32 layer; // 0x1C
		::UnityEngine::LightShadows shadow; // 0x20
		::System::Single shadowStrength; // 0x24
		::System::Boolean enable; // 0x28
		::System::Boolean shouldCull; // 0x29
		::System::Single lightRange; // 0x2C
	};
}
