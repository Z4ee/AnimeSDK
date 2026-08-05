#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/RenderQueueRange.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_AFTERCULLSETUP_OFFSET UNITYSDK_OFFSET(0x1E7CABD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET UNITYSDK_OFFSET(0x1E7CAC10)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1E7CAB10)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1E7CAC00)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E7CABE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E7CABC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E7CAB40)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1E7CABB0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E7CAAE0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DistortionPassNativeState_TypeDefinitionIndex = 5732;

	class DistortionPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE__CTOR_OFFSET))(this, renderQueueRange, layerMask);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Boolean Setup(::UnityEngine::RenderTextureDescriptor& baseDescriptor)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_SETUP_OFFSET))(this, baseDescriptor);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Boolean AfterCullSetup(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::System::IntPtr cullResults)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_AFTERCULLSETUP_OFFSET))(this, context, renderingData, cullResults);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative(::UnityEngine::Rendering::RenderQueueRange renderQueueRange, ::UnityEngine::LayerMask layerMask)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::RenderQueueRange, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_CREATENATIVE_OFFSET))(renderQueueRange, layerMask);
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		static ::System::IntPtr CreateNative_Injected(::UnityEngine::Rendering::RenderQueueRange& renderQueueRange, ::UnityEngine::LayerMask& layerMask)
		{
			return ((::System::IntPtr(*)(::UnityEngine::Rendering::RenderQueueRange&, ::UnityEngine::LayerMask&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DISTORTIONPASSNATIVESTATE_CREATENATIVE_INJECTED_OFFSET))(renderQueueRange, layerMask);
		}
	};
}
