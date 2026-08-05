#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1EDE5A20)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1EDE5AC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EDE5AA0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EDE5AE0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EDE5A30)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1EDE5AD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE5A00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TBLLightDataPassNativeState_TypeDefinitionIndex = 5779;

	class TBLLightDataPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier& rti, ::System::Boolean separateBuildGPULightLists)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_SETUP_OFFSET))(this, rti, separateBuildGPULightLists);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
