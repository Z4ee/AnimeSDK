#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AD06D00)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AD07460)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AD07500)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD06BF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS___BASE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AD07540)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int DrawOutlineObjectsPass_TypeDefinitionIndex = 30483;

	class DrawOutlineObjectsPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		static ::System::Int32* StaticGet__OutlineObjectsTex()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DrawOutlineObjectsPass_TypeDefinitionIndex)->GetStaticField(0x7200);
		}
		// static const ::System::Int32 downSample = 0x4; // 0x0
		::System::String* m_ProfilerTag; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xB0
		::System::Int32 cullingMask; // 0xB8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS__CTOR_OFFSET))(this, evt);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS__CCTOR_OFFSET))();
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void __base_FrameCleanup(::UnityEngine::Rendering::CommandBuffer* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_DRAWOUTLINEOBJECTSPASS___BASE_FRAMECLEANUP_OFFSET))(this, P0);
		}
	};
}
