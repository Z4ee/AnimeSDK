#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E319010)
#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1E318F50)
#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1E319000)
#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E318FE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E319030)
#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E318F70)
#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1E319040)
#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1E319020)
#define UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E318F20)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GBufferPassNativeState_TypeDefinitionIndex = 5761;

	class GBufferPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE__CTOR_OFFSET))(this, layerMask);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative(::UnityEngine::LayerMask layerMask)
		{
			return ((::System::IntPtr(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_CREATENATIVE_OFFSET))(layerMask);
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::System::Boolean justSetRenderTarget, ::System::Boolean needStoreHalfDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_SETUP_OFFSET))(this, justSetRenderTarget, needStoreHalfDepth);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		static ::System::IntPtr CreateNative_Injected(::UnityEngine::LayerMask& layerMask)
		{
			return ((::System::IntPtr(*)(::UnityEngine::LayerMask&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GBUFFERPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET))(layerMask);
		}
	};
}
