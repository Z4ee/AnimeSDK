#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"

namespace UnityEngine { class Camera; }

#define UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x1B2CE300)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B2CE280)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1B2CE260)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALDRAWGIZMO_OFFSET UNITYSDK_OFFSET(0x1B2CE310)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALPREPARE_OFFSET UNITYSDK_OFFSET(0x1B2CE320)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDER_OFFSET UNITYSDK_OFFSET(0x1B2CE1C0)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_PREPARE_OFFSET UNITYSDK_OFFSET(0x1B2CE330)
#define UNITYENGINE_RENDERING_RENDERPIPELINE_SET_DISPOSED_OFFSET UNITYSDK_OFFSET(0x1B2CE270)
#define UNITYENGINE_RENDERING_RENDERPIPELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2CE340)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int RenderPipeline_TypeDefinitionIndex = 4742;

	class RenderPipeline : public ::System::Object
	{
	public:
		::System::Boolean _disposed_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE__CTOR_OFFSET))(this);
		}

		::System::Void InternalRender(::UnityEngine::Rendering::ScriptableRenderContext a1, ::Il2CppArray<::UnityEngine::Camera*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext, ::Il2CppArray<::UnityEngine::Camera*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALRENDER_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_disposed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_GET_DISPOSED_OFFSET))(this);
		}

		::System::Void set_disposed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_SET_DISPOSED_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void InternalDrawGizmo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALDRAWGIZMO_OFFSET))(this);
		}

		::System::Void InternalPrepare(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_INTERNALPREPARE_OFFSET))(this, a1, a2);
		}

		::System::Void Prepare(::UnityEngine::Camera* a1, ::UnityEngine::Rendering::CRPMainCameraDesc& a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CRPMainCameraDesc&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_RENDERPIPELINE_PREPARE_OFFSET))(this, a1, a2);
		}
	};
}
