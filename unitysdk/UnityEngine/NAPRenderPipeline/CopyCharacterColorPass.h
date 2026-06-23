#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1BDA7210)
#define UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1BDA7A00)
#define UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS_RELEASETEMPBUFFER_OFFSET UNITYSDK_OFFSET(0x1BDA7A90)
#define UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1BDA70D0)
#define UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1BDA7B70)

namespace UnityEngine::NAPRenderPipeline
{
	inline static constexpr unsigned int CopyCharacterColorPass_TypeDefinitionIndex = 27310;

	class CopyCharacterColorPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
		::System::Boolean textureAllocated; // 0xB0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void ReleaseTempBuffer(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS_RELEASETEMPBUFFER_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE_COPYCHARACTERCOLORPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
