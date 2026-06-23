#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_RENDERPIPELINE_BEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1D136550)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_BEGINFRAMERENDERING_OFFSET UNITYSDK_OFFSET(0x1D136470)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1D136950)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1D1368A0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_ENDCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1D136710)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_ENDFRAMERENDERING_OFFSET UNITYSDK_OFFSET(0x1D136630)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1D136880)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDER_OFFSET UNITYSDK_OFFSET(0x1D1367F0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1D136890)
#define UNITYENGINE_RENDERING_RENDERPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D136960)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipeline_TypeDefinitionIndex = 6249;

	class RenderPipeline : public ::System::Object
	{
	public:
		::System::Boolean _disposed_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE__CTOR_OFFSET))(this);
		}

		static ::System::Void BeginFrameRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_BEGINFRAMERENDERING_OFFSET))(context, cameras);
		}

		static ::System::Void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_BEGINCAMERARENDERING_OFFSET))(context, camera);
		}

		static ::System::Void EndFrameRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_ENDFRAMERENDERING_OFFSET))(context, cameras);
		}

		static ::System::Void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_ENDCAMERARENDERING_OFFSET))(context, camera);
		}

		::System::Void InternalRender(::UnityEngine::Rendering::ScriptableRenderContext context, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDER_OFFSET))(this, context, cameras);
		}

		::System::Boolean get_disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void set_disposed(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_SET_DISPOSED_OFFSET))(this, value);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean disposing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_1_OFFSET))(this, disposing);
		}
	};
}
