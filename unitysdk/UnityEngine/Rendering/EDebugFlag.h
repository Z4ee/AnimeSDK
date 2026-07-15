#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int EDebugFlag_TypeDefinitionIndex = 35975;

	enum class EDebugFlag : ::System::Int64
	{
		kDFNone = 0,
		kDFDrawLocalLight = 1,
		kDFDebugCapture = 2,
		kDFPerObjectShadow = 4,
		kDFSimulateIOS = 8,
		kDFActorForceUpdatePos = 16,
		kIsGameRunning = 32,
		kDrawGizmo = 64,
		kEnableInstanceGeometryShadow = 128,
		kSceneViewPP = 256,
		kUpdatePipelineScript = 512,
		kSceneViewDebugOverlay = 1024,
		kEnableLightVRS = 2048,
		kEnableForwardTransparentVRS = 4096,
		kEnableImageVRS = 8192,
		kDebugMT = 16384,
		kDebugSceneCull_NotUsed = 32768,
		kAlwaysUpdateAvatar = 65536,
		kEnableInstancedItemProfile = 131072,
		kGBufferDebug = 262144,
		kDebugActorLightPos = 524288,
		kDisableLocalLight = 1048576,
		kDisablehadowLocalLight = 2097152,
		kDrawPerObjectSelfShadow = 4194304,
		kOfflineLightList = 8388608,
		kDisableGPUParticles = 16777216,
		kDrawPassGizmos = 33554432,
		kQueryPerLight = 67108864,
		kQueryPerCharacterShadow = 134217728,
		kQueryStencilLight = 268435456,
		kQueryFogEmissionBakeVolume = 536870912,
		kEnableGrassProfile = 1073741824,
		kEnableEditGeometryShadow = 2147483648,
		kAOVLocalLight = 4294967296,
		kDrawSceneVoxel_NotUse = 8589934592,
		kEnableGPUParticlesProfile = 17179869184,
	};
}
