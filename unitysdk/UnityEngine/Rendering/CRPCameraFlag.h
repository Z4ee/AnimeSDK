#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPCameraFlag_TypeDefinitionIndex = 35966;

	enum class CRPCameraFlag : ::System::Int32
	{
		kEnableHDR = 1,
		kEnableDynamicRes = 2,
		kEnableHizOC = 4,
		kPPEnable = 8,
		kTAAEnable = 16,
		kMotionBlurEnable = 32,
		kUIPPEnable = 64,
		kIsUI3DCamera = 128,
		kIsGameMainCamera = 256,
		kEnableBlurFull = 512,
		kDisableMainCamera = 1024,
		kUIBlurDisableBaseCamera = 2048,
		kEnableBlurPartial = 4096,
	};
}
