#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Experimental/Rendering/Universal/RenderQueueType.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PostCullRenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/ScriptableRenderPass.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"
#include "unitysdk/UnityEngine/Rendering/FilteringSettings.h"
#include "unitysdk/UnityEngine/Rendering/RenderStateBlock.h"
#include "unitysdk/UnityEngine/Rendering/ScriptableRenderContext.h"
#include "unitysdk/UnityEngine/Rendering/ShaderTagId.h"
#include "unitysdk/UnityEngine/Rendering/StencilOp.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Experimental::Rendering::Universal { class RenderObjects_CustomCameraSettings; }
namespace UnityEngine::NAPRenderPipeline0 { class ProfilingSampler; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_EXECUTE_OFFSET UNITYSDK_OFFSET(0x191069E0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_GET_OVERRIDEMATERIALPASSINDEX_OFFSET UNITYSDK_OFFSET(0x19106470)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_GET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0x19106450)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SETDETPHSTATE_OFFSET UNITYSDK_OFFSET(0x19106490)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SETSTENCILSTATE_OFFSET UNITYSDK_OFFSET(0x19106500)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET UNITYSDK_OFFSET(0x19106480)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SET_OVERRIDEMATERIAL_OFFSET UNITYSDK_OFFSET(0x19106460)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x191065C0)

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderObjectsPass_TypeDefinitionIndex = 29729;

	class RenderObjectsPass : public ::UnityEngine::NAPRenderPipeline0::ScriptableRenderPass
	{
	public:
		::UnityEngine::NAPRenderPipeline0::ProfilingSampler* m_ProfilingSampler; // 0xA8
		::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings* m_CameraSettings; // 0xB0
		::UnityEngine::Material* _overrideMaterial_k__BackingField; // 0xB8
		::System::String* m_ProfilerTag; // 0xC0
		::System::Collections::Generic::List_1<::UnityEngine::Rendering::ShaderTagId>* m_ShaderTagIdList; // 0xC8
		::System::Int32 _overrideMaterialPassIndex_k__BackingField; // 0xD0
		::UnityEngine::Rendering::RenderStateBlock m_RenderStateBlock; // 0xD4
		::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType; // 0x140
		::UnityEngine::Rendering::FilteringSettings m_FilteringSettings; // 0x144

		::System::Void _ctor(::System::String* profilerTag, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent renderPassEvent, ::Il2CppArray<::System::String*>* shaderTags, ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType renderQueueType, ::System::Int32 layerMask, ::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::NAPRenderPipeline0::RenderPassEvent, ::Il2CppArray<::System::String*>*, ::UnityEngine::Experimental::Rendering::Universal::RenderQueueType, ::System::Int32, ::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS__CTOR_OFFSET))(this, profilerTag, renderPassEvent, shaderTags, renderQueueType, layerMask, cameraSettings);
		}

		::UnityEngine::Material* get_overrideMaterial()
		{
			return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_GET_OVERRIDEMATERIAL_OFFSET))(this);
		}

		::System::Void set_overrideMaterial(::UnityEngine::Material* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SET_OVERRIDEMATERIAL_OFFSET))(this, value);
		}

		::System::Int32 get_overrideMaterialPassIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_GET_OVERRIDEMATERIALPASSINDEX_OFFSET))(this);
		}

		::System::Void set_overrideMaterialPassIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SET_OVERRIDEMATERIALPASSINDEX_OFFSET))(this, value);
		}

		::System::Void SetDetphState(::System::Boolean writeEnabled, ::UnityEngine::Rendering::CompareFunction function)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Rendering::CompareFunction))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SETDETPHSTATE_OFFSET))(this, writeEnabled, function);
		}

		::System::Void SetStencilState(::System::Int32 reference, ::UnityEngine::Rendering::CompareFunction compareFunction, ::UnityEngine::Rendering::StencilOp passOp, ::UnityEngine::Rendering::StencilOp failOp, ::UnityEngine::Rendering::StencilOp zFailOp)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Rendering::CompareFunction, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp, ::UnityEngine::Rendering::StencilOp))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_SETSTENCILSTATE_OFFSET))(this, reference, compareFunction, passOp, failOp, zFailOp);
		}

		::System::Void Execute(::UnityEngine::Rendering::ScriptableRenderContext& context, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData& postCullRenderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::ScriptableRenderContext&, ::UnityEngine::NAPRenderPipeline0::RenderingData&, ::UnityEngine::NAPRenderPipeline0::PostCullRenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTSPASS_EXECUTE_OFFSET))(this, context, renderingData, postCullRenderingData);
		}
	};
}
