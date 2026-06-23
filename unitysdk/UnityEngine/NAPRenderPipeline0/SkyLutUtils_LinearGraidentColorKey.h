#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SkyLutUtils_LinearGraidentColorKey_TypeDefinitionIndex = 5981;

	struct alignas(4) SkyLutUtils_LinearGraidentColorKey
	{
		::UnityEngine::Vector4 color; // 0x10
		::System::Single time; // 0x20
	};
}
