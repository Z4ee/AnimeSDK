#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1F34ABC0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1F34AC60)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F34AC40)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1F34AC80)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1F34ABD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_SETUP_OFFSET UNITYSDK_OFFSET(0x1F34AC70)
#define UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F34ABA0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int TBLLightDataAfterGbufferPassNativeState_TypeDefinitionIndex = 5781;

	class TBLLightDataAfterGbufferPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Setup(::UnityEngine::Rendering::RenderTargetIdentifier& rti)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::RenderTargetIdentifier&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_SETUP_OFFSET))(this, rti);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_TBLLIGHTDATAAFTERGBUFFERPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
