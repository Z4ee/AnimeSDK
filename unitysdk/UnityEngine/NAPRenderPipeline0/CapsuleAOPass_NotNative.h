#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AD00C60)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AD018F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE_SETCOMPUTEPARAMS_OFFSET UNITYSDK_OFFSET(0x1AD01350)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE_SETUP_OFFSET UNITYSDK_OFFSET(0x1AD008A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD00800)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AD01990)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CapsuleAOPass_NotNative_TypeDefinitionIndex = 29767;

	class CapsuleAOPass_NotNative : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::System::String* _profilerTag; // 0xA8
		::UnityEngine::ComputeShader* compute; // 0xB0
		::System::Int32 kernel; // 0xB8
		::UnityEngine::RenderTextureDescriptor desc; // 0xBC
		::System::Int32 height; // 0xF4
		::System::Single ShadowSharpness; // 0xF8
		::UnityEngine::Rendering::RenderTargetIdentifier targetHandle; // 0x100
		::System::Single LuminanceBlend; // 0x128
		::System::Single AmbientIntensity; // 0x12C
		::System::Int32 width; // 0x130
		::System::Single ShadowIntensity; // 0x134
		::System::Single rtScale; // 0x138

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::ComputeShader* compute)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, compute);
		}

		::System::Void Setup(::System::Int32 width, ::System::Int32 height, ::System::Single renderScale)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE_SETUP_OFFSET))(this, width, height, renderScale);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void SetComputeParams(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE_SETCOMPUTEPARAMS_OFFSET))(this, cmd);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASS_NOTNATIVE___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
