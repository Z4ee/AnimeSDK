#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1D3E4B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D3E4CE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D3E4F70)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D3E5010)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3E4A40)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS___BASE_CONFIGURE_OFFSET UNITYSDK_OFFSET(0x1D3E5020)
#define UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D3E5030)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int SplineOutlinePass_TypeDefinitionIndex = 26297;

	class SplineOutlinePass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet_SplineOutlineCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(SplineOutlinePass_TypeDefinitionIndex)->GetStaticField(0x7710);
		}
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettingsForAll; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS__CCTOR_OFFSET))();
		}

		::System::Void Configure(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS_CONFIGURE_OFFSET))(this, cmd, renderingData);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_Configure(::UnityEngine::Rendering::CommandBuffer* P0, ::UnityEngine::NAPRenderPipeline0::RenderingData& P1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS___BASE_CONFIGURE_OFFSET))(this, P0, P1);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SPLINEOUTLINEPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
