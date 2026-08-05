#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/MaterialDebugMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SkyLutUtils_LinearGraidentColorKey.h"
#include "unitysdk/UnityEngine/Rendering/AsyncGPUReadbackRequest.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ForwardRenderer_ReadonlyRenderState.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/PassUtil_SceneWeatherParams.h"
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class NapRenderContext_CurrentFrameRenderConfigs; }
namespace UnityEngine::Rendering::Universal { class VREffects; }
namespace UnityEngine::Rendering::Universal::Internal { class PassUtil_CommonWeatherCpuParams; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYCHARSTYLIZATION_OFFSET UNITYSDK_OFFSET(0x1C5BF910)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYCUSTOMLUTWITHMASK_OFFSET UNITYSDK_OFFSET(0x1C5BF300)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYFXFOG_OFFSET UNITYSDK_OFFSET(0x1C5C2E60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYLIGHTSHAFTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C5C2790)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTASCULLINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x1C5C3B70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTXGI_OFFSET UNITYSDK_OFFSET(0x1C5C4050)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYVREFFECT_OFFSET UNITYSDK_OFFSET(0x1C5BFED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CALCULATEBLOOMPARAMS3_OFFSET UNITYSDK_OFFSET(0x1C5BEC10)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKIFCAMERAISINDOOR_OFFSET UNITYSDK_OFFSET(0x1C5BE110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKISRAINON_OFFSET UNITYSDK_OFFSET(0x1C5BCDA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKLIGHTMAPSANDAREADIRECT_OFFSET UNITYSDK_OFFSET(0x1C5D0C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CONFIGGLOBALENVPARAMS_OFFSET UNITYSDK_OFFSET(0x1C5BED00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0x1C5C1610)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHCOLORS_OFFSET UNITYSDK_OFFSET(0x1C5BC800)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHUVS_OFFSET UNITYSDK_OFFSET(0x1C5BCAD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHVERTICES_OFFSET UNITYSDK_OFFSET(0x1C5BC530)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETTEXTURECURVEFORMAT_OFFSET UNITYSDK_OFFSET(0x1C5C8A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GET_S_IDENTITYCUBE_OFFSET UNITYSDK_OFFSET(0x1C5BC290)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_ONCAMERAISINDOORCOMPLETEREADBACK_OFFSET UNITYSDK_OFFSET(0x1C5BEB30)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_REFRESHENVIRONMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1C5C8AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCHARACTERPARAMS_OFFSET UNITYSDK_OFFSET(0x1C5BCF60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDLIGHTPARAMS_OFFSET UNITYSDK_OFFSET(0x1C5BDF80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDSHADOWPARAMS_OFFSET UNITYSDK_OFFSET(0x1C5BD960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETOVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1C5D2210)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYCOVER_OFFSET UNITYSDK_OFFSET(0x1C5BBD80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x1C5D1F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C5D2260)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PassUtil_TypeDefinitionIndex = 27108;

	class PassUtil : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Single>** StaticGet_s_RampGalValue()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21D90);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::SkyLutUtils_LinearGraidentColorKey>** StaticGet_s_SkyLutExtraFXGradientCPUData()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::SkyLutUtils_LinearGraidentColorKey>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21D98);
		}
		static ::UnityEngine::Rendering::Universal::Internal::PassUtil_CommonWeatherCpuParams** StaticGet_s_CommonWeatherParams()
		{
			return (::UnityEngine::Rendering::Universal::Internal::PassUtil_CommonWeatherCpuParams**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21DA0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet__meshColorsMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21DA8);
		}
		static ::UnityEngine::ComputeShader** StaticGet_cameraIsIndoorCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21DB0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_CachedShaderIds()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21DB8);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_s_SkyLutExtraFXGradientGPUData()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21DC0);
		}
		static ::UnityEngine::Texture2D** StaticGet_s_SceneSpecialPPSSaturationCustomLut()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21DC8);
		}
		static ::UnityEngine::Rendering::Universal::Internal::PassUtil_SceneWeatherParams* StaticGet_s_CachedSceneWeatherParams()
		{
			return (::UnityEngine::Rendering::Universal::Internal::PassUtil_SceneWeatherParams*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x21DD0);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_s_Pixels()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x22438);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__meshVerticesMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x22440);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet__meshUvsMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x22448);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_RampValue()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x22450);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_cameraIsIndoorrBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x22458);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_SkyLutExtraFXGradientCount()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x22460);
		}
		static ::UnityEngine::Mesh** StaticGet__IdentityCube()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x22468);
		}
		static ::System::Single* StaticGet_cloudRotOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x54F0);
		}
		static ::System::Boolean* StaticGet_s_PreFrameFxFogForSkyBoxIsOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x54F4);
		}
		static ::System::Boolean* StaticGet_s_IsCameraIndoor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x54F5);
		}
		static ::System::Boolean* StaticGet_s_Debug_EnableEngineMaterialKeywordsCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x54F6);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampGapValue2()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x54F8);
		}
		static ::System::Single* StaticGet_cloudMoveOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5508);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart2()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x550C);
		}
		static ::System::Boolean* StaticGet_s_Debug_EnableGamePlayMaterialKeywordsCache()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x554C);
		}
		static ::System::Boolean* StaticGet_s_PreFrameFxFogIsTrue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x554D);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart5()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5550);
		}
		static ::System::Single* StaticGet_screenRainDropTimer()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5590);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampValue2()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5594);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampValue3()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x55A4);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampValue()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x55B4);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart3()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x55C4);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampGapValue()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5604);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart7()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5614);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampGapValue3()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5654);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart4()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5664);
		}
		static ::System::Int32* StaticGet_preTickTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x56A4);
		}
		static ::System::Single* StaticGet_screenRainDropGlobalIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x56A8);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart6()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x56AC);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart1()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x56EC);
		}
		// static const ::System::Int32 maxDepthPyramid = 0xA; // 0x0
		// static const ::System::Single screenRainDropFadeTime; // 0x0
		// static const ::System::Int32 k_Precision = 0x80; // 0x0
		// static const ::System::Single k_Step; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL__CCTOR_OFFSET))();
		}

		static ::System::Void SetSkyCover(::WeatherConfig* config)
		{
			return ((::System::Void(*)(::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYCOVER_OFFSET))(config);
		}

		static ::UnityEngine::Mesh* get_s_IdentityCube()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GET_S_IDENTITYCUBE_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Vector3>* GetMeshVertices(::UnityEngine::Mesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHVERTICES_OFFSET))(mesh);
		}

		static ::Il2CppArray<::UnityEngine::Color>* GetMeshColors(::UnityEngine::Mesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHCOLORS_OFFSET))(mesh);
		}

		static ::Il2CppArray<::UnityEngine::Vector2>* GetMeshUvs(::UnityEngine::Mesh* mesh)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHUVS_OFFSET))(mesh);
		}

		static ::System::Boolean CheckIsRainOn(::WeatherConfig* weatherConfig, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Boolean(*)(::WeatherConfig*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKISRAINON_OFFSET))(weatherConfig, cameraData);
		}

		static ::System::Void SetCharacterParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCHARACTERPARAMS_OFFSET))(cmd, weatherConfig);
		}

		static ::System::Void SetCloudShadowParams(::WeatherConfig* weatherConfig, ::System::Boolean isBlackCanvasOn)
		{
			return ((::System::Void(*)(::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDSHADOWPARAMS_OFFSET))(weatherConfig, isBlackCanvasOn);
		}

		static ::System::Void SetCloudLightParams(::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDLIGHTPARAMS_OFFSET))(weatherConfig);
		}

		static ::System::Boolean CheckIfCameraIsInDoor(::UnityEngine::Texture* heightMap, ::UnityEngine::Vector3 cameraPos, ::UnityEngine::Vector4 sceneBoundBox, ::System::Single heightMapYOffset)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture*, ::UnityEngine::Vector3, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKIFCAMERAISINDOOR_OFFSET))(heightMap, cameraPos, sceneBoundBox, heightMapYOffset);
		}

		static ::System::Void OnCameraIsInDoorCompleteReadBack(::UnityEngine::Rendering::AsyncGPUReadbackRequest request)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_ONCAMERAISINDOORCOMPLETEREADBACK_OFFSET))(request);
		}

		static ::UnityEngine::Vector2 CalculateBloomParams3(::UnityEngine::Vector4 params1)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CALCULATEBLOOMPARAMS3_OFFSET))(params1);
		}

		static ::System::Void ConfigGlobalEnvParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CONFIGGLOBALENVPARAMS_OFFSET))(cmd, cameraData);
		}

		static ::System::Void ApplyCustomLutWithMask(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYCUSTOMLUTWITHMASK_OFFSET))(cmd, config);
		}

		static ::System::Void ApplyCharStylization(::UnityEngine::Rendering::ScriptableRenderContext context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYCHARSTYLIZATION_OFFSET))(context);
		}

		static ::System::Void ApplyVREffect(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYVREFFECT_OFFSET))(context, renderingData, config);
		}

		static ::System::Void DrawVREffectsOutlineDistortion(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::VREffects* vrEffects, ::UnityEngine::Rendering::RenderTargetIdentifier& depthRTId, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::System::Boolean isOffScreen)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::VREffects*, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET))(cmdWrapper, renderingData, vrEffects, depthRTId, destination, isOffScreen);
		}

		static ::System::Void ApplyLightShaftConfig(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYLIGHTSHAFTCONFIG_OFFSET))(cmd, renderingData, config);
		}

		static ::System::Void ApplyFxFog(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config, ::System::Boolean& fxFogForSkyIsOn)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYFXFOG_OFFSET))(context, cmd, renderingData, config, fxFogForSkyIsOn);
		}

		static ::System::Void ApplyRTASCullingSettings(::System::Boolean enablePerformanceMode, ::System::Int32 forcedCPUQualityLevel)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTASCULLINGSETTINGS_OFFSET))(enablePerformanceMode, forcedCPUQualityLevel);
		}

		static ::System::Void ApplyRTXGI(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState& renderState, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config, ::UnityEngine::Camera* cameraMain, ::System::Single indoorWeight)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&, ::UnityEngine::Camera*, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTXGI_OFFSET))(context, cmd, renderState, renderingData, config, cameraMain, indoorWeight);
		}

		static ::UnityEngine::TextureFormat GetTextureCurveFormat()
		{
			return ((::UnityEngine::TextureFormat(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETTEXTURECURVEFORMAT_OFFSET))();
		}

		static ::System::Void RefreshEnvironmentConfig(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState& renderState, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config, ::System::Boolean& fxFogForSkyIsOn)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::ForwardRenderer_ReadonlyRenderState&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_REFRESHENVIRONMENTCONFIG_OFFSET))(context, renderState, renderingData, config, fxFogForSkyIsOn);
		}

		static ::System::Boolean CheckLightmapsAndAreaDirect()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKLIGHTMAPSANDAREADIRECT_OFFSET))();
		}

		static ::System::Void SetSkyPostProcess()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYPOSTPROCESS_OFFSET))();
		}

		static ::System::Void SetOverrideMaterial(::UnityEngine::NAPRenderPipeline0::MaterialDebugMode debugFeature, ::UnityEngine::Rendering::DrawingSettings& drawSettings, ::System::Boolean isTransparent)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::MaterialDebugMode, ::UnityEngine::Rendering::DrawingSettings&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETOVERRIDEMATERIAL_OFFSET))(debugFeature, drawSettings, isTransparent);
		}
	};
}
