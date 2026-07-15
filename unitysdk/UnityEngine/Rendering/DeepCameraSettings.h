#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DeepCameraSettings_TypeDefinitionIndex = 4812;

	struct alignas(4) DeepCameraSettings
	{
		::UnityEngine::Vector4 TransparentClearColor; // 0x10
		::System::Int32 OpaqueDepthTex; // 0x20
	};
}
