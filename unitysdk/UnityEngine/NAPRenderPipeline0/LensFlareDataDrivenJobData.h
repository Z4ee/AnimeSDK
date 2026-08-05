#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::NAPRenderPipeline0 { class PerCameraLensFlareData; }

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensFlareDataDrivenJobData_TypeDefinitionIndex = 18893;

	struct alignas(8) LensFlareDataDrivenJobData
	{
		::System::Int32 LensFlareMaterialID; // 0x10
		::System::Int32 QuadMeshID; // 0x14
		::System::Single ScreenRatio; // 0x18
		::System::Boolean OcclusionPassOn; // 0x1C
		::UnityEngine::NAPRenderPipeline0::PerCameraLensFlareData* CameraLensFlareData; // 0x20
	};
}
