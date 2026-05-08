#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Material; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B3661A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B366DC0)
#define UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS_GET_MAT_OFFSET UNITYSDK_OFFSET(0x1B365FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B366EA0)
#define UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B366050)
#define UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B366EE0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ExtraMotionVectorPass_TypeDefinitionIndex = 30192;

	class ExtraMotionVectorPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet_ExtraMotionVectorShaderId()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(ExtraMotionVectorPass_TypeDefinitionIndex)->GetStaticField(0x72D0);
		}
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_Sampler; // 0xA8
		::System::Boolean m_FirstExecute; // 0xB0

		::System::Void _ctor(::System::String* profilerTag, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>* renderPassEventConfig)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS__CTOR_OFFSET))(this, profilerTag, renderPassEventConfig);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Material* get_mat()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS_GET_MAT_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_EXTRAMOTIONVECTORPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
