#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/CameraData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraApplyPass_HistoryBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class LyraUpdateProbePass; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_ALLOCATERESOURCE_OFFSET UNITYSDK_OFFSET(0x1AF59220)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_APPLY_OFFSET UNITYSDK_OFFSET(0x1AF55620)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1AF59400)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AF59470)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_GETSDFAOLOWRESJITTEROFFSET_OFFSET UNITYSDK_OFFSET(0x1AF55350)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_SDFAOUSEHALFRES_OFFSET UNITYSDK_OFFSET(0x1AF55240)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1AF59070)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF598E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF55050)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraApplyPass_TypeDefinitionIndex = 26756;

	class LyraApplyPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_m_profilingSampler()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraApplyPass_TypeDefinitionIndex)->GetStaticField(0x20600);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_ProfilerSamplerLyraApplyProbeLighting()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraApplyPass_TypeDefinitionIndex)->GetStaticField(0x20608);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_ProfilerSamplerLyraApplyProbeTemporal()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraApplyPass_TypeDefinitionIndex)->GetStaticField(0x20610);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_ProfilerSamplerSDFAOConeTrace()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraApplyPass_TypeDefinitionIndex)->GetStaticField(0x20618);
		}
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_ProfilerSamplerSDFAOUpSample()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraApplyPass_TypeDefinitionIndex)->GetStaticField(0x20620);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_m_debugLyraOutput()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(LyraApplyPass_TypeDefinitionIndex)->GetStaticField(0x5340);
		}
		::Il2CppArray<::UnityEngine::Vector4>* SampleDirections6; // 0xA8
		::UnityEngine::ComputeShader* m_lyraApplyCS; // 0xB0
		::UnityEngine::Rendering::Universal::Internal::LyraApplyPass_HistoryBuffer* s_history; // 0xB8
		::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass* m_lyraUpdateProbePass; // 0xC0
		::System::Int32 DownsampleDepthAndNormalBase; // 0xC8
		::UnityEngine::Rendering::RenderTargetIdentifier m_quadResLum; // 0xD0
		::UnityEngine::Rendering::RenderTargetIdentifier m_halfResDiffuseIndirect; // 0xF8
		::System::Boolean m_isFirstTime; // 0x120
		::System::Boolean m_allocated; // 0x121
		::System::Int32 SDFAOConeTraceBaseKernel; // 0x124
		::UnityEngine::Vector2Int m_preRes; // 0x128
		::System::Int32 LyraApplyProbeLighting_TemporalBaseKernelIndex; // 0x130
		::UnityEngine::Rendering::RenderTargetIdentifier m_diffuseIndirect; // 0x138
		::UnityEngine::Rendering::RenderTargetIdentifier m_quadResDiffuseIndirect; // 0x160
		::System::Int32 LyraApplyProbeLighting_Debug; // 0x188
		::System::Int32 ResolveCheckboardDepthKernel; // 0x18C

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::ComputeShader* lyraApplyShader, ::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass* lyraUpdateProbePass)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*, ::UnityEngine::Rendering::Universal::Internal::LyraUpdateProbePass*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, lyraApplyShader, lyraUpdateProbePass);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS__CCTOR_OFFSET))();
		}

		::System::Boolean SDFAOUseHalfRes()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_SDFAOUSEHALFRES_OFFSET))(this);
		}

		static ::Il2CppArray<::System::Int32>* GetSDFAOLowResJitterOffset(::System::Int32 FrameId)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_GETSDFAOLOWRESJITTEROFFSET_OFFSET))(FrameId);
		}

		::System::Void Apply(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData renderingData, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_APPLY_OFFSET))(this, cmd, renderingData, camera);
		}

		::System::Void Setup(::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_SETUP_OFFSET))(this, cameraData);
		}

		::System::Void AllocateResource(::UnityEngine::NAPRenderPipeline0::CameraData cameraData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::CameraData))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_ALLOCATERESOURCE_OFFSET))(this, cameraData);
		}

		::System::Void CleanUp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_CLEANUP_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRAAPPLYPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
