#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/LightShadows.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int LightLODChange_TypeDefinitionIndex = 27206;

	struct alignas(4) LightLODChange
	{
		// static const ::System::Byte kNone = 0x0; // 0x0
		// static const ::System::Byte kShadowStrengthChange = 0x2; // 0x0
		// static const ::System::Byte kLightShadowTypeChange = 0x4; // 0x0
		// static const ::System::Byte kLightEnableChange = 0x8; // 0x0
		// static const ::System::Byte kLightShouldCullChange = 0x10; // 0x0
		::System::Byte changeType; // 0x10
		::System::Int32 index; // 0x14
		::System::Single shadowStrength; // 0x18
		::UnityEngine::LightShadows shadow; // 0x1C
		::System::Boolean enable; // 0x20
		::System::Boolean shouldCull; // 0x21
	};
}
