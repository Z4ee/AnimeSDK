#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_CREATENATIVE_OFFSET UNITYSDK_OFFSET(0x1E94C760)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_DESTROYNATIVE_OFFSET UNITYSDK_OFFSET(0x1E94C810)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E94C7F0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1E94C7E0)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1E94C770)
#define UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E94C740)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int DrawOverlayPassNativeState_TypeDefinitionIndex = 5738;

	class DrawOverlayPassNativeState : public ::System::Object
	{
	public:
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE__CTOR_OFFSET))(this);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_FINALIZE_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}

		::System::Void Dispose(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_DISPOSE_OFFSET))(this, disposing);
		}

		static ::System::IntPtr CreateNative()
		{
			return ((::System::IntPtr(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_CREATENATIVE_OFFSET))();
		}

		::System::Void DestroyNative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_DRAWOVERLAYPASSNATIVESTATE_DESTROYNATIVE_OFFSET))(this);
		}
	};
}
