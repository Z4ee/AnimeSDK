#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::NAPRenderPipeline0 { class DrawOpaqueObjectsPassNativeState; }

#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL_DRAWOPAQUEOBJECTS_OFFSET UNITYSDK_OFFSET(0x1B4BF520)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL_DRAWPARTICLEDECAL_OFFSET UNITYSDK_OFFSET(0x1B4BF510)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4BF4E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL_SETUP_OFFSET UNITYSDK_OFFSET(0x1B4BF4B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4BEF90)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawOpaqueObjectsPass_NativeImpl_TypeDefinitionIndex = 5731;

	class DrawOpaqueObjectsPass_NativeImpl : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::DrawOpaqueObjectsPassNativeState* m_NativeState; // 0xA8

		::System::Void _ctor(::UnityEngine::NAPRenderPipeline0::RenderPassEvent evt)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL__CTOR_OFFSET))(this, evt);
		}

		::System::Void Setup(::System::Boolean hasDeferredShading)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL_SETUP_OFFSET))(this, hasDeferredShading);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		static ::System::Void DrawParticleDecal(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL_DRAWPARTICLEDECAL_OFFSET))(context, renderingData, postCullRenderingData);
		}

		static ::System::Void DrawOpaqueObjects(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData, ::System::Boolean needOutline)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOPAQUEOBJECTSPASS_NATIVEIMPL_DRAWOPAQUEOBJECTS_OFFSET))(context, renderingData, postCullRenderingData, needOutline);
		}
	};
}
