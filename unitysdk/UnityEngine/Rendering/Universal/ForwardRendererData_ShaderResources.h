#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Shader; }
namespace UnityEngine::Experimental::Rendering { class RayTracingShader; }

#define UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SHADERRESOURCES__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB2190)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ForwardRendererData_ShaderResources_TypeDefinitionIndex = 29847;

	class ForwardRendererData_ShaderResources : public ::System::Object
	{
	public:
		::UnityEngine::Shader* blitPS; // 0x10
		::UnityEngine::Shader* hdrOutputPS; // 0x18
		::UnityEngine::Shader* blitForOffScreenParticlesPS; // 0x20
		::UnityEngine::Shader* characterGhostBlitPS; // 0x28
		::UnityEngine::Shader* characterIgnisFatuusBlitPS; // 0x30
		::UnityEngine::Shader* copyDepthPS; // 0x38
		::UnityEngine::Shader* copyDepthForOffScreenParticlesPS; // 0x40
		::UnityEngine::Shader* screenSpaceShadowPS; // 0x48
		::UnityEngine::Shader* samplingPS; // 0x50
		::UnityEngine::Shader* fallbackErrorPS; // 0x58
		::UnityEngine::Shader* occlusionProcessPS; // 0x60
		::UnityEngine::Shader* occlusionBlurPS; // 0x68
		::UnityEngine::Shader* gaussianBlurPS; // 0x70
		::UnityEngine::Shader* blendOffScreenUIPS; // 0x78
		::UnityEngine::Shader* outlineEffectPS; // 0x80
		::UnityEngine::ComputeShader* vfxVolumetricShadowCS; // 0x88
		::UnityEngine::Shader* screenSpaceReflectionPS; // 0x90
		::UnityEngine::Shader* screenSpaceGlobalIlluminationPS; // 0x98
		::UnityEngine::ComputeShader* screenSpaceGlobalIlluminationCS; // 0xA0
		::UnityEngine::Shader* depthPyramidPS; // 0xA8
		::UnityEngine::Shader* deferredShadingPS; // 0xB0
		::UnityEngine::ComputeShader* buildScreenAABBCS; // 0xB8
		::UnityEngine::ComputeShader* buildPerTileLightListCS; // 0xC0
		::UnityEngine::ComputeShader* buildPerBigTileLightListCS; // 0xC8
		::UnityEngine::ComputeShader* buildPerVoxelLightListCS; // 0xD0
		::UnityEngine::ComputeShader* clearLightListsCS; // 0xD8
		::UnityEngine::ComputeShader* buildWorldGridLightListShaderCS; // 0xE0
		::UnityEngine::ComputeShader* rayDetectionCS; // 0xE8
		::UnityEngine::Material* bulletHoleMaterial; // 0xF0
		::UnityEngine::Shader* blitCubeTextureFacePS; // 0xF8
		::UnityEngine::ComputeShader* colorPyramidCS; // 0x100
		::UnityEngine::ComputeShader* gaussianBlurCS; // 0x108
		::UnityEngine::Shader* napBloomPS; // 0x110
		::UnityEngine::Shader* napBloomGaussPS; // 0x118
		::UnityEngine::Shader* skyBoxPS; // 0x120
		::UnityEngine::Shader* skyLutPS; // 0x128
		::UnityEngine::Shader* lightShaftPS; // 0x130
		::UnityEngine::Shader* lightShaftBlurPS; // 0x138
		::UnityEngine::Shader* lightShaftOcclusionPS; // 0x140
		::UnityEngine::ComputeShader* lensFlareOcclusion; // 0x148
		::UnityEngine::ComputeShader* napCapsuleAoCulling; // 0x150
		::UnityEngine::ComputeShader* capsuleAO; // 0x158
		::UnityEngine::ComputeShader* ssdo; // 0x160
		::UnityEngine::Shader* contactShadowPS; // 0x168
		::UnityEngine::Shader* blitShadowPS; // 0x170
		::UnityEngine::Shader* characterRamp; // 0x178
		::UnityEngine::ComputeShader* napVolumetricCloudCS; // 0x180
		::UnityEngine::Shader* volumetricCloudSampler; // 0x188
		::UnityEngine::Shader* volumetricMistSampler; // 0x190
		::UnityEngine::ComputeShader* cameraIsIndoorCS; // 0x198
		::UnityEngine::ComputeShader* getOceanOffsetAndNormalCS; // 0x1A0
		::UnityEngine::Shader* outlineObjectShader; // 0x1A8
		::UnityEngine::Shader* outlineProcessShader; // 0x1B0
		::UnityEngine::ComputeShader* visQueryCS; // 0x1B8
		::UnityEngine::Shader* visiblePixelCounterShader; // 0x1C0
		::UnityEngine::ComputeShader* visiblePixelCounterCS; // 0x1C8
		::UnityEngine::Shader* perObjectShadowResolve; // 0x1D0
		::UnityEngine::ComputeShader* napEntityPrepare; // 0x1D8
		::UnityEngine::ComputeShader* PixelIndexedPlanarReflectionCS; // 0x1E0
		::UnityEngine::Shader* textureSheetPS; // 0x1E8
		::UnityEngine::Shader* spriteBloom; // 0x1F0
		::UnityEngine::ComputeShader* regionDetectFlareCS; // 0x1F8
		::UnityEngine::Shader* regionBlit; // 0x200
		::UnityEngine::Shader* offscreenParticleUI; // 0x208
		::UnityEngine::ComputeShader* WaterGenCS; // 0x210
		::UnityEngine::ComputeShader* WaterInteractCS; // 0x218
		::UnityEngine::ComputeShader* SetupWaterHeightCS; // 0x220
		::UnityEngine::ComputeShader* GpuBoidCS; // 0x228
		::UnityEngine::ComputeShader* LyraGIUpdateBakedDataClipmapCS; // 0x230
		::UnityEngine::ComputeShader* LyraGIDebugClipmapCS; // 0x238
		::UnityEngine::Shader* LyraGISectorVisualizationPS; // 0x240
		::UnityEngine::ComputeShader* LyraUpdateProbesCS; // 0x248
		::UnityEngine::ComputeShader* LyraUpdateProbesAdditionalCS; // 0x250
		::UnityEngine::ComputeShader* LyraApplyCS; // 0x258
		::UnityEngine::Shader* LyraDebugShader; // 0x260
		::UnityEngine::ComputeShader* LyraDebugProbeCS; // 0x268
		::UnityEngine::ComputeShader* ClearUtilCS; // 0x270
		::UnityEngine::Shader* fxPostProcessFogPS; // 0x278
		::UnityEngine::Shader* damageDecalLUTShader; // 0x280
		::UnityEngine::Shader* extraMotionVectorPassShader; // 0x288
		::UnityEngine::Shader* transparentMaskShader; // 0x290
		::UnityEngine::Experimental::Rendering::RayTracingShader* RTXAORTShader; // 0x298
		::UnityEngine::ComputeShader* RTXAODenoiseCS; // 0x2A0
		::UnityEngine::ComputeShader* RTXAOCS; // 0x2A8
		::UnityEngine::ComputeShader* findBrightSpotsCS; // 0x2B0
		::UnityEngine::Material* brightSpotsFlareMaterial; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_FORWARDRENDERERDATA_SHADERRESOURCES__CTOR_OFFSET))(this);
		}
	};
}
