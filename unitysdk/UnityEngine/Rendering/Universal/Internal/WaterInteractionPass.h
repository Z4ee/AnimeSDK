#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::NAPRenderPipeline0 { template <typename T> class ConsoleVariableT_1; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class WaterInteractionManager_WaterInteractiveRenderItem; }
namespace UnityEngine::Rendering::Universal { class WaterInteractiveObject; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterInteractionPass_GlobalHistoryBufferDatas; }
namespace UnityEngine::Rendering::Universal::Internal { class WaterInteractionPass_WaterDepthHistoryBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_ALLOCATERESOURCE_OFFSET UNITYSDK_OFFSET(0x1C4467D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_CHECKALLOCATETEXTURE_OFFSET UNITYSDK_OFFSET(0x1C44CAB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_CLEANUP_1_OFFSET UNITYSDK_OFFSET(0x1C44CA20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1C44C960)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_CLEARRENDERTEXTURE_OFFSET UNITYSDK_OFFSET(0x1C446B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_DRAWINTERACTIVEOBJECTTODEPTH_OFFSET UNITYSDK_OFFSET(0x1C446D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C447380)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_MARKDEPTHTEXTUREDIRTY_OFFSET UNITYSDK_OFFSET(0x1C446520)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_RESETHEIGHTMAPINDEX_OFFSET UNITYSDK_OFFSET(0x1C446700)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1C446D20)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C44CF60)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4465A0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int WaterInteractionPass_TypeDefinitionIndex = 26397;

	class WaterInteractionPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>** StaticGet_WaterInteractionDebug()
		{
			return (::UnityEngine::NAPRenderPipeline0::ConsoleVariableT_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionPass_TypeDefinitionIndex)->GetStaticField(0x22200);
		}
		static ::System::Boolean* StaticGet_s_DepthTextureDirty()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(WaterInteractionPass_TypeDefinitionIndex)->GetStaticField(0x7300);
		}
		// static const ::System::Int32 WaterInteractKernelID = 0x0; // 0x0
		// static const ::System::Int32 InitWaterHeightKernelID = 0x1; // 0x0
		::UnityEngine::MaterialPropertyBlock* dynamicObjectProperty; // 0xA8
		::UnityEngine::RenderTexture* m_PreviousWaterHeightMap; // 0xB0
		::UnityEngine::RenderTexture* m_StaticDepthTexture; // 0xB8
		::UnityEngine::RenderTexture* m_CurrentWaterHeightMap; // 0xC0
		::UnityEngine::ComputeShader* m_SetupWaterHeightCS; // 0xC8
		::UnityEngine::RenderTexture* m_PrePreviousWaterHeightMap; // 0xD0
		::UnityEngine::Rendering::Universal::Internal::WaterInteractionPass_WaterDepthHistoryBuffer* m_DepthHistory; // 0xD8
		::System::String* m_ProfilerTag; // 0xE0
		::UnityEngine::ComputeShader* m_WaterInteractCS; // 0xE8
		::UnityEngine::MaterialPropertyBlock* staticObjectProperty; // 0xF0
		::UnityEngine::RenderTexture* m_WaterInteractionObjectDepthTexture; // 0xF8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0x100
		::UnityEngine::Rendering::Universal::Internal::WaterInteractionPass_GlobalHistoryBufferDatas* m_HistoryBufferDatas; // 0x108
		::UnityEngine::RenderTexture* m_DynamicDepthTexture; // 0x110
		::UnityEngine::RenderTexture* m_TempWaterHeightMap; // 0x118
		::System::Boolean m_IsFirstFrame; // 0x120
		::System::Boolean m_StaticBoundaryInitialized; // 0x121
		::System::Boolean bAllocated; // 0x122
		::System::Single m_TimeUpdate; // 0x124
		::System::Int32 m_InteractionTextureSize; // 0x128

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::ComputeShader* waterInteractCS, ::UnityEngine::ComputeShader* setupWaterHeightCS)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, waterInteractCS, setupWaterHeightCS);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS__CCTOR_OFFSET))();
		}

		static ::System::Void MarkDepthTextureDirty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_MARKDEPTHTEXTUREDIRTY_OFFSET))();
		}

		::System::Void ResetHeightMapIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_RESETHEIGHTMAPINDEX_OFFSET))(this);
		}

		::System::Void AllocateResource(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_ALLOCATERESOURCE_OFFSET))(this, cameraData);
		}

		::System::Void ClearRenderTexture(::UnityEngine::RenderTexture* rt, ::UnityEngine::Color clearColor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_CLEARRENDERTEXTURE_OFFSET))(this, rt, clearColor);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::CameraData& cameraData, ::System::Boolean isPreviewOrUIOrReflectionCamera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_SETUP_OFFSET))(this, cameraData, isPreviewOrUIOrReflectionCamera);
		}

		::System::Void DrawInteractiveObjectToDepth(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Material* material, ::UnityEngine::Rendering::Universal::WaterInteractiveObject* obj, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>* renderers, ::System::Boolean isStatic)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::Universal::WaterInteractiveObject*, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::WaterInteractionManager_WaterInteractiveRenderItem*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_DRAWINTERACTIVEOBJECTTODEPTH_OFFSET))(this, cmd, material, obj, renderers, isStatic);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_CLEANUP_OFFSET))(this);
		}

		::System::Void CleanUp_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_CLEANUP_1_OFFSET))(this);
		}

		::System::Boolean CheckAllocateTexture(::UnityEngine::RenderTexture*& texture, ::System::Int32 width, ::System::Int32 height, ::System::String* textureName, ::UnityEngine::RenderTextureFormat format)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTexture*&, ::System::Int32, ::System::Int32, ::System::String*, ::UnityEngine::RenderTextureFormat))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_WATERINTERACTIONPASS_CHECKALLOCATETEXTURE_OFFSET))(this, texture, width, height, textureName, format);
		}
	};
}
