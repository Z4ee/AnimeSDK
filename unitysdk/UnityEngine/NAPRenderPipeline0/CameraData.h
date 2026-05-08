#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/CameraType.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/AntialiasingQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ECameraRenderPassMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/EGlobalRTType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FSRUpSampleMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FogType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MaterialDebugMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadingType.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/DLSSGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/FSRFGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflexMode.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"
#include "unitysdk/UnityEngine/Rendering/SortingSettings.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::NAPRenderPipeline0 { class ICameraCacheData; }
namespace UnityEngine::NAPRenderPipeline0 { class IUniversalAdditionalCameraData; }
namespace UnityEngine::NAPRenderPipeline0 { class IWeatherConfig; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_ANTIALIASINGUSETEMPORAL_OFFSET UNITYSDK_OFFSET(0x94ECD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETGPUPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x94ED80)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETNONJITTEREDPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x94ED50)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETPREVIOUSVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0x94ECF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETPRIVOUSPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x94ED20)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETPROJECTIONMATRIX_OFFSET UNITYSDK_OFFSET(0x6E81A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETVIEWMATRIX_OFFSET UNITYSDK_OFFSET(0x3B4690)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GET_ISPREVIEWCAMERA_OFFSET UNITYSDK_OFFSET(0x94ECC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_SCREENTOVIEWPORTPOINT_OFFSET UNITYSDK_OFFSET(0x94EF30)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_SETUPCAMERAVIEWDATA_OFFSET UNITYSDK_OFFSET(0x94EE20)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_WORLDTOSCREENPOINT_OFFSET UNITYSDK_OFFSET(0x94EF00)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_WORLDTOVIEWPORTPOINT_OFFSET UNITYSDK_OFFSET(0x94EF60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CameraData_TypeDefinitionIndex = 5940;

	struct alignas(8) CameraData
	{
		::System::String* name; // 0x10
		::UnityEngine::Matrix4x4 m_ViewMatrix; // 0x18
		::UnityEngine::Matrix4x4 m_ProjectionMatrix; // 0x58
		::UnityEngine::Matrix4x4 m_PrivousViewMatrix; // 0x98
		::UnityEngine::Matrix4x4 m_PrivousProjectionMatrix; // 0xD8
		::UnityEngine::Matrix4x4 m_NonJitteredProjectMatrix; // 0x118
		::UnityEngine::Matrix4x4 CullingMatrix; // 0x158
		::UnityEngine::Matrix4x4 CameraToWorld; // 0x198
		::UnityEngine::Vector3 cameraPositionWS; // 0x1D8
		::UnityEngine::Vector3 cameraForwardWS; // 0x1E4
		::UnityEngine::Vector3 cameraUpWS; // 0x1F0
		::UnityEngine::Camera* camera; // 0x200
		::UnityEngine::NAPRenderPipeline0::CameraRenderType renderType; // 0x208
		::UnityEngine::RenderTexture* targetTexture; // 0x210
		::UnityEngine::RenderTextureDescriptor cameraTargetDescriptor; // 0x218
		::UnityEngine::Rect pixelRect; // 0x250
		::System::Int32 pixelWidth; // 0x260
		::System::Int32 pixelHeight; // 0x264
		::System::Single aspectRatio; // 0x268
		::System::Single fieldOfView; // 0x26C
		::System::Single renderScale; // 0x270
		::System::Single farClipPlane; // 0x274
		::System::Single nearClipPlane; // 0x278
		::System::Boolean preCameraIsBaseAndIsDummy; // 0x27C
		::System::Boolean isDummyCamera; // 0x27D
		::System::Boolean canOptimizeMemoryRT; // 0x27E
		::System::Boolean isBlackCanvasEnabled; // 0x27F
		::System::Boolean useColorBufferWithAlpha; // 0x280
		::System::Boolean isDefaultViewport; // 0x281
		::System::Boolean requiresDepthTexture; // 0x282
		::System::Boolean requiresNormalTexture; // 0x283
		::System::Boolean requiresOpaqueTexture; // 0x284
		::System::Boolean requiresDistortionTexture; // 0x285
		::System::Boolean isGpuQueryEnabled; // 0x286
		::System::Boolean isLightShaftEnabled; // 0x287
		::System::Boolean isGPUCullingEnabled; // 0x288
		::UnityEngine::Vector4 HizCullingParams; // 0x28C
		::System::Boolean isClearDepthEnabled; // 0x29C
		::System::Boolean isHdrEnabled; // 0x29D
		::System::Boolean isSsrEnabled; // 0x29E
		::System::Boolean isSSPREnabled; // 0x29F
		::System::Boolean isSSGIEnabled; // 0x2A0
		::System::Boolean renderToFinalTarget; // 0x2A1
		::System::Boolean hasLensFlare; // 0x2A2
		::System::Boolean hasRain; // 0x2A3
		::System::Boolean has3DModels; // 0x2A4
		::System::Boolean hasMirrorReflection; // 0x2A5
		::System::Boolean renderShadows; // 0x2A6
		::System::Boolean renderDecals; // 0x2A7
		::System::Boolean renderVolumetricFog; // 0x2A8
		::System::Boolean renderWater; // 0x2A9
		::UnityEngine::Camera* nextCamera; // 0x2B0
		::UnityEngine::Camera* boundCamera; // 0x2B8
		::System::Boolean drawGizmos; // 0x2C0
		::System::Boolean useExtraGBuffer; // 0x2C1
		::UnityEngine::CameraType cameraType; // 0x2C4
		::UnityEngine::NAPRenderPipeline0::ShadingType shadingType; // 0x2C8
		::UnityEngine::NAPRenderPipeline0::FogType fogType; // 0x2CC
		::System::Int32 taaFrameIndex; // 0x2D0
		::System::Boolean applyLutAfterEverything; // 0x2D4
		::System::Boolean overlayFXOn; // 0x2D5
		::System::Boolean hasGlobalFog; // 0x2D6
		::System::Boolean historyBufferIsInValid; // 0x2D7
		::System::Boolean isPlanarReflectionCamera; // 0x2D8
		::System::Boolean isSceneViewCamera; // 0x2D9
		::UnityEngine::Rendering::SortingCriteria defaultOpaqueSortFlags; // 0x2DC
		::System::Single maxShadowDistance; // 0x2E0
		::System::Boolean postProcessEnabled; // 0x2E4
		::UnityEngine::NAPRenderPipeline0::IWeatherConfig* weatherConfig; // 0x2E8
		::System::Object* captureActions; // 0x2F0
		::UnityEngine::LayerMask volumeLayerMask; // 0x2F8
		::UnityEngine::Transform* volumeTrigger; // 0x300
		::System::Boolean readyToFreezeTheCamera; // 0x308
		::System::Boolean theCameraIsFrozen; // 0x309
		::System::Boolean isStopNaNEnabled; // 0x30A
		::System::Boolean isDitheringEnabled; // 0x30B
		::UnityEngine::NAPRenderPipeline0::AntialiasingMode antialiasing; // 0x30C
		::UnityEngine::NAPRenderPipeline0::FSRUpSampleMode FSRUpSampleMode; // 0x310
		::UnityEngine::NAPRenderPipeline0::AntialiasingQuality antialiasingQuality; // 0x314
		::UnityEngine::Rendering::DLSSQualityMode dlssMode; // 0x318
		::UnityEngine::Rendering::DLSSGQualityMode frameGenMode; // 0x31C
		::System::Int32 frameGenNum; // 0x320
		::UnityEngine::Rendering::ReflexMode reflexMode; // 0x324
		::System::Int32 frameLimitUs; // 0x328
		::UnityEngine::Rendering::FSRFGQualityMode fsrFrameGenMode; // 0x32C
		::System::Single fsrSharpenStrength; // 0x330
		::System::Single taaSharpenStrength; // 0x334
		::UnityEngine::NAPRenderPipeline0::MaterialDebugMode debugFeature; // 0x338
		::System::Object* renderer; // 0x340
		::System::Boolean resolveFinalTarget; // 0x348
		::System::Object* volume_lighting; // 0x350
		::System::Boolean m_UseLocalLightShadowCache; // 0x358
		::UnityEngine::RenderTexture* m_LocalLightShadowStaticAtlas; // 0x360
		::UnityEngine::RenderTexture* m_LocalLightShadowDynamicAtlas; // 0x368
		::UnityEngine::Vector4 taaJitter; // 0x370
		::UnityEngine::NAPRenderPipeline0::ICameraCacheData* cameraCachedData; // 0x380
		::UnityEngine::Rendering::SortingSettings baseSortingSetting; // 0x388
		::UnityEngine::NAPRenderPipeline0::IUniversalAdditionalCameraData* additionalCameraData; // 0x468
		::System::Boolean needsUiBlur; // 0x470
		::UnityEngine::NAPRenderPipeline0::EGlobalRTType renderTargetReplacement; // 0x474
		::System::Boolean enableClusterLightAndIBLCulling; // 0x478
		::System::Boolean enableFptlLightAndIBLCulling; // 0x479
		::System::Boolean isLocalLightEnabled; // 0x47A
		::System::Boolean isLocalReflectionProbeEnabled; // 0x47B
		::System::Boolean isRenderShadowCasterAfterGBuffer; // 0x47C
		::System::Boolean isForceOffScreenParticles; // 0x47D
		::System::Int32 mGIQuality; // 0x480
		::UnityEngine::NAPRenderPipeline0::ECameraRenderPassMask renderPassMask; // 0x484
		::System::UInt32 renderLayerMaskForGBufferPass; // 0x488
		::System::Boolean isPrefabEditMode; // 0x48C

		::System::Boolean get_isPreviewCamera()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GET_ISPREVIEWCAMERA_OFFSET))(this);
		}

		::System::Boolean AntialiasingUseTemporal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_ANTIALIASINGUSETEMPORAL_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetViewMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETVIEWMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetPreviousViewMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETPREVIOUSVIEWMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetProjectionMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETPROJECTIONMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetPrivousProjectionMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETPRIVOUSPROJECTIONMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetNonJitteredProjectionMatrix()
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETNONJITTEREDPROJECTIONMATRIX_OFFSET))(this);
		}

		::UnityEngine::Matrix4x4 GetGPUProjectionMatrix(::System::Boolean isCameraProjMatFlipped)
		{
			return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_GETGPUPROJECTIONMATRIX_OFFSET))(this, isCameraProjMatFlipped);
		}

		::System::Void SetupCameraViewData(::UnityEngine::Matrix4x4& viewMatrix, ::UnityEngine::Matrix4x4& projMatrix, ::UnityEngine::Matrix4x4& prevViewMatrix, ::UnityEngine::Matrix4x4& prevProjMatrix, ::UnityEngine::Matrix4x4& nonJitteredProjMatrix)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&, ::UnityEngine::Matrix4x4&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_SETUPCAMERAVIEWDATA_OFFSET))(this, viewMatrix, projMatrix, prevViewMatrix, prevProjMatrix, nonJitteredProjMatrix);
		}

		::UnityEngine::Vector3 WorldToScreenPoint(::UnityEngine::Vector3 worldPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_WORLDTOSCREENPOINT_OFFSET))(this, worldPos);
		}

		::UnityEngine::Vector3 ScreenToViewportPoint(::UnityEngine::Vector3 screenPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_SCREENTOVIEWPORTPOINT_OFFSET))(this, screenPos);
		}

		::UnityEngine::Vector3 WorldToViewportPoint(::UnityEngine::Vector3 worldPos)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAMERADATA_WORLDTOVIEWPORTPOINT_OFFSET))(this, worldPos);
		}
	};
}
