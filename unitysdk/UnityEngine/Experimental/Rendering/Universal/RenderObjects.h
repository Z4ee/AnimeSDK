#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderingData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/ScriptableRendererFeature.h"

namespace UnityEngine::Experimental::Rendering::Universal { class RenderObjectsPass; }
namespace UnityEngine::Experimental::Rendering::Universal { class RenderObjects_RenderObjectsSettings; }
namespace UnityEngine::Rendering::Universal { class ScriptableRenderer; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_ADDRENDERPASSES_OFFSET UNITYSDK_OFFSET(0x1D3D0150)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_CREATE_OFFSET UNITYSDK_OFFSET(0x1D3CFED0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D0230)

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderObjects_TypeDefinitionIndex = 26905;

	class RenderObjects : public ::UnityEngine::Rendering::Universal::ScriptableRendererFeature
	{
	public:
		::UnityEngine::Experimental::Rendering::Universal::RenderObjects_RenderObjectsSettings* settings; // 0x20
		::UnityEngine::Experimental::Rendering::Universal::RenderObjectsPass* renderObjectsPass; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS__CTOR_OFFSET))(this);
		}

		::System::Void Create()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_CREATE_OFFSET))(this);
		}

		::System::Void AddRenderPasses(::UnityEngine::Rendering::Universal::ScriptableRenderer* renderer, ::UnityEngine::NAPRenderPipeline0::RenderingData& renderingData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::Universal::ScriptableRenderer*, ::UnityEngine::NAPRenderPipeline0::RenderingData&))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_ADDRENDERPASSES_OFFSET))(this, renderer, renderingData);
		}
	};
}
