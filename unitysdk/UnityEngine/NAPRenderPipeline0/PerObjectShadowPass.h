#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/DirtyCache_1.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Profiling { class CustomSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x19A9F5D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x19AA1D10)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x19AA1DC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x19A9F4B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x19AA2020)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowPass_TypeDefinitionIndex = 29770;

	class PerObjectShadowPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetCachedSharedMaterials()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C20);
		}
		static ::UnityEngine::ComputeBuffer** StaticGet_dummyUAV()
		{
			return (::UnityEngine::ComputeBuffer**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C28);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CommandDrawRenderer()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C30);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ResetViewport()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C38);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckMaterialNeedDrawAndDrawRenderer()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C40);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector4>** StaticGet_dummyUAVData()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C48);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckRendererMaterialAndDraw()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C50);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckMaterialNeedDraw()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C58);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetGlobalVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C60);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetPerEntityVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C68);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CreateBuffer()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C70);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetIPerObjectShadowRenderer()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C78);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetViewport()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C80);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_ResetGlobalVariables()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C88);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckIsMaterialAlive()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C90);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_SetRenderTarget()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23C98);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckIsValid()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23CA0);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_GetSubMeshCount()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23CA8);
		}
		static ::UnityEngine::Profiling::CustomSampler** StaticGet_sampler_CheckRendererNeedDraw()
		{
			return (::UnityEngine::Profiling::CustomSampler**)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x23CB0);
		}
		static ::UnityEngine::NAPRenderPipeline0::DirtyCache_1<::System::Single>* StaticGet_depthBiasCache()
		{
			return (::UnityEngine::NAPRenderPipeline0::DirtyCache_1<::System::Single>*)Il2CppClass::FromTypeDefinitionIndex(PerObjectShadowPass_TypeDefinitionIndex)->GetStaticField(0x6550);
		}
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* profilingSampler; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CTOR_OFFSET))(this, renderPassEvent);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
