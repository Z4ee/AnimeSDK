#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ClearFlag.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CommandBufferWrapper.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Rendering/CullingResults.h"
#include "unitysdk/UnityEngine/Rendering/DrawingSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferLoadAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderBufferStoreAction.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/SortingCriteria.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Threading { class AutoResetEvent; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class MaterialWrapper; }
namespace UnityEngine::NAPRenderPipeline0 { class ScriptableRenderPass_PassRefCountDebugBlock; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_AFTERCULLSETUP_OFFSET UNITYSDK_OFFSET(0x1B4C57B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_BLIT_1_OFFSET UNITYSDK_OFFSET(0x1B4C5C30)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_BLIT_CLEARCOLOR_OFFSET UNITYSDK_OFFSET(0x1B4C59F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_BLIT_OFFSET UNITYSDK_OFFSET(0x1B4C57E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CANCELCONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0x1B4C5770)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CHECKSRPHELPERPASSESPROPERLYSYNCED_OFFSET UNITYSDK_OFFSET(0x1B4C64B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CONFIGURECLEAR_OFFSET UNITYSDK_OFFSET(0x1B4C5780)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CONFIGURETARGET_1_OFFSET UNITYSDK_OFFSET(0x1B4C5640)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET UNITYSDK_OFFSET(0x1B4C55E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1B4C57A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_1_OFFSET UNITYSDK_OFFSET(0x1B4BFDD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_2_OFFSET UNITYSDK_OFFSET(0x1B4C5D70)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_3_OFFSET UNITYSDK_OFFSET(0x1B4C6220)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_OFFSET UNITYSDK_OFFSET(0x1B4C2E50)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_EXECUTEONSRPHELPER_OFFSET UNITYSDK_OFFSET(0x1B4C57D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4C5560)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B4C57C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_CLEARCOLOR_OFFSET UNITYSDK_OFFSET(0x1B4C5510)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_CLEARFLAG_OFFSET UNITYSDK_OFFSET(0x1B4C54F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_COLORATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1B4C5470)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_COLORATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1B4C5480)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_DEPTHATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1B4C54D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_OVERRIDECAMERATARGET_OFFSET UNITYSDK_OFFSET(0x1B4C5530)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_RENDERPASSEVENT_OFFSET UNITYSDK_OFFSET(0x1B4C5450)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1B4C6320)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SETCANRUNONSRPHELPER_OFFSET UNITYSDK_OFFSET(0x1B4C64A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SETSIGNALONSRPHELPER_OFFSET UNITYSDK_OFFSET(0x1B4C6430)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SETUPFORSRPHELPER_OFFSET UNITYSDK_OFFSET(0x1B4C6350)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SET_EYEINDEX_OFFSET UNITYSDK_OFFSET(0x1B4C5520)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SET_ISBLITRENDERPASS_OFFSET UNITYSDK_OFFSET(0x1B4C5550)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SET_OVERRIDECAMERATARGET_OFFSET UNITYSDK_OFFSET(0x1B4C5540)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SET_RENDERPASSEVENT_OFFSET UNITYSDK_OFFSET(0x1B4C5460)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SHOULDEXECUTEONSRPHELPER_OFFSET UNITYSDK_OFFSET(0x1B4C63D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_WAITSIGNALONMAIN_OFFSET UNITYSDK_OFFSET(0x1B4C63F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4C64C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BF010)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScriptableRenderPass_TypeDefinitionIndex = 5948;

	class ScriptableRenderPass : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_DefaultRTI1()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderPass_TypeDefinitionIndex)->GetStaticField(0x2860);
		}
		static ::System::Boolean* StaticGet_EnablePassRefCountDebug()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(ScriptableRenderPass_TypeDefinitionIndex)->GetStaticField(0x2888);
		}
		::UnityEngine::NAPRenderPipeline0::RenderPassEvent _renderPassEvent_k__BackingField; // 0x10
		::System::Int32 _eyeIndex_k__BackingField; // 0x14
		::System::Boolean _overrideCameraTarget_k__BackingField; // 0x18
		::System::Boolean _isBlitRenderPass_k__BackingField; // 0x19
		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* m_ColorAttachments; // 0x20
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferLoadAction>* m_ColorLoadActions; // 0x28
		::Il2CppArray<::UnityEngine::Rendering::RenderBufferStoreAction>* m_ColorStoreActions; // 0x30
		::UnityEngine::Rendering::RenderTargetIdentifier m_DepthAttachment; // 0x38
		::UnityEngine::Rendering::RenderBufferLoadAction m_DepthLoadAction; // 0x60
		::UnityEngine::Rendering::RenderBufferStoreAction m_DepthStoreAction; // 0x64
		::System::Boolean m_ClearColor; // 0x68
		::System::Boolean m_ClearDepth; // 0x69
		::UnityEngine::Rect m_ViewPort; // 0x6C
		::System::Boolean m_RectViewPort; // 0x7C
		::System::Boolean m_SubmitAfterExecute; // 0x7D
		::System::Boolean m_CheckExistDrawRenderer; // 0x7E
		::System::Boolean m_CanRunOnSRPHelper; // 0x7F
		::UnityEngine::Color m_BackgroundColor; // 0x80
		::System::Threading::AutoResetEvent* m_SRPHelperDoneSignal; // 0x90
		::UnityEngine::Profiling::CustomSampler* m_PassSampler; // 0x98
		::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass_PassRefCountDebugBlock* m_DebugBlock; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS__CCTOR_OFFSET))();
		}

		::UnityEngine::NAPRenderPipeline0::RenderPassEvent get_renderPassEvent()
		{
			return ((::UnityEngine::NAPRenderPipeline0::RenderPassEvent(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_RENDERPASSEVENT_OFFSET))(this);
		}

		::System::Void set_renderPassEvent(::UnityEngine::NAPRenderPipeline0::RenderPassEvent value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SET_RENDERPASSEVENT_OFFSET))(this, value);
		}

		::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>* get_colorAttachments()
		{
			return ((::Il2CppArray<::UnityEngine::Rendering::RenderTargetIdentifier>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_COLORATTACHMENTS_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier get_colorAttachment()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_COLORATTACHMENT_OFFSET))(this);
		}

		::UnityEngine::Rendering::RenderTargetIdentifier get_depthAttachment()
		{
			return ((::UnityEngine::Rendering::RenderTargetIdentifier(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_DEPTHATTACHMENT_OFFSET))(this);
		}

		::UnityEngine::NAPRenderPipeline0::ClearFlag get_clearFlag()
		{
			return ((::UnityEngine::NAPRenderPipeline0::ClearFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_CLEARFLAG_OFFSET))(this);
		}

		::UnityEngine::Color get_clearColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_CLEARCOLOR_OFFSET))(this);
		}

		::System::Void set_eyeIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SET_EYEINDEX_OFFSET))(this, value);
		}

		::System::Boolean get_overrideCameraTarget()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_GET_OVERRIDECAMERATARGET_OFFSET))(this);
		}

		::System::Void set_overrideCameraTarget(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SET_OVERRIDECAMERATARGET_OFFSET))(this, value);
		}

		::System::Void set_isBlitRenderPass(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SET_ISBLITRENDERPASS_OFFSET))(this, value);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_FINALIZE_OFFSET))(this);
		}

		::System::Void ConfigureTarget(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction colorBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier depthAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction depthBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction depthBufferStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CONFIGURETARGET_OFFSET))(this, colorAttachment, colorBufferLoadAction, colorBufferStoreAction, depthAttachment, depthBufferLoadAction, depthBufferStoreAction);
		}

		::System::Void ConfigureTarget_1(::UnityEngine::Rendering::RenderTargetIdentifier colorAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction colorBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction colorBufferStoreAction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CONFIGURETARGET_1_OFFSET))(this, colorAttachment, colorBufferLoadAction, colorBufferStoreAction);
		}

		::System::Void CancelConfigureTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CANCELCONFIGURETARGET_OFFSET))(this);
		}

		::System::Void ConfigureClear(::System::Boolean clearColor, ::System::Boolean clearDepth, ::UnityEngine::Color backgroundColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CONFIGURECLEAR_OFFSET))(this, clearColor, clearDepth, backgroundColor);
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CONFIGURE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void AfterCullSetup(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::CullingResults& cullingResults)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::CullingResults&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_AFTERCULLSETUP_OFFSET))(this, context, renderingData, cullingResults);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void ExecuteOnSRPHelper(::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_EXECUTEONSRPHELPER_OFFSET))(this, renderingData);
		}

		static ::System::Void Blit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Material* material, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_BLIT_OFFSET))(cmd, source, destination, material, passIndex);
		}

		static ::System::Void Blit_ClearColor(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier source, ::UnityEngine::Rendering::RenderTargetIdentifier destination, ::UnityEngine::Material* material, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_BLIT_CLEARCOLOR_OFFSET))(cmd, source, destination, material, passIndex);
		}

		static ::System::Void Blit_1(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper& cmdWrapper, ::UnityEngine::Rendering::RenderTargetIdentifier& source, ::UnityEngine::Rendering::RenderTargetIdentifier& destination, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper* matWrapper, ::System::Int32 passIndex)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::CommandBufferWrapper&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::NAPRenderPipeline0::MaterialWrapper*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_BLIT_1_OFFSET))(cmdWrapper, source, destination, matWrapper, passIndex);
		}

		static ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings(::UnityEngine::Rendering::ShaderTagId shaderTagId, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria)
		{
			return ((::UnityEngine::Rendering::DrawingSettings(*)(::UnityEngine::Rendering::ShaderTagId, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::SortingCriteria))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_OFFSET))(shaderTagId, renderingData, sortingCriteria);
		}

		static ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings_1(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria, ::UnityEngine::Material* debugMaterial)
		{
			return ((::UnityEngine::Rendering::DrawingSettings(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::SortingCriteria, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_1_OFFSET))(shaderTagIdList, renderingData, sortingCriteria, debugMaterial);
		}

		static ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings_2(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria)
		{
			return ((::UnityEngine::Rendering::DrawingSettings(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::SortingCriteria))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_2_OFFSET))(shaderTagIdList, renderingData, sortingCriteria);
		}

		static ::UnityEngine::Rendering::DrawingSettings CreateDrawingSettings_3(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* shaderTagIdList, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::SortingCriteria sortingCriteria, ::System::Boolean bTranslucencyPass)
		{
			return ((::UnityEngine::Rendering::DrawingSettings(*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>*, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::SortingCriteria, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CREATEDRAWINGSETTINGS_3_OFFSET))(shaderTagIdList, renderingData, sortingCriteria, bTranslucencyPass);
		}

		static ::System::Boolean op_LessThan(::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* lhs, ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass* rhs)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*, ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_OP_LESSTHAN_OFFSET))(lhs, rhs);
		}

		::System::Void SetupForSRPHelper(::System::Boolean runOnSRPHelper)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SETUPFORSRPHELPER_OFFSET))(this, runOnSRPHelper);
		}

		::System::Boolean ShouldExecuteOnSRPHelper()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SHOULDEXECUTEONSRPHELPER_OFFSET))(this);
		}

		::System::Void WaitSignalOnMain()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_WAITSIGNALONMAIN_OFFSET))(this);
		}

		::System::Void SetSignalOnSRPHelper()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SETSIGNALONSRPHELPER_OFFSET))(this);
		}

		::System::Void SetCanRunOnSRPHelper(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_SETCANRUNONSRPHELPER_OFFSET))(this, value);
		}

		static ::System::Void CheckSRPHelperPassesProperlySynced(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>* passes)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCRIPTABLERENDERPASS_CHECKSRPHELPERPASSESPROPERLYSYNCED_OFFSET))(passes);
		}
	};
}
