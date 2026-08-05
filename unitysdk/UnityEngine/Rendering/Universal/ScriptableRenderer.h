#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/CameraClearFlags.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraRenderType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ClearFlag.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/GizmoSubset.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableCullingParameters.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ConsoleVariableBool; }
namespace UnityEngine::NAPRenderPipeline0 { class ScriptableRenderPass; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class ScriptableRendererData; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer_RenderingFeatures; }
namespace UnityEngine::Rendering::Universal { class UniversalRenderPipelineAsset; }
namespace UnityEngine::Rendering::Unversal { class SRPHelperExecuteContext; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_AFTERCULLSETUP_OFFSET UNITYSDK_OFFSET(0x1CF02EC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEARRENDERINGSTATE_OFFSET UNITYSDK_OFFSET(0x1CF040A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x1CF00440)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CF04BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGUREACTIVETARGET_OFFSET UNITYSDK_OFFSET(0x1CF02700)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERATARGET_OFFSET UNITYSDK_OFFSET(0x1CF02A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1CF06FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1CF029E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CF00B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1CF075B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWUV_OFFSET UNITYSDK_OFFSET(0x1CF07560)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENQUEUEPASS_OFFSET UNITYSDK_OFFSET(0x1CF049D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENSURECONSOLEVARIABLESINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CF002E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTEBLOCK_OFFSET UNITYSDK_OFFSET(0x1CF045B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTERENDERPASS_OFFSET UNITYSDK_OFFSET(0x1CF04FE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CF03240)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FILLBLOCKRANGES_OFFSET UNITYSDK_OFFSET(0x1CF04460)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0x1CF02BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FLUSHSHADERTIMEVALUES_OFFSET UNITYSDK_OFFSET(0x1CF01FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACLEARFLAG_1_OFFSET UNITYSDK_OFFSET(0x1CF04AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACLEARFLAG_OFFSET UNITYSDK_OFFSET(0x1CF04A60)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETRENDERINGDELTATIME_OFFSET UNITYSDK_OFFSET(0x1CF03200)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETRENDERINGTIME_OFFSET UNITYSDK_OFFSET(0x1CF031C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETSHADERTIMEVALUES_OFFSET UNITYSDK_OFFSET(0x1CF01C50)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_ACTIVERENDERPASSQUEUE_OFFSET UNITYSDK_OFFSET(0x1CF00960)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERACOLORTARGET_OFFSET UNITYSDK_OFFSET(0x1CF00840)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERADEPTHTARGET_OFFSET UNITYSDK_OFFSET(0x1CF008D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_RENDERINGDELTATIME_OFFSET UNITYSDK_OFFSET(0x1CF00A30)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_RENDERINGTIME_OFFSET UNITYSDK_OFFSET(0x1CF00970)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_SUPPORTEDRENDERINGFEATURES_OFFSET UNITYSDK_OFFSET(0x1CF00AE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INTERNALFINISHRENDERING_OFFSET UNITYSDK_OFFSET(0x1CF047B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ISCAMERAPROJECTIONMATRIXFLIPPED_OFFSET UNITYSDK_OFFSET(0x1CF00BE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SCHEDULESRPHELPER_OFFSET UNITYSDK_OFFSET(0x1CF02FC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETCAMERAMATRICES_OFFSET UNITYSDK_OFFSET(0x1CF00E70)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETCGONLYRENDERSTATE_OFFSET UNITYSDK_OFFSET(0x1CF02170)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERASHADERVARIABLES_OFFSET UNITYSDK_OFFSET(0x1CF012B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETSHADERGLOBALKEYWORD_OFFSET UNITYSDK_OFFSET(0x1CF02340)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CF02B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0x1CF02B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_RENDERINGTIME_OFFSET UNITYSDK_OFFSET(0x1CF009D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_SUPPORTEDRENDERINGFEATURES_OFFSET UNITYSDK_OFFSET(0x1CF00AF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SORTRENDERPASSQUEUE_OFFSET UNITYSDK_OFFSET(0x1CF02C20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SORTSTABLE_OFFSET UNITYSDK_OFFSET(0x1CF02CB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPCLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1CF06690)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x1CF06B10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x1CF064D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1CF06750)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_S_SRPSETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1CF07090)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_WAITSRPHELPER_OFFSET UNITYSDK_OFFSET(0x1CF030E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CF07610)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF00190)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderer_TypeDefinitionIndex = 27036;

	class ScriptableRenderer : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableForwardGBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x22A80);
		}
		static ::UnityEngine::Rendering::Universal::ScriptableRenderer** StaticGet_current()
		{
			return (::UnityEngine::Rendering::Universal::ScriptableRenderer**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x22A88);
		}
		static ::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*>** StaticGet_m_TrimmedColorAttachmentCopies()
		{
			return (::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x22A90);
		}
		static ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>** StaticGet_m_ActiveColorAttachments()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x22A98);
		}
		static ::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*>** StaticGet_m_TrimmedColorLoadAction()
		{
			return (::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x22AA0);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool** StaticGet_disableEarlyZTest()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x22AA8);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIGlobalRouLUT()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x22AB0);
		}
		static ::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*>** StaticGet_m_TrimmedColorStoreAction()
		{
			return (::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x22AB8);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_m_ActiveDepthAttachment()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5BE0);
		}
		static ::System::Single* StaticGet__RenderingTime_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5C08);
		}
		static ::UnityEngine::Color* StaticGet_s_BackgroundColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5C0C);
		}
		static ::System::Boolean* StaticGet_enableSRPHelper()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5C1C);
		}
		static ::System::Boolean* StaticGet_m_InsideStereoRenderBlock()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5C1D);
		}
		static ::System::Boolean* StaticGet_s_ConsoleVariablesInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5C1E);
		}
		static ::System::Boolean* StaticGet_justShowGame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5C1F);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__GlobalTimeParamsB()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5C20);
		}
		static ::UnityEngine::Matrix4x4* StaticGet__GlobalTimeParamsA()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5C60);
		}
		static ::System::Boolean* StaticGet_s_ClearDepth()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5CA0);
		}
		static ::System::Boolean* StaticGet_s_ClearColor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5CA1);
		}
		static ::System::Single* StaticGet_previousFrameRenderingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x5CA4);
		}
		// static const ::System::Int32 k_RenderPassBlockCount = 0x4; // 0x0
		// static const ::System::String* k_SetCameraRenderStateTag; // 0x0
		// static const ::System::String* k_SetRenderTarget; // 0x0
		// static const ::System::String* k_ReleaseResourcesTag; // 0x0
		::UnityEngine::Profiling::CustomSampler* m_Sampler_IntermediateSubmit; // 0x10
		::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* _supportedRenderingFeatures_k__BackingField; // 0x18
		::UnityEngine::Profiling::CustomSampler* sampler_CharacterRendering; // 0x20
		::UnityEngine::Profiling::CustomSampler* sampler_UpdateBoneForNative; // 0x28
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>* m_ActiveRenderPassQueue; // 0x30
		::System::Boolean m_FirstTimeCameraColorTargetIsBound; // 0x38
		::System::Boolean m_FirstTimeCameraDepthTargetIsBound; // 0x39

		::System::Void _ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData* data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScriptableRendererData*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER__CTOR_OFFSET))(this, data);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraColorTarget()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERACOLORTARGET_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderTargetIdentifier get_cameraDepthTarget()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERADEPTHTARGET_OFFSET))();
		}

		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>* get_activeRenderPassQueue()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_ACTIVERENDERPASSQUEUE_OFFSET))(this);
		}

		static ::System::Single get_RenderingTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_RENDERINGTIME_OFFSET))();
		}

		static ::System::Void set_RenderingTime(::System::Single value)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_RENDERINGTIME_OFFSET))(value);
		}

		static ::System::Single get_RenderingDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_RENDERINGDELTATIME_OFFSET))();
		}

		::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* get_supportedRenderingFeatures()
		{
			return ((::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_SUPPORTEDRENDERINGFEATURES_OFFSET))(this);
		}

		::System::Void set_supportedRenderingFeatures(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_SUPPORTEDRENDERINGFEATURES_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_OFFSET))(this);
		}

		static ::System::Boolean IsCameraProjectionMatrixFlipped(::UnityEngine::RenderTexture* targetTexture)
		{
			return ((::System::Boolean(*)(::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ISCAMERAPROJECTIONMATRIXFLIPPED_OFFSET))(targetTexture);
		}

		static ::System::Void SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean setInverseMatrices)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETCAMERAMATRICES_OFFSET))(cmd, cameraData, setInverseMatrices);
		}

		::System::Void SetPerCameraShaderVariables(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERASHADERVARIABLES_OFFSET))(this, cmd, cameraData);
		}

		static ::System::Void GetShaderTimeValues(::System::Single time, ::System::Single deltaTime, ::System::Single smoothDeltaTime)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETSHADERTIMEVALUES_OFFSET))(time, deltaTime, smoothDeltaTime);
		}

		::System::Void FlushShaderTimeValues(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FLUSHSHADERTIMEVALUES_OFFSET))(this, cmd);
		}

		::System::Void SetCGOnlyRenderState(::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETCGONLYRENDERSTATE_OFFSET))(this, postCullRenderingData);
		}

		static ::System::Void EnsureConsoleVariablesInitialized()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENSURECONSOLEVARIABLESINITIALIZED_OFFSET))();
		}

		::System::Void SetShaderGlobalKeyword(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETSHADERGLOBALKEYWORD_OFFSET))(this, cmd, cameraData);
		}

		static ::System::Void ConfigureActiveTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGUREACTIVETARGET_OFFSET))(colorAttachment, depthAttachment);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_1_OFFSET))(this, disposing);
		}

		::System::Void ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorTarget, ::UnityEngine::Rendering::RenderTargetIdentifier depthTarget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERATARGET_OFFSET))(this, colorTarget, depthTarget);
		}

		::System::Void SetupLights(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPLIGHTS_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void SetupCullingParameters(::UnityEngine::Rendering::ScriptableCullingParameters& cullingParameters, ::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableCullingParameters&, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPCULLINGPARAMETERS_OFFSET))(this, cullingParameters, cameraData);
		}

		::System::Void FinishRendering(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINISHRENDERING_OFFSET))(this, cmd);
		}

		::System::Void SortRenderPassQueue()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SORTRENDERPASSQUEUE_OFFSET))(this);
		}

		::System::Void AfterCullSetup(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CullingResults& cullingResults)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CullingResults&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_AFTERCULLSETUP_OFFSET))(this, context, renderingData, cullingResults);
		}

		::System::Void ScheduleSRPHelper(::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SCHEDULESRPHELPER_OFFSET))(this, context);
		}

		::System::Void WaitSRPHelper(::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Unversal::SRPHelperExecuteContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_WAITSRPHELPER_OFFSET))(this, context);
		}

		static ::System::Single GetRenderingTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETRENDERINGTIME_OFFSET))();
		}

		static ::System::Single GetRenderingDeltaTime()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETRENDERINGDELTATIME_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void EnqueuePass(::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* pass)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENQUEUEPASS_OFFSET))(this, pass);
		}

		static ::UnityEngine::NAPRenderPipeline0::ClearFlag GetCameraClearFlag(::UnityEngine::CameraClearFlags cameraClearFlags)
		{
			return ((::UnityEngine::NAPRenderPipeline0::ClearFlag(*)(::UnityEngine::CameraClearFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACLEARFLAG_OFFSET))(cameraClearFlags);
		}

		static ::UnityEngine::NAPRenderPipeline0::ClearFlag GetCameraClearFlag_1(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::UnityEngine::NAPRenderPipeline0::ClearFlag(*)(::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACLEARFLAG_1_OFFSET))(cameraData);
		}

		::System::Void ClearRenderingState(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEARRENDERINGSTATE_OFFSET))(this, cmd);
		}

		::System::Void Clear(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEAR_OFFSET))(this, cameraData);
		}

		::System::Void Clear_1(::UnityEngine::NAPRenderPipeline0::CameraRenderType renderType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraRenderType))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEAR_1_OFFSET))(this, renderType);
		}

		::System::Void ExecuteBlock(::System::Int32 blockIndex, ::Unity::Collections::NativeArray_1<::System::Int32> blockRanges, ::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRendering, ::System::Int32 eyeIndex, ::System::Boolean submit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Int32>, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTEBLOCK_OFFSET))(this, blockIndex, blockRanges, context, renderingData, postCullRendering, eyeIndex, submit);
		}

		::System::Void ExecuteRenderPass(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* renderPass, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::System::Int32 eyeIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTERENDERPASS_OFFSET))(this, context, renderPass, renderingData, postCullRenderingData, eyeIndex);
		}

		static ::System::Void ConfigureClearRenderTarget(::System::Boolean clearColor, ::System::Boolean clearDepth, ::UnityEngine::Color backgroundColor)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECLEARRENDERTARGET_OFFSET))(clearColor, clearDepth, backgroundColor);
		}

		static ::System::Void SRPSetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_OFFSET))(cmd, colorAttachment, depthAttachment);
		}

		::System::Void SRPSetRenderTarget_1(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction colorBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_1_OFFSET))(this, cmd, colorAttachment, colorBufferLoadAction, colorBufferStoreAction, depthAttachment, depthLoadAction, depthStoreAction);
		}

		static ::System::Void S_SRPSetRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction colorBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_S_SRPSETRENDERTARGET_OFFSET))(cmd, colorAttachment, colorBufferLoadAction, colorBufferStoreAction, depthAttachment, depthLoadAction, depthStoreAction);
		}

		::System::Void SRPSetRenderTarget_2(::UnityEngine::Rendering::CommandBuffer* cmd, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* colorAttachments, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* colorBufferLoadActions, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* colorBufferStoreActions, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*, ::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_2_OFFSET))(this, cmd, colorAttachments, colorBufferLoadActions, colorBufferStoreActions, depthAttachment, depthLoadAction, depthStoreAction);
		}

		::System::Void SRPClearRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Boolean clearColor, ::System::Boolean clearDepth, ::UnityEngine::Color backgroundColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPCLEARRENDERTARGET_OFFSET))(this, cmd, clearColor, clearDepth, backgroundColor);
		}

		::System::Void DrawUV(::UnityEngine::Rendering::ScriptableRenderContext context)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWUV_OFFSET))(this, context);
		}

		::System::Void DrawGizmos(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::GizmoSubset gizmoSubset)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, ::UnityEngine::Rendering::GizmoSubset))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWGIZMOS_OFFSET))(this, context, camera, gizmoSubset);
		}

		::System::Void FillBlockRanges(::Unity::Collections::NativeArray_1<::UnityEngine::NAPRenderPipeline0::RenderPassEvent> blockEventLimits, ::Unity::Collections::NativeArray_1<::System::Int32> blockRanges)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::UnityEngine::NAPRenderPipeline0::RenderPassEvent>, ::Unity::Collections::NativeArray_1<::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FILLBLOCKRANGES_OFFSET))(this, blockEventLimits, blockRanges);
		}

		::System::Void InternalFinishRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Boolean resolveFinalTarget, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::System::Boolean, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INTERNALFINISHRENDERING_OFFSET))(this, context, resolveFinalTarget, renderingData);
		}

		static ::System::Void SortStable(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>* list)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SORTSTABLE_OFFSET))(list);
		}
	};
}
