#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class ComputeShader; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDLIGHTINGVOLUMEPASS_CLEANUP_OFFSET UNITYSDK_OFFSET(0x1C5BA130)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDLIGHTINGVOLUMEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1C5BA0D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDLIGHTINGVOLUMEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1C5B9CA0)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int LyraBakedLightingVolumePass_TypeDefinitionIndex = 27834;

	class LyraBakedLightingVolumePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::NAPRenderPipeline0::ProfilingSampler** StaticGet_mProfilingSampler()
		{
			return (::UnityEngine::NAPRenderPipeline0::ProfilingSampler**)Il2CppClass::FromTypeDefinitionIndex(LyraBakedLightingVolumePass_TypeDefinitionIndex)->GetStaticField(0x21D80);
		}
		// static const ::System::Int32 InjectBakedLightingVolumeKernel = 0x16; // 0x0
		// static const ::System::Int32 LyraBakedLightingVolumeSize = 0x10; // 0x0
		// static const ::System::Int32 LyraBakedLightingVolumeClipCount = 0x4; // 0x0
		// static const ::System::Single LyraBakedLightingVolumeBaseCellSize; // 0x0
		::Il2CppArray<::UnityEngine::Vector4>* m_BLVShift; // 0xA8
		::Il2CppArray<::UnityEngine::Vector4>* m_BLVVolumeToWorld; // 0xB0
		::UnityEngine::RenderTexture* m_bakedLightingVolume; // 0xB8
		::UnityEngine::ComputeShader* m_lyraUpdateProbesCS; // 0xC0
		::UnityEngine::RenderTexture* m_bakedLightingVolumeDir; // 0xC8
		::Il2CppArray<::UnityEngine::Vector4>* m_BLVWorldToVolume; // 0xD0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig, ::UnityEngine::ComputeShader* lyraUpdateProbesCS)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*, ::UnityEngine::ComputeShader*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDLIGHTINGVOLUMEPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig, lyraUpdateProbesCS);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDLIGHTINGVOLUMEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void Cleanup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_LYRABAKEDLIGHTINGVOLUMEPASS_CLEANUP_OFFSET))(this);
		}
	};
}
