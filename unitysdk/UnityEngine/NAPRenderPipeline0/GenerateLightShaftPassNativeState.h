#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1EA115B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1EA11650)
#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EA11630)
#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA11660)
#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1EA115C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA11590)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int GenerateLightShaftPassNativeState_TypeDefinitionIndex = 5748;

	class GenerateLightShaftPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_GENERATELIGHTSHAFTPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
