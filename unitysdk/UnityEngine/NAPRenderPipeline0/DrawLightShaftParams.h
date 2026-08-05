#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawLightShaftParams_TypeDefinitionIndex = 5935;

	struct alignas(4) DrawLightShaftParams
	{
		::System::Int32 invertSize; // 0x10
		::System::Single blurRadius; // 0x14
		::System::Single _LightShaftThreshold; // 0x18
		::System::Single _Radius; // 0x1C
		::UnityEngine::Vector4 _LightShaftParams; // 0x20
		::UnityEngine::Color _LightShaftColor; // 0x30
		::System::Boolean lightShaft; // 0x40
		::System::Boolean lightShaftBlur; // 0x41
	};
}
