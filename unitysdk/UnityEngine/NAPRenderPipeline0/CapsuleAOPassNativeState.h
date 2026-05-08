#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class ComputeBuffer; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1AE71140)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1AE711E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AE711C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1AE71200)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1AE71150)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1AE71210)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1AE711F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE71120)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CapsuleAOPassNativeState_TypeDefinitionIndex = 5757;

	class CapsuleAOPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::ComputeBuffer* capsulesBuffer, ::UnityEngine::ComputeBuffer* characterBuffer, ::System::Int32 width, ::System::Int32 height, ::System::Single renderScale)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ComputeBuffer*, ::UnityEngine::ComputeBuffer*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_SETUP_OFFSET))(this, capsulesBuffer, characterBuffer, width, height, renderScale);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CAPSULEAOPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}
	};
}
