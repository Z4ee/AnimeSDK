#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/Rendering/AOSetting.h"
#include "unitysdk/UnityEngine/Rendering/AdaptiveTessellationSettings.h"
#include "unitysdk/UnityEngine/Rendering/AmbientVolumneData.h"
#include "unitysdk/UnityEngine/Rendering/ClusterLightingSettings.h"
#include "unitysdk/UnityEngine/Rendering/DLSSData.h"
#include "unitysdk/UnityEngine/Rendering/DepthCopyFlag.h"
#include "unitysdk/UnityEngine/Rendering/GlobalSDFSettings.h"
#include "unitysdk/UnityEngine/Rendering/LightLodConfig.h"
#include "unitysdk/UnityEngine/Rendering/OffScreenUISettings.h"
#include "unitysdk/UnityEngine/Rendering/SSGISettings.h"
#include "unitysdk/UnityEngine/Rendering/SSRSettings.h"
#include "unitysdk/UnityEngine/Rendering/TAASettings.h"
#include "unitysdk/UnityEngine/Rendering/UIBlurSettings.h"
#include "unitysdk/UnityEngine/Rendering/VolumetricCloudSettings.h"
#include "unitysdk/UnityEngine/Rendering/VolumetricCloudSphereSettings.h"
#include "unitysdk/UnityEngine/Rendering/VolumetricFogSettings.h"
#include "unitysdk/UnityEngine/Rendering/VolumetricLightSettings.h"
#include "unitysdk/UnityEngine/Rendering/VoxelIrradianceCacheSettings.h"
#include "unitysdk/UnityEngine/Rendering/WaterSettings.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int CRPipelineAsset_TypeDefinitionIndex = 4848;

	struct alignas(8) CRPipelineAsset
	{
		::System::Int32 RenderPathIndex; // 0x10
		::UnityEngine::Experimental::Rendering::GraphicsFormat HdrFormat; // 0x14
		::UnityEngine::Experimental::Rendering::GraphicsFormat HdrGBufferAFormat; // 0x18
		::UnityEngine::Experimental::Rendering::GraphicsFormat HdrGBufferBFormat; // 0x1C
		::UnityEngine::Experimental::Rendering::GraphicsFormat HdrGBufferCFormat; // 0x20
		::UnityEngine::Color IndoorSceneLightColor; // 0x24
		::System::Int32 CharacterDitherCounter; // 0x34
		::System::Int32 EnvShaderQuality; // 0x38
		::System::Int32 MaxLightCountForEngine; // 0x3C
		::System::Int32 MaxLightCountForScript; // 0x40
		::System::Single LightTransFadeDuration; // 0x44
		::System::Boolean GlobalUseAO; // 0x48
		::System::Single IgnoreMainLightLimit; // 0x4C
		::System::Int32 DownsampleType; // 0x50
		::System::Int32 LightLevel; // 0x54
		::System::Int32 LightLevelV2; // 0x58
		::System::Int32 ProbeRenderMode; // 0x5C
		::System::Single GlobalProbeDistance; // 0x60
		::System::Single ObjectLightAffectDist; // 0x64
		::System::Int32 LightAffectID; // 0x68
		::System::Int32 DisableLocalMainLight; // 0x6C
		::UnityEngine::Rendering::LightLodConfig Lod0; // 0x70
		::UnityEngine::Rendering::LightLodConfig LodFar; // 0x7C
		::UnityEngine::Rendering::LightLodConfig Lod0ToFar; // 0x88
		::UnityEngine::Rendering::LightLodConfig LodCull; // 0x94
		::System::UInt32 MotionVectorsRLM; // 0xA0
		::System::UInt32 ReflectorCasterRLM; // 0xA4
		::System::UInt32 ReflectorRLM; // 0xA8
		::System::UInt32 RefractorRLM; // 0xAC
		::System::UInt32 SSRReflactorRLM; // 0xB0
		::System::UInt32 AddDepthRLM; // 0xB4
		::System::UInt32 PreDapthRLM; // 0xB8
		::System::UInt32 OpaquePreDapthRLM; // 0xBC
		::System::UInt32 TransparentPreDapthRLM; // 0xC0
		::System::UInt32 AvatarEffectPropExRLM; // 0xC4
		::System::UInt32 OpaqueEnableRLM; // 0xC8
		::System::UInt32 PreDepthAlphaTestRLM; // 0xCC
		::System::UInt32 VCMeshMaskRLM; // 0xD0
		::System::Int32 UILayer1; // 0xD4
		::System::Int32 UILayer2; // 0xD8
		::System::Int32 UILayer3; // 0xDC
		::System::Int32 DisableShadowDitherKeyword; // 0xE0
		::System::Boolean OuterGlowEnable; // 0xE4
		::UnityEngine::Vector4 OuterGlowColor; // 0xE8
		::UnityEngine::Vector4 OuterGlowParams; // 0xF8
		::System::Single MaxAspectRatio; // 0x108
		::System::Single MinAspectRatio; // 0x10C
		::System::Int32 SphereMesh; // 0x110
		::System::Int32 SpotMesh; // 0x114
		::System::Int32 HalfSphereMesh; // 0x118
		::System::Int32 DepthCopyMaterial; // 0x11C
		::System::Int32 DeferLightingMaterial; // 0x120
		::System::Int32 StencilLightingMaterial; // 0x124
		::System::Int32 AreaLightingMaterial; // 0x128
		::System::Int32 BlitMaterial; // 0x12C
		::System::Int32 ShadowDepthMaterial; // 0x130
		::System::Int32 ReflectionProbeMaterial; // 0x134
		::System::Int32 AmbientTexMaterial; // 0x138
		::System::Int32 SamplingMaterial; // 0x13C
		::System::Int32 CameraMVMaterial; // 0x140
		::System::Int32 ObjectMVMaterial; // 0x144
		::System::Int32 FrameBlendingMaterial; // 0x148
		::System::Int32 TAAMaterial; // 0x14C
		::System::Int32 SMAAMaterial; // 0x150
		::System::Int32 OuterGlowMaterial; // 0x154
		::System::Int32 ScreenSpaceShadowMaskMaterial; // 0x158
		::System::Int32 ScreenSpaceShadowMaskPCSSMaterial; // 0x15C
		::System::Int32 AOMaterial; // 0x160
		::System::Int32 UIPostProcessMaterial; // 0x164
		::System::Int32 ViewportMaskMaterial; // 0x168
		::System::Int32 HiZMaterial; // 0x16C
		::System::Int32 PerObjectShadowProbeMaterial; // 0x170
		::System::Int32 SSRMaterial; // 0x174
		::System::Int32 VolumetricCloudMaterial; // 0x178
		::System::Int32 VolumetricCloudSphereCombineMaterial; // 0x17C
		::System::Int32 FluidForceSourceRenderMaterial; // 0x180
		::System::Int32 ClearBackgroundDepthMaterial; // 0x184
		::System::Int32 VolumetricLightMaterial; // 0x188
		::System::Int32 VolumetricFogShadowLightingMaterial; // 0x18C
		::System::Int32 HairDummyMaterial; // 0x190
		::System::Int32 VolumetricFogCS; // 0x194
		::System::Int32 SSAOCS; // 0x198
		::System::Int32 LightCullingCS; // 0x19C
		::System::Int32 GrassGPUDrivenCS; // 0x1A0
		::System::Int32 DeformationMaterial; // 0x1A4
		::System::Int32 DeformationCS; // 0x1A8
		::System::Int32 FluidSimulation2DCS; // 0x1AC
		::System::Int32 AdaptiveTessellationCS; // 0x1B0
		::System::Int32 ShadowmapCompressCS; // 0x1B4
		::System::Int32 ShadowmapDecompressCS; // 0x1B8
		::System::Int32 ShadowmapDecompressPS; // 0x1BC
		::System::Int32 ShadowFilterCS; // 0x1C0
		::System::Int32 HiZCS; // 0x1C4
		::System::Int32 DecalMaterial; // 0x1C8
		::System::Int32 FrameCapturePPCS; // 0x1CC
		::System::Int32 InstancedItemCullCS; // 0x1D0
		::System::Int32 InstancedItemCullClusterCS; // 0x1D4
		::System::Int32 FogEmissionBakeVolumeInjectMaterial; // 0x1D8
		::System::Int32 GlobalSDFUpdateCS; // 0x1DC
		::System::Int32 IrradianceCacheMaterial; // 0x1E0
		::System::Int32 SSGIMaterial; // 0x1E4
		::System::Int32 GPUSceneCS; // 0x1E8
		::System::Int32 GPUSceneUpdateCS; // 0x1EC
		::System::Int32 GeometryShadowMaterial; // 0x1F0
		::System::Int32 OcclusionQueryMaterial; // 0x1F4
		::System::Int32 SSGICS; // 0x1F8
		::System::Int32 GPUParticlesManagementCS; // 0x1FC
		::System::Int32 BatchAnimationCS; // 0x200
		::System::Int32 PipelineValidation; // 0x204
		::System::Int32 AOJitterTex; // 0x208
		::System::Int32 LtcTex1; // 0x20C
		::System::Int32 LtcTex2; // 0x210
		::System::Int32 LtcTex3; // 0x214
		::System::Int32 DeformationNoiseTex; // 0x218
		::System::Int32 SMAAAreaTexture; // 0x21C
		::System::Int32 SMAASearchTexture; // 0x220
		::System::Int32 BlueNoiseTex3D; // 0x224
		::System::Int32 qTangentPropId; // 0x228
		::System::Int32 zWritePropId; // 0x22C
		::System::Int32 hasDepthFetchPropId; // 0x230
		::UnityEngine::Rendering::AOSetting aoSetting; // 0x234
		::UnityEngine::Rendering::TAASettings taaSettings; // 0x270
		::UnityEngine::Rendering::UIBlurSettings uiBlurSettings; // 0x288
		::UnityEngine::Rendering::OffScreenUISettings offScreenUISettings; // 0x364
		::UnityEngine::Rendering::SSRSettings ssrSettings; // 0x37C
		::UnityEngine::Rendering::SSGISettings ssgiSettings; // 0x3AC
		::UnityEngine::Rendering::WaterSettings waterSettings; // 0x40C
		::UnityEngine::Rendering::VolumetricCloudSettings volumetricCloudSettings; // 0x424
		::UnityEngine::Rendering::VolumetricFogSettings volumetricFogSettings; // 0x43C
		::UnityEngine::Rendering::VolumetricCloudSphereSettings volumetricCloudSphereSettings; // 0x4FC
		::UnityEngine::Rendering::VolumetricLightSettings volumetricLightSettings; // 0x510
		::UnityEngine::Rendering::GlobalSDFSettings globalSDFSettings; // 0x520
		::UnityEngine::Rendering::AmbientVolumneData ambientData; // 0x52C
		::UnityEngine::Rendering::ClusterLightingSettings clusterSettings; // 0x59C
		::UnityEngine::Rendering::VoxelIrradianceCacheSettings voxelIrradianceCacheSettings; // 0x5BC
		::UnityEngine::Rendering::AdaptiveTessellationSettings adaptiveTessellationSettings; // 0x5CC
		::UnityEngine::Rendering::DLSSData dlssData; // 0x5D8
		::UnityEngine::Rendering::DepthCopyFlag forwardDepthCopyFlag; // 0x608
		::System::Int32 minInstanceCountAsyncFill; // 0x60C
		::System::Single geometryShadowFadeRatio; // 0x610
		::System::Int32 geometryShadowQuality; // 0x614
		::System::Byte defaultSplitScreenStencilMask; // 0x618
		::System::Boolean enableMetalVrr; // 0x619
		::System::Boolean shouldSkipDrawWhenLoading; // 0x61A
		::System::Int32 skipFrameDelay; // 0x61C
		::System::Int32 particleTrailSmoothness; // 0x620
		::System::UInt64 _Flag; // 0x628
		::System::UInt32 _GPUDrivenFlag; // 0x630
		::System::UInt32 _PlatformFlag; // 0x634
	};
}
