#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SRPBatcherProfiler_SRPBMarkers_TypeDefinitionIndex = 29889;

	enum class SRPBatcherProfiler_SRPBMarkers : ::System::Int32
	{
		kStdRenderDraw = 0,
		kStdShadowDraw = 1,
		kSRPBRenderDraw = 2,
		kSRPBShadowDraw = 3,
		kRenderThreadIdle = 4,
		kStdRenderApplyShader = 5,
		kStdShadowApplyShader = 6,
		kSRPBRenderApplyShader = 7,
		kSRPBShadowApplyShader = 8,
		kSRPSetRenderTarget = 9,
		kPrepareBatchRendererGroupNodes = 10,
		kNapBloom = 11,
		kSMAA = 12,
		kVolumetricFog = 13,
		kRenderIntoDBuffer = 14,
		kNAPRenderTransparents = 15,
	};
}
