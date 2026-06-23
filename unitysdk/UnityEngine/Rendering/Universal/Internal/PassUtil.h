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
#include "unitysdk/UnityEngine/TextureFormat.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

class WeatherConfig;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class NapRenderContext_CurrentFrameRenderConfigs; }
namespace UnityEngine::Rendering::Universal { class VREffects; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYCHARSTYLIZATION_OFFSET UNITYSDK_OFFSET(0x1B1875E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYCUSTOMLUTWITHMASK_OFFSET UNITYSDK_OFFSET(0x1B187110)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYDESATURATIONMASKFORSCENE_OFFSET UNITYSDK_OFFSET(0x1B18ADC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYFXFOG_OFFSET UNITYSDK_OFFSET(0x1B18A2F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYLIGHTSHAFTCONFIG_OFFSET UNITYSDK_OFFSET(0x1B189EE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTASCULLINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B18AEA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTXGI_OFFSET UNITYSDK_OFFSET(0x1B18B390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYSCENEOUTLINE_OFFSET UNITYSDK_OFFSET(0x1B188600)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYSCENESCANLINE_OFFSET UNITYSDK_OFFSET(0x1B1883E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYVREFFECT_OFFSET UNITYSDK_OFFSET(0x1B187AA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CALCULATEBLOOMPARAMS3_OFFSET UNITYSDK_OFFSET(0x1B186970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKIFCAMERAISINDOOR_OFFSET UNITYSDK_OFFSET(0x1B185E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKISRAINON_OFFSET UNITYSDK_OFFSET(0x1B1847C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CHECKLIGHTMAPSANDAREADIRECT_OFFSET UNITYSDK_OFFSET(0x1B19B790)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_CONFIGGLOBALENVPARAMS_OFFSET UNITYSDK_OFFSET(0x1B186A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DISABLECHARSTYLIZATION_OFFSET UNITYSDK_OFFSET(0x1B187080)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DRAWVREFFECTSOUTLINEDISTORTION_OFFSET UNITYSDK_OFFSET(0x1B188EF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHCOLORS_OFFSET UNITYSDK_OFFSET(0x1B184220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHUVS_OFFSET UNITYSDK_OFFSET(0x1B1844F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETMESHVERTICES_OFFSET UNITYSDK_OFFSET(0x1B183F50)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GETTEXTURECURVEFORMAT_OFFSET UNITYSDK_OFFSET(0x1B1918F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_GET_S_IDENTITYCUBE_OFFSET UNITYSDK_OFFSET(0x1B183CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_ONCAMERAISINDOORCOMPLETEREADBACK_OFFSET UNITYSDK_OFFSET(0x1B186890)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_REFRESHENVIRONMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x1B191960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCHARACTERPARAMS_OFFSET UNITYSDK_OFFSET(0x1B184980)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDLIGHTPARAMS_OFFSET UNITYSDK_OFFSET(0x1B185B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDSHADOWPARAMS_OFFSET UNITYSDK_OFFSET(0x1B185390)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETOVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B19C420)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSHADERCONSTANTSPERCAMERA_OFFSET UNITYSDK_OFFSET(0x1B19C470)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYCOVER_OFFSET UNITYSDK_OFFSET(0x1B183970)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSKYPOSTPROCESS_OFFSET UNITYSDK_OFFSET(0x1B19C270)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B19C720)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int PassUtil_TypeDefinitionIndex = 26823;

	class PassUtil : public ::System::Object
	{
	public:
		static ::UnityEngine::Mesh** StaticGet__IdentityCube()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20BD0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet__meshUvsMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20BD8);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_RampGalValue()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20BE0);
		}
		static ::UnityEngine::Texture2D** StaticGet_s_SceneSpecialPPSSaturationCustomLut()
		{
			return (::UnityEngine::Texture2D**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20BE8);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_SkyLutExtraFXGradientCount()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20BF0);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet__meshColorsMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20BF8);
		}
		static ::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet__meshVerticesMap()
		{
			return (::System::Collections::Generic::Dictionary_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20C00);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_cameraIsIndoorrBuffer()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20C08);
		}
		static ::Il2CppArray<::System::Single>** StaticGet_s_RampValue()
		{
			return (::Il2CppArray<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20C10);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::SkyLutUtils_LinearGraidentColorKey>** StaticGet_s_SkyLutExtraFXGradientCPUData()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::SkyLutUtils_LinearGraidentColorKey>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20C18);
		}
		static ::UnityEngine::ComputeShader** StaticGet_cameraIsIndoorCS()
		{
			return (::UnityEngine::ComputeShader**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20C20);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_s_SkyLutExtraFXGradientGPUData()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20C28);
		}
		static ::Il2CppArray<::UnityEngine::Color>** StaticGet_s_Pixels()
		{
			return (::Il2CppArray<::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x20C30);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampGapValue()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5660);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart3()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5670);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampGapValue2()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x56B0);
		}
		static ::System::Int32* StaticGet_preTickTime()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x56C0);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart6()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x56C4);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart4()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5704);
		}
		static ::System::Single* StaticGet_screenRainDropTimer()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5744);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampValue()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5748);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart7()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5758);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart5()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5798);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart1()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x57D8);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampValue3()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5818);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__SceneWeatherParamsPart2()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5828);
		}
		static ::System::Single* StaticGet_cloudRotOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5868);
		}
		static ::System::Single* StaticGet_cloudMoveOffset()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x586C);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampGapValue3()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5870);
		}
		static ::System::Boolean* StaticGet_s_IsCameraIndoor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5880);
		}
		static ::System::Boolean* StaticGet_s_PreFrameFxFogIsTrue()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5881);
		}
		static ::System::Boolean* StaticGet_s_PreFrameFxFogForSkyBoxIsOn()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5882);
		}
		static ::UnityEngine::Vector4* StaticGet_s_CachedRampValue2()
		{
			return (::UnityEngine::Vector4*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5884);
		}
		static ::System::Single* StaticGet_screenRainDropGlobalIntensity()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(PassUtil_TypeDefinitionIndex)->GetStaticField(0x5894);
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

		static ::System::Void SetCloudShadowParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig, ::System::Boolean isBlackCanvasOn)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDSHADOWPARAMS_OFFSET))(cmd, weatherConfig, isBlackCanvasOn);
		}

		static ::System::Void SetCloudLightParams(::UnityEngine::Rendering::CommandBuffer* cmd, ::WeatherConfig* weatherConfig)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::WeatherConfig*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETCLOUDLIGHTPARAMS_OFFSET))(cmd, weatherConfig);
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

		static ::System::Void DisableCharStylization(::UnityEngine::Material* deferredMat)
		{
			return ((::System::Void(*)(::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_DISABLECHARSTYLIZATION_OFFSET))(deferredMat);
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

		static ::System::Void ApplySceneScanline(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYSCENESCANLINE_OFFSET))(cmd, renderingData, config);
		}

		static ::System::Void ApplySceneOutline(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYSCENEOUTLINE_OFFSET))(cmd, renderingData, config);
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

		static ::System::Void ApplyDesaturationMaskForScene(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYDESATURATIONMASKFORSCENE_OFFSET))(cmd, config);
		}

		static ::System::Void ApplyRTASCullingSettings(::System::Boolean enablePerformanceMode, ::System::Int32 forcedCPUQualityLevel)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTASCULLINGSETTINGS_OFFSET))(enablePerformanceMode, forcedCPUQualityLevel);
		}

		static ::System::Void ApplyRTXGI(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*& config, ::System::Single indoorWeight)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::Universal::NapRenderContext_CurrentFrameRenderConfigs*&, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_APPLYRTXGI_OFFSET))(context, cmd, renderingData, config, indoorWeight);
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

		static ::System::Void SetShaderConstantsPerCamera(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_PASSUTIL_SETSHADERCONSTANTSPERCAMERA_OFFSET))(context, cameraData);
		}
	};
}
