#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1EE1EF80)
#define UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1EE1F020)
#define UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EE1F000)
#define UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EE1F030)
#define UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EE1EF90)
#define UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1EE1F040)
#define UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE1EF60)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FrameEstimateInfoPassNativeState_TypeDefinitionIndex = 5783;

	class FrameEstimateInfoPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FRAMEESTIMATEINFOPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
