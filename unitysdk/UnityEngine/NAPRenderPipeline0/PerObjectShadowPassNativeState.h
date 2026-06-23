#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1D7B1150)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1D7B11F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D7B11D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D7B1200)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D7B1160)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1D7B1210)
#define UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B1130)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int PerObjectShadowPassNativeState_TypeDefinitionIndex = 5785;

	class PerObjectShadowPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_PEROBJECTSHADOWPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
