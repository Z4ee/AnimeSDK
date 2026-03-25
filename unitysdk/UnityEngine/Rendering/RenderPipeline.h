#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x18A45FA0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A45F40)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x18A45F20)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALDRAWGIZMO_OFFSET UNITYSDK_OFFSET(0x18A45FB0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALPREPARE_OFFSET UNITYSDK_OFFSET(0x18A45FC0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDER_OFFSET UNITYSDK_OFFSET(0x18A45E80)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_PREPARE_OFFSET UNITYSDK_OFFSET(0x18A45FD0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x18A45F30)
#define UNITYENGINE_RENDERING_RENDERPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x18A45FE0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipeline_TypeDefinitionIndex = 4566;

	class RenderPipeline : public ::System::Object
	{
	public:
		::System::Boolean _disposed_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE__CTOR_OFFSET))(this);
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

		::System::Void InternalDrawGizmo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALDRAWGIZMO_OFFSET))(this);
		}

		::System::Void InternalPrepare(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALPREPARE_OFFSET))(this, camera, mainCameraDesc);
		}

		::System::Void Prepare(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::CRPMainCameraDesc& mainCameraDesc)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_PREPARE_OFFSET))(this, camera, mainCameraDesc);
		}
	};
}
