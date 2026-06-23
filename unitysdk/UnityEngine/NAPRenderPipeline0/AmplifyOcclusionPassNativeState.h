#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/RenderTextureDescriptor.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1D41B560)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1D41B620)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D41B600)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1D41B5F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1D41B570)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1D41B5E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D41B540)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int AmplifyOcclusionPassNativeState_TypeDefinitionIndex = 5727;

	class AmplifyOcclusionPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Boolean Setup(::UnityEngine::RenderTextureDescriptor& baseDescriptor)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::RenderTextureDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_SETUP_OFFSET))(this, baseDescriptor);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_AMPLIFYOCCLUSIONPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}
	};
}
