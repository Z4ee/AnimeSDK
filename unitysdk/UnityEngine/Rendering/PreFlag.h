#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int PreFlag_TypeDefinitionIndex = 35970;

	enum class PreFlag : ::System::Int32
	{
		kEnableInstance = 1,
		kEnableSrpBatch = 2,
		kAOEnable = 4,
		kEnableCustomBackground = 8,
		kOpaqueTexEnable = 16,
		kTransparentPreZ = 32,
		kDisableHSR = 64,
		kSinglePassAddDepth = 128,
		kDisableEyeHair = 256,
		kCharForwardEmission = 512,
		kSceneEmission = 1024,
		kLuxSceneGlass = 2048,
		kEnableWaterSSR = 4096,
		kEnableWaterRefraction = 8192,
		kEnableSkillRadial = 16384,
		kOutlineMV = 32768,
		kCapturePPEnable = 65536,
		kWaterMarkEnable = 131072,
		kEnableVolumetricFog = 262144,
		kEnableVolumetricLight = 524288,
		kCharAndroidLowQuality = 1048576,
		kEnablePerDrawCache = 2097152,
		kDisableMainCamera = 4194304,
		kEnableVoxelIrradianceCache = 8388608,
		kEnableAdaptiveTessellation = 16777216,
		kReflectionCameraCmdBufferOnly_NotUse = 33554432,
		kTAAValid_Placeholder = 67108864,
		kDisableShadow = 134217728,
		kEnableMultiDraw = 268435456,
		InDoor = 536870912,
	};
}
