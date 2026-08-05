#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SRPBatcherProfiler_SRPBMarkers_TypeDefinitionIndex = 27758;

	enum class SRPBatcherProfiler_SRPBMarkers : ::System::Int32
	{
		kNAPRenderTransparents = 15,
		kSRPBRenderApplyShader = 7,
		kStdRenderApplyShader = 5,
		kSRPBShadowApplyShader = 8,
		kStdShadowApplyShader = 6,
		kVolumetricFog = 13,
		kPrepareBatchRendererGroupNodes = 10,
		kRenderThreadIdle = 4,
		kNapBloom = 11,
		kStdShadowDraw = 1,
		kSRPSetRenderTarget = 9,
		kStdRenderDraw = 0,
		kRenderIntoDBuffer = 14,
		kSRPBShadowDraw = 3,
		kSRPBRenderDraw = 2,
		kSMAA = 12,
	};
}
