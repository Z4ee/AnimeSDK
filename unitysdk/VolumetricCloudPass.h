#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal { class VolumetricCloudConfig; }

#define VOLUMETRICCLOUDPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1CCA9830)
#define VOLUMETRICCLOUDPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1CCA9BD0)
#define VOLUMETRICCLOUDPASS_SETUP_OFFSET UNITYSDK_OFFSET(0x1CCA9600)
#define VOLUMETRICCLOUDPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCA94E0)
#define VOLUMETRICCLOUDPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1CCA9C20)

inline static constexpr unsigned int VolumetricCloudPass_TypeDefinitionIndex = 27309;

class VolumetricCloudPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
{
public:
	// static const ::System::String* k_ProfilerTag; // 0x0
	::UnityEngine::ComputeShader* m_CloudCompute; // 0xA8
	::UnityEngine::Rendering::Universal::VolumetricCloudConfig* m_VolumetricCloudConfig; // 0xB0
	::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xB8
	::System::Boolean m_NeedDrawVolumetricCloud; // 0xC0
	::System::Boolean m_NeedDrawVolumetricMist; // 0xC1

	::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt, ::UnityEngine::ComputeShader* cloudCompute)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDPASS__CTOR_OFFSET))(this, evt, cloudCompute);
	}

	::System::Void Setup(::UnityEngine::Rendering::Universal::VolumetricCloudConfig* volumetricCloudConfig, ::System::Boolean& needDrawVolumetricCloud, ::System::Boolean& needDrawVolumetricMist)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::VolumetricCloudConfig*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDPASS_SETUP_OFFSET))(this, volumetricCloudConfig, needDrawVolumetricCloud, needDrawVolumetricMist);
	}

	::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
	}

	::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDPASS_FRAMECLEANUP_OFFSET))(this, cmd);
	}

	::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + VOLUMETRICCLOUDPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
	}
};
