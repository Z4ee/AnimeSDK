#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/VisibleLight.h"

namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class DynamicArray_1; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PostCullRenderingData_TypeDefinitionIndex = 5952;

	struct alignas(8) PostCullRenderingData
	{
		::UnityEngine::Rendering::CullingResults cullResults; // 0x10
		::UnityEngine::NAPRenderPipeline0::DynamicArray_1<::System::Int32>* visibleLightPreData; // 0x20
		::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::VisibleLight> visibleLights; // 0x28
		::System::Int32 mainLightIndex; // 0x38
		::System::Int32 additionalLightsCount; // 0x3C
	};
}
