#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderTargetHandle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D5884E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D588940)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D588450)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TBLLightDataPass_TypeDefinitionIndex = 5844;

	class TBLLightDataPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::UnityEngine::Vector2Int* StaticGet_preScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(TBLLightDataPass_TypeDefinitionIndex)->GetStaticField(0x2DD0);
		}
		::UnityEngine::NAPRenderPipeline0::RenderTargetHandle m_DepthTexture; // 0xA8

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
