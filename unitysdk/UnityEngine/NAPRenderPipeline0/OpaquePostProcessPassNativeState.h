#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1EB60390)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1EB60430)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EB60410)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EB60450)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EB603A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1EB60440)
#define UNITYENGINE_NAPRENDERPIPELINE0_OPAQUEPOSTPROCESSPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB60370)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int OpaquePostProcessPassNativeState_TypeDefinitionIndex = 5753;

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
