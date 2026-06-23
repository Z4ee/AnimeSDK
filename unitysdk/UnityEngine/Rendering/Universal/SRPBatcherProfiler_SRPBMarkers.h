#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SRPBatcherProfiler_SRPBMarkers_TypeDefinitionIndex = 26212;

	enum class SRPBatcherProfiler_SRPBMarkers : ::System::Int32
	{
		kStdShadowDraw = 1,
		kVolumetricFog = 13,
		kStdRenderDraw = 0,
		kSMAA = 12,
		kNapBloom = 11,
		kSRPBShadowDraw = 3,
		kSRPSetRenderTarget = 9,
		kSRPBRenderDraw = 2,
		kNAPRenderTransparents = 15,
		kRenderIntoDBuffer = 14,
		kStdRenderApplyShader = 5,
		kPrepareBatchRendererGroupNodes = 10,
		kSRPBRenderApplyShader = 7,
		kSRPBShadowApplyShader = 8,
		kRenderThreadIdle = 4,
		kStdShadowApplyShader = 6,
	};
}
