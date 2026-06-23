#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LightShadows.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLodJobData_TypeDefinitionIndex = 26988;

	struct alignas(4) LightLodJobData
	{
		::System::Int32 transformId; // 0x10
		::System::Int32 layer; // 0x14
		::UnityEngine::LightShadows shadow; // 0x18
		::System::Single shadowStrength; // 0x1C
		::System::Boolean enable; // 0x20
		::System::Boolean shouldCull; // 0x21
		::System::Int32 lightInstanceId; // 0x24
	};
}
