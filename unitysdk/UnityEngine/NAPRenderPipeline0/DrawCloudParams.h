#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CloudConfigParamForDraw.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawCloudParams_TypeDefinitionIndex = 5938;

	struct alignas(8) DrawCloudParams
	{
		::UnityEngine::NAPRenderPipeline0::CloudConfigParamForDraw High_; // 0x10
		::UnityEngine::NAPRenderPipeline0::CloudConfigParamForDraw Middle_; // 0x80
		::UnityEngine::NAPRenderPipeline0::CloudConfigParamForDraw Low_; // 0xF0
		::UnityEngine::NAPRenderPipeline0::CloudConfigParamForDraw Special_; // 0x160
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* HighCloudAtlasRTIDs; // 0x1D0
		::UnityEngine::Rendering::RenderTargetIdentifier CloudNoiseRTID; // 0x1D8
		::System::Single CloudNoiseIntensity; // 0x200
		::System::Boolean PreviewSkyboxForBake; // 0x204
		::System::Boolean UseCloudMiddleColor; // 0x205
		::System::Boolean UseAnimation; // 0x206
	};
}
