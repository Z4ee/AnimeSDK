#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_EXECUTESSRPASS_OFFSET UNITYSDK_OFFSET(0x1EA70E30)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA71FD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_SETLOCALRENDERTARGET_OFFSET UNITYSDK_OFFSET(0x1EA70350)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA72040)
#define UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA702C0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int SSRPass_TypeDefinitionIndex = 5825;

	class SSRPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSampler()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(SSRPass_TypeDefinitionIndex)->GetStaticField(0x5670);
		}

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::RenderTexture* SetLocalRenderTarget(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::UnityEngine::RenderTextureDescriptor& cameraTextureDescriptor, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::UnityEngine::RenderTexture*(*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Camera*, ::UnityEngine::RenderTextureDescriptor&, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_SETLOCALRENDERTARGET_OFFSET))(cmd, camera, cameraTextureDescriptor, renderingData);
		}

		static ::System::Void ExecuteSSRPass(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::System::Int32 sceneColor)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_EXECUTESSRPASS_OFFSET))(context, renderingData, postCullRenderingData, sceneColor);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_SSRPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
