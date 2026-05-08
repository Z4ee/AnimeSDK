#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScreenSpaceShadowResolvePass___c__DisplayClass19_0.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ShadowQuality.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Mesh; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B2DDE90)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B2E0A00)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_GETFRUSTUMCUBE_OFFSET UNITYSDK_OFFSET(0x1B2DD260)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_ISHALFRESOLUTION_OFFSET UNITYSDK_OFFSET(0x1B2DDDD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_SETLOCALRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1B2DDA80)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1B2E0AA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2E0AB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2DD0E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS__EXECUTE_G__SETTEXTURETRANSITIONFORRESOLVESHADOWS_19_0_OFFSET UNITYSDK_OFFSET(0x1B2E0810)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ScreenSpaceShadowResolvePass_TypeDefinitionIndex = 5833;

	class ScreenSpaceShadowResolvePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::String** StaticGet_Keyword__HALFRES_SHADOW()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(ScreenSpaceShadowResolvePass_TypeDefinitionIndex)->GetStaticField(0x56E0);
		}
		static ::UnityEngine::Mesh** StaticGet_frustumCube()
		{
			return (::UnityEngine::Mesh**)Il2CppClass::FromTypeDefinitionIndex(ScreenSpaceShadowResolvePass_TypeDefinitionIndex)->GetStaticField(0x56E8);
		}
		::System::Int32 m_ShadowMask_Id; // 0xA8
		::System::Int32 m_ShadowMaskTemp_Id; // 0xAC
		::System::Int32 _ShadowBlurRadiusAndInvSampleCount; // 0xB0
		::System::Int32 _ShadowSampleCount; // 0xB4
		::System::Int32 _TintShadowBlurRadius; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xC0
		::UnityEngine::RenderTextureDescriptor m_ShadowMaskRTDescriptor; // 0xC8
		::UnityEngine::Rendering::RenderTargetIdentifier m_TargetIdentifier; // 0x100
		::System::Int32 m_TargetWidth; // 0x128
		::System::Int32 m_TargetHeight; // 0x12C
		::System::Boolean m_RequirePerObjectShadowPass; // 0x130
		::UnityEngine::MaterialPropertyBlock* m_MaterialPropertyBlock; // 0x138

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::ComputeShader* blurCS)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS__CTOR_OFFSET))(this, evt, blurCS);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Mesh* GetFrustumCube()
		{
			return ((::UnityEngine::Mesh*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_GETFRUSTUMCUBE_OFFSET))();
		}

		::System::Void SetLocalRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::ShadowQuality shadowQuality, ::UnityEngine::RenderTextureDescriptor cameraTextureDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::ShadowQuality, ::UnityEngine::RenderTextureDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_SETLOCALRENDERTARGET_OFFSET))(this, cmd, shadowQuality, cameraTextureDescriptor);
		}

		static ::System::Boolean IsHalfResolution(::UnityEngine::NAPRenderPipeline0::ShadowQuality shadowQuality)
		{
			return ((::System::Boolean(*)(::UnityEngine::NAPRenderPipeline0::ShadowQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_ISHALFRESOLUTION_OFFSET))(shadowQuality);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void Setup(::System::Boolean requirePerObjectShadowPass)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS_SETUP_OFFSET))(this, requirePerObjectShadowPass);
		}

		static ::System::Void _Execute_g__SetTextureTransitionForResolveShadows_19_0(::UnityEngine::NAPRenderPipeline0::ScreenSpaceShadowResolvePass___c__DisplayClass19_0& a1)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::ScreenSpaceShadowResolvePass___c__DisplayClass19_0&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SCREENSPACESHADOWRESOLVEPASS__EXECUTE_G__SETTEXTURETRANSITIONFORRESOLVESHADOWS_19_0_OFFSET))(a1);
		}
	};
}
