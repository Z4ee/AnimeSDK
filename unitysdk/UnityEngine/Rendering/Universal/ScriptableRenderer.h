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

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_AFTERCULLSETUP_OFFSET UNITYSDK_OFFSET(0x19ABFED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEARRENDERINGSTATE_OFFSET UNITYSDK_OFFSET(0x19AC1010)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEAR_1_OFFSET UNITYSDK_OFFSET(0x19ABC8F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CLEAR_OFFSET UNITYSDK_OFFSET(0x19AC1CD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGUREACTIVETARGET_OFFSET UNITYSDK_OFFSET(0x19ABF710)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECAMERATARGET_OFFSET UNITYSDK_OFFSET(0x19ABFA50)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_CONFIGURECLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x19AC4140)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x19ABFA00)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19ABCFA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x19AC4700)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_DRAWUV_OFFSET UNITYSDK_OFFSET(0x19AC46B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENQUEUEPASS_OFFSET UNITYSDK_OFFSET(0x19AC1AC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ENSURECONSOLEVARIABLESINITIALIZED_OFFSET UNITYSDK_OFFSET(0x19ABC790)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTEBLOCK_OFFSET UNITYSDK_OFFSET(0x19AC16B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTERENDERPASS_OFFSET UNITYSDK_OFFSET(0x19AC20D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19AC0250)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FILLBLOCKRANGES_OFFSET UNITYSDK_OFFSET(0x19AC1560)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_FINISHRENDERING_OFFSET UNITYSDK_OFFSET(0x19ABFBF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACLEARFLAG_1_OFFSET UNITYSDK_OFFSET(0x19AC1BD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETCAMERACLEARFLAG_OFFSET UNITYSDK_OFFSET(0x19AC1B50)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETRENDERINGDELTATIME_OFFSET UNITYSDK_OFFSET(0x19AC0210)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GETRENDERINGTIME_OFFSET UNITYSDK_OFFSET(0x19AC01D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_ACTIVERENDERPASSQUEUE_OFFSET UNITYSDK_OFFSET(0x19ABCE00)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERACOLORTARGET_OFFSET UNITYSDK_OFFSET(0x19ABCCE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_CAMERADEPTHTARGET_OFFSET UNITYSDK_OFFSET(0x19ABCD70)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_RENDERINGDELTATIME_OFFSET UNITYSDK_OFFSET(0x19ABCED0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_RENDERINGTIME_OFFSET UNITYSDK_OFFSET(0x19ABCE10)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_GET_SUPPORTEDRENDERINGFEATURES_OFFSET UNITYSDK_OFFSET(0x19ABCF80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_INTERNALFINISHRENDERING_OFFSET UNITYSDK_OFFSET(0x19AC18A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_ISCAMERAPROJECTIONMATRIXFLIPPED_OFFSET UNITYSDK_OFFSET(0x19ABD080)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SCHEDULESRPHELPER_OFFSET UNITYSDK_OFFSET(0x19ABFFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETCAMERAMATRICES_OFFSET UNITYSDK_OFFSET(0x19ABD310)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETCGONLYRENDERSTATE_OFFSET UNITYSDK_OFFSET(0x19ABE750)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETPERCAMERASHADERVARIABLES_OFFSET UNITYSDK_OFFSET(0x19ABD750)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETSHADERGLOBALKEYWORD_OFFSET UNITYSDK_OFFSET(0x19ABE920)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETSHADERTIMEVALUES_OFFSET UNITYSDK_OFFSET(0x19ABE270)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPCULLINGPARAMETERS_OFFSET UNITYSDK_OFFSET(0x19ABFBA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETUPLIGHTS_OFFSET UNITYSDK_OFFSET(0x19ABFB40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_RENDERINGTIME_OFFSET UNITYSDK_OFFSET(0x19ABCE70)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SET_SUPPORTEDRENDERINGFEATURES_OFFSET UNITYSDK_OFFSET(0x19ABCF90)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SORTRENDERPASSQUEUE_OFFSET UNITYSDK_OFFSET(0x19ABFC40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SORTSTABLE_OFFSET UNITYSDK_OFFSET(0x19ABFCD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPCLEARRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x19AC3780)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_1_OFFSET UNITYSDK_OFFSET(0x19AC3C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_2_OFFSET UNITYSDK_OFFSET(0x19AC35C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SRPSETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x19AC3850)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_S_SRPSETRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x19AC41F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_WAITSRPHELPER_OFFSET UNITYSDK_OFFSET(0x19AC00F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AC4760)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABC600)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderer_TypeDefinitionIndex = 30221;

	class ScriptableRenderer : public ::System::Object
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool** StaticGet_disableEarlyZTest()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableBool**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x23A20);
		}
		static ::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*>** StaticGet_m_TrimmedColorStoreAction()
		{
			return (::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>*>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x23A28);
		}
		static ::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*>** StaticGet_m_TrimmedColorLoadAction()
		{
			return (::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>*>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x23A30);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_EnableForwardGBuffer()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x23A38);
		}
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_RTXGIGlobalRouLUT()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x23A40);
		}
		static ::UnityEngine::Rendering::Universal::ScriptableRenderer** StaticGet_current()
		{
			return (::UnityEngine::Rendering::Universal::ScriptableRenderer**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x23A48);
		}
		static ::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*>** StaticGet_m_TrimmedColorAttachmentCopies()
		{
			return (::Il2CppArray<::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x23A50);
		}
		static ::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>** StaticGet_m_ActiveColorAttachments()
		{
			return (::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>**)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x23A58);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_m_ActiveDepthAttachment()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x6170);
		}
		static ::System::Boolean* StaticGet_enableSRPHelper()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x6198);
		}
		static ::System::Boolean* StaticGet_s_ConsoleVariablesInitialized()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x6199);
		}
		static ::System::Boolean* StaticGet_justShowGame()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x619A);
		}
		static ::System::Boolean* StaticGet_s_ClearDepth()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x619B);
		}
		static ::System::Single* StaticGet__RenderingTime_k__BackingField()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x619C);
		}
		static ::System::Single* StaticGet_previousFrameRenderingTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x61A0);
		}
		static ::UnityEngine::Color* StaticGet_s_BackgroundColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x61A4);
		}
		static ::System::Boolean* StaticGet_m_InsideStereoRenderBlock()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x61B4);
		}
		static ::System::Boolean* StaticGet_s_ClearColor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderer_TypeDefinitionIndex)->GetStaticField(0x61B5);
		}
		// static const ::System::Int32 k_RenderPassBlockCount = 0x4; // 0x0
		// static const ::System::String* k_SetCameraRenderStateTag; // 0x0
		// static const ::System::String* k_SetRenderTarget; // 0x0
		// static const ::System::String* k_ReleaseResourcesTag; // 0x0
		::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* _supportedRenderingFeatures_k__BackingField; // 0x10
		::UnityEngine::Profiling::CustomSampler* m_Sampler_IntermediateSubmit; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>* m_ActiveRenderPassQueue; // 0x20
		::System::Boolean m_FirstTimeCameraDepthTargetIsBound; // 0x28
		::System::Boolean m_FirstTimeCameraColorTargetIsBound; // 0x29
		::UnityEngine::Matrix4x4 _GlobalTimeParamsB; // 0x2C
		::UnityEngine::Matrix4x4 _GlobalTimeParamsA; // 0x6C

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

		::System::Void SetShaderTimeValues(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Single time, ::System::Single deltaTime, ::System::Single smoothDeltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_SETSHADERTIMEVALUES_OFFSET))(this, cmd, time, deltaTime, smoothDeltaTime);
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
