#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::Rendering { class CommandBuffer; }

#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1B2DCFF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1B2DD090)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2DD070)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B2DD0C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B2DD000)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_FRAMECLEANUP_OFFSET UNITYSDK_OFFSET(0x1B2DD0D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_SETUP_INJECTED_OFFSET UNITYSDK_OFFSET(0x1B2DD0B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1B2DD0A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2DCFD0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ReflectionPassNativeState_TypeDefinitionIndex = 5765;

	class ReflectionPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Vector3 reflectionPlanePos, ::UnityEngine::Vector3 reflectionPlaneNormal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_SETUP_OFFSET))(this, reflectionPlanePos, reflectionPlaneNormal);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void FrameCleanup(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_FRAMECLEANUP_OFFSET))(this, cmd);
		}

		::System::Void Setup_Injected(::UnityEngine::Vector3& reflectionPlanePos, ::UnityEngine::Vector3& reflectionPlaneNormal)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_REFLECTIONPASSNATIVESTATE_SETUP_INJECTED_OFFSET))(this, reflectionPlanePos, reflectionPlaneNormal);
		}
	};
}
