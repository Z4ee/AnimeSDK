#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1DA2BA10)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1DA2B950)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1DA2BA00)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA2B9E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1DA2BA30)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1DA2B970)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1DA2BA40)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1DA2BA20)
#define UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B920)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LateGbufferPassNativeState_TypeDefinitionIndex = 5713;

	class LateGbufferPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE__CTOR_OFFSET))(this, layerMask);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative(::UnityEngine::LayerMask layerMask)
		{
			return ((::System::IntPtr(*)(::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_CREATENATIVE_OFFSET))(layerMask);
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::System::Boolean needStoreHalfDepth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_SETUP_OFFSET))(this, needStoreHalfDepth);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		static ::System::IntPtr CreateNative_Injected(::UnityEngine::LayerMask& layerMask)
		{
			return ((::System::IntPtr(*)(::UnityEngine::LayerMask&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LATEGBUFFERPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET))(layerMask);
		}
	};
}
