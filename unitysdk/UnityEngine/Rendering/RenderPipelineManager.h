#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Camera; }
namespace UnityEngine::Rendering { class RenderPipeline; }
namespace UnityEngine::Rendering { class RenderPipelineAsset; }

#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ADD_BEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1B2F5F70)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_BEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1B2F61C0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_BEGINFRAMERENDERING_OFFSET UNITYSDK_OFFSET(0x1B2F6130)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_CLEANUPRENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B2F6370)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DORENDERLOOP_INTERNAL_OFFSET UNITYSDK_OFFSET(0x1B2F6810)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ENDCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1B2F62E0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ENDFRAMERENDERING_OFFSET UNITYSDK_OFFSET(0x1B2F6250)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GETCAMERAS_OFFSET UNITYSDK_OFFSET(0x1B2F66E0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GET_CURRENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B2F5EB0)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_PREPARERENDERPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B2F6A90)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_REMOVE_BEGINCAMERARENDERING_OFFSET UNITYSDK_OFFSET(0x1B2F6050)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_SET_CURRENTPIPELINE_OFFSET UNITYSDK_OFFSET(0x1B2F5F10)
#define UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B2F6E60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipelineManager_TypeDefinitionIndex = 6225;

	class RenderPipelineManager : public ::System::Object
	{
	public:
		static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>** StaticGet_endCameraRendering()
		{
			return (::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x4F20);
		}
		static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*>** StaticGet_endFrameRendering()
		{
			return (::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*>**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x4F28);
		}
		static ::Il2CppArray<::UnityEngine::Camera*>** StaticGet_s_Cameras()
		{
			return (::Il2CppArray<::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x4F30);
		}
		static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>** StaticGet_beginCameraRendering()
		{
			return (::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x4F38);
		}
		static ::UnityEngine::Rendering::RenderPipelineAsset** StaticGet_s_CurrentPipelineAsset()
		{
			return (::UnityEngine::Rendering::RenderPipelineAsset**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x4F40);
		}
		static ::UnityEngine::Rendering::RenderPipeline** StaticGet__currentPipeline_k__BackingField()
		{
			return (::UnityEngine::Rendering::RenderPipeline**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x4F48);
		}
		static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*>** StaticGet_beginFrameRendering()
		{
			return (::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*>**)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x4F50);
		}
		static ::System::Int32* StaticGet_s_CameraCapacity()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(RenderPipelineManager_TypeDefinitionIndex)->GetStaticField(0x2580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Rendering::RenderPipeline* get_currentPipeline()
		{
			return ((::UnityEngine::Rendering::RenderPipeline*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GET_CURRENTPIPELINE_OFFSET))();
		}

		static ::System::Void set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipeline*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_SET_CURRENTPIPELINE_OFFSET))(value);
		}

		static ::System::Void add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ADD_BEGINCAMERARENDERING_OFFSET))(value);
		}

		static ::System::Void remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_REMOVE_BEGINCAMERARENDERING_OFFSET))(value);
		}

		static ::System::Void BeginFrameRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_BEGINFRAMERENDERING_OFFSET))(context, cameras);
		}

		static ::System::Void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_BEGINCAMERARENDERING_OFFSET))(context, camera);
		}

		static ::System::Void EndFrameRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::Il2CppArray<::UnityEngine::Camera*>* cameras)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ENDFRAMERENDERING_OFFSET))(context, cameras);
		}

		static ::System::Void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_ENDCAMERARENDERING_OFFSET))(context, camera);
		}

		static ::System::Void CleanupRenderPipeline()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_CLEANUPRENDERPIPELINE_OFFSET))();
		}

		static ::System::Void GetCameras(::UnityEngine::Rendering::ScriptableRenderContext context)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::ScriptableRenderContext))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_GETCAMERAS_OFFSET))(context);
		}

		static ::System::Void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipe, ::System::IntPtr loopPtr)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::System::IntPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_DORENDERLOOP_INTERNAL_OFFSET))(pipe, loopPtr);
		}

		static ::System::Void PrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::RenderPipelineAsset*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINEMANAGER_PREPARERENDERPIPELINE_OFFSET))(pipelineAsset);
		}
	};
}
