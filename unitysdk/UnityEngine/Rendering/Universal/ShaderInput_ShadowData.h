#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ShaderInput_ShadowData_TypeDefinitionIndex = 24791;

	struct alignas(4) ShaderInput_ShadowData
	{
		::UnityEngine::Matrix4x4 worldToShadowMatrix; // 0x10
		::UnityEngine::Vector4 shadowParams; // 0x50
	};
}
