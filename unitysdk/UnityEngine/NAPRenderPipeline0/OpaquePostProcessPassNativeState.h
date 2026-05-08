#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1B4C0920)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1B4C09C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B4C09A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1B4C09E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B4C0930)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1B4C09D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C0900)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OpaquePostProcessPassNativeState_TypeDefinitionIndex = 5749;

	class OpaquePostProcessPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier& color, ::UnityEngine::Rendering::RenderTargetIdentifier& depth)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_SETUP_OFFSET))(this, color, depth);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
