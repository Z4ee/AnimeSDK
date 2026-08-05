#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS_DRAWOPAQUEPOSTPROCESSPASS_OFFSET UNITYSDK_OFFSET(0x1EA6CD00)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA6CC80)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS_FINALBLIT_OFFSET UNITYSDK_OFFSET(0x1EA6D4B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS_INTERNAL_DRAWOPAQUEPOSTPROCESSPASS_OFFSET UNITYSDK_OFFSET(0x1EA6CF80)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA6D950)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OpaquePostProcessPass_TypeDefinitionIndex = 5827;

	class OpaquePostProcessPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_k_ProfilerSample()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(OpaquePostProcessPass_TypeDefinitionIndex)->GetStaticField(0x5660);
		}
		static ::Il2CppArray<::UnityEngine::RenderTexture*>** StaticGet_s_TempRTs()
		{
			return (::Il2CppArray<::UnityEngine::RenderTexture*>**)Il2CppClass::FromTypeDefinitionIndex(OpaquePostProcessPass_TypeDefinitionIndex)->GetStaticField(0x5668);
		}
		static ::UnityEngine::Matrix4x4* StaticGet_identityMatrix()
		{
			return (::UnityEngine::Matrix4x4*)Il2CppClass::FromTypeDefinitionIndex(OpaquePostProcessPass_TypeDefinitionIndex)->GetStaticField(0x2E10);
		}
		::UnityEngine::Rendering::RenderTargetIdentifier m_Color; // 0xA8
		::UnityEngine::Rendering::RenderTargetIdentifier m_Depth; // 0xD0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void DrawOpaquePostProcessPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier& colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier& depthBuffer, ::System::Int32 sourceBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS_DRAWOPAQUEPOSTPROCESSPASS_OFFSET))(context, renderingData, colorBuffer, depthBuffer, sourceBuffer);
		}

		static ::System::Void Internal_DrawOpaquePostProcessPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::Rendering::RenderTargetIdentifier& colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier& depthBuffer, ::System::Int32 sourceBuffer, ::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Int32, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS_INTERNAL_DRAWOPAQUEPOSTPROCESSPASS_OFFSET))(context, renderingData, colorBuffer, depthBuffer, sourceBuffer, cmd);
		}

		static ::System::Void FinalBlit(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::RenderTargetIdentifier inputTex, ::System::Boolean withDistortion, ::UnityEngine::Rendering::RenderTargetIdentifier colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier depthBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::System::Boolean, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASS_FINALBLIT_OFFSET))(cmd, inputTex, withDistortion, colorBuffer, depthBuffer);
		}
	};
}
