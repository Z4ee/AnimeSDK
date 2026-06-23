#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LightData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LightShaftQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MirrorReflectionQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NAPShaderQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostProcessingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSDOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSPRQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TAAQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/TransparentDynamicShadingRateSetting.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumetricFogQuality.h"
#include "unitysdk/UnityEngine/Rendering/PerObjectData.h"

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RenderingData_TypeDefinitionIndex = 5951;

	struct alignas(8) RenderingData
	{
		::UnityEngine::NAPRenderPipeline0::CameraData cameraData; // 0x10
		::UnityEngine::NAPRenderPipeline0::LightData lightData; // 0x490
		::UnityEngine::NAPRenderPipeline0::ShadowData shadowData; // 0x4A4
		::UnityEngine::NAPRenderPipeline0::PostProcessingData postProcessingData; // 0x508
		::System::Boolean supportsDynamicBatching; // 0x510
		::System::Boolean useOffScreenParticles; // 0x511
		::System::Boolean useOffScreenParticlesMSAA; // 0x512
		::System::Boolean useFullResolutionParticlesVRS; // 0x513
		::UnityEngine::NAPRenderPipeline0::TransparentDynamicShadingRateSetting transparentDynamicShadingRateSetting; // 0x514
		::System::Boolean isTransparentMSAAJitterThisFrame; // 0x518
		::System::Boolean isBloomOn; // 0x519
		::System::Boolean isCapsuleAoOn; // 0x51A
		::System::Boolean isContactShadowOn; // 0x51B
		::System::Boolean isStencilShadowOn; // 0x51C
		::System::Boolean isMotionBlurOn; // 0x51D
		::System::Boolean isLensFlareOcclusionOn; // 0x51E
		::System::Boolean isSceneMotionVectorOn; // 0x51F
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode globalAntialiasingMode; // 0x520
		::UnityEngine::NAPRenderPipeline0::MirrorReflectionQuality mirrorReflectionQuality; // 0x524
		::System::Single planarReflectionBlurAmount; // 0x528
		::System::Single planarReflectionLodSteps; // 0x52C
		::System::Single planarReflectionMinSmoothness; // 0x530
		::System::Single planarReflectionSmoothnessFadeStart; // 0x534
		::System::Single screenSpaceReflectionLodSteps; // 0x538
		::System::Single screenSpaceReflectionBlurAmount; // 0x53C
		::System::Single screenSpaceReflectionMinSmoothness; // 0x540
		::System::Int32 screenSpaceReflectionRTSizeDownScale; // 0x544
		::System::Single screenSpaceReflectionSmoothnessFadeStart; // 0x548
		::UnityEngine::NAPRenderPipeline0::SSPRQuality ssprQuality; // 0x54C
		::System::Int32 ssprRTSizeDownScale; // 0x550
		::System::Boolean isssprBlur; // 0x554
		::System::Single ssprBlurAmount; // 0x558
		::System::Boolean isssprFillHole; // 0x55C
		::System::Boolean useSsprTemporalFilter; // 0x55D
		::System::Boolean useSsprFinalColorFilter; // 0x55E
		::System::Boolean isUiBlurOn; // 0x55F
		::System::Int32 uiBlurDownSample; // 0x560
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality fogQuality; // 0x564
		::UnityEngine::NAPRenderPipeline0::LightShaftQuality lightShaftQuality; // 0x568
		::UnityEngine::NAPRenderPipeline0::SSAOQuality ssaoQuality; // 0x56C
		::UnityEngine::Rendering::PerObjectData perObjectData; // 0x570
		::UnityEngine::NAPRenderPipeline0::TAAQuality taaQuality; // 0x574
		::System::Boolean killAlphaInFinalBlit; // 0x578
		::System::Boolean isHDRDisplayOn; // 0x579
		::System::Boolean accelStructBuilt; // 0x57A
		::System::Boolean postProcessingEnabled; // 0x57B
		::Il2CppArray<::System::Single>* screenCullingRatio; // 0x580
		::Il2CppArray<::System::Single>* screenShadowCullingRatio; // 0x588
		::Il2CppArray<::Il2CppArray<::System::Single>*>* layerShadowCullingDistances; // 0x590
		::UnityEngine::NAPRenderPipeline0::NAPShaderQuality napShaderQuality; // 0x598
		::UnityEngine::NAPRenderPipeline0::VolumetricFogQuality volumetricCloudQuality; // 0x59C
		::UnityEngine::NAPRenderPipeline0::SSDOQuality ssdoQuality; // 0x5A0
		::System::Boolean useBakedDecal; // 0x5A4
	};
}
