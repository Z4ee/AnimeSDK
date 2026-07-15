#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SelfShadowSettings_TypeDefinitionIndex = 4871;

	struct alignas(4) SelfShadowSettings
	{
		::System::Boolean enableSelfShadow; // 0x10
		::System::Boolean enableFaceHairShadow; // 0x11
		::System::Int32 selfShadowCount; // 0x14
		::System::Int32 selfShadowResolution; // 0x18
	};
}
