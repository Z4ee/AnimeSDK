#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowResolveData_TypeDefinitionIndex = 5929;

	struct alignas(4) PerObjectShadowResolveData
	{
		::UnityEngine::Matrix4x4 worldToUvMatrix; // 0x10
		::UnityEngine::Matrix4x4 localToWorldMatrix; // 0x50
		::UnityEngine::Matrix4x4 shadowProjectionMatrix; // 0x90
		::UnityEngine::Vector4 resolveTilingOffset; // 0xD0
		::UnityEngine::Vector4 offsetWS; // 0xE0
		::UnityEngine::Vector2 extentLS; // 0xF0
		::System::Single resolveAlpha; // 0xF8
	};
}
