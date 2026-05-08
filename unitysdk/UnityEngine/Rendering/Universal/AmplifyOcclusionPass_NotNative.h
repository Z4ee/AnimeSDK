#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/GraphicsFormat.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/SSAOQuality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class AmplifyOcclusion; }

#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A2F4B80)
#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1A2F5970)
#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_PREPARESSAO_OFFSET UNITYSDK_OFFSET(0x1A2F2FA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_SETUP_OFFSET UNITYSDK_OFFSET(0x1A2F2EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A2F5A20)
#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2F2D80)
#define UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1A2F5AA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AmplifyOcclusionPass_NotNative_TypeDefinitionIndex = 30186;

	class AmplifyOcclusionPass_NotNative : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet__TempHalfResultTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AmplifyOcclusionPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x7560);
		}
		static ::System::Int32* StaticGet__TempHalfAngleTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AmplifyOcclusionPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x7564);
		}
		static ::System::Int32* StaticGet__GTAO1()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AmplifyOcclusionPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x7568);
		}
		static ::System::Int32* StaticGet__GTAO0()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AmplifyOcclusionPass_NotNative_TypeDefinitionIndex)->GetStaticField(0x756C);
		}
		// static const ::System::String* k_ProfilerTag; // 0x0
		::UnityEngine::Rendering::Universal::AmplifyOcclusion* m_AmplifyOcclusionConfig; // 0xA8
		::System::Boolean switchRT; // 0xB0
		::System::Boolean m_ForceLowQuality; // 0xB1
		::System::Boolean m_IsSupportRTFormatRFloat; // 0xB2
		::System::Boolean m_IsLowQualityPlatform; // 0xB3
		::UnityEngine::RenderTextureDescriptor m_RenderTextureDescriptor; // 0xB4
		::UnityEngine::Experimental::Rendering::GraphicsFormat m_OcclusionRtFormatForEasySSAO; // 0xEC
		::System::Single m_OneOverDepthScale; // 0xF0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE__CCTOR_OFFSET))();
		}

		::System::Void Setup(::UnityEngine::RenderTextureDescriptor baseDescriptor, ::UnityEngine::Rendering::Universal::AmplifyOcclusion* aoConfig, ::UnityEngine::NAPRenderPipeline0::SSAOQuality aoQuality)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor, ::UnityEngine::Rendering::Universal::AmplifyOcclusion*, ::UnityEngine::NAPRenderPipeline0::SSAOQuality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_SETUP_OFFSET))(this, baseDescriptor, aoConfig, aoQuality);
		}

		::System::Void PrepareSSAO(::UnityEngine::Material* occlusionProcessMat, ::UnityEngine::Material* occlusionBlurMat, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Int32 rtWidth, ::System::Int32 rtHeight, ::System::Int32 occlusionPass, ::UnityEngine::RenderTextureDescriptor& smallOcclusionRtDesc, ::UnityEngine::Rendering::RenderTargetIdentifier& outRTI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Material*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*, ::System::Int32, ::System::Int32, ::System::Int32, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_PREPARESSAO_OFFSET))(this, occlusionProcessMat, occlusionBlurMat, camera, cmd, rtWidth, rtHeight, occlusionPass, smallOcclusionRtDesc, outRTI);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AMPLIFYOCCLUSIONPASS_NOTNATIVE___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
