#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RenderPassEvent.h"
#include "unitysdk/UnityEngine/Rendering/CompareFunction.h"

namespace System { class String; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Experimental::Rendering::Universal { class RenderObjects_CustomCameraSettings; }
namespace UnityEngine::Experimental::Rendering::Universal { class RenderObjects_FilterSettings; }
namespace UnityEngine::Rendering::Universal { class StencilStateData; }

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_RENDEROBJECTSSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0xF7EBBC0)

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderObjects_RenderObjectsSettings_TypeDefinitionIndex = 29732;

	class RenderObjects_RenderObjectsSettings : public ::System::Object
	{
	public:
		::System::String* passTag; // 0x10
		::UnityEngine::NAPRenderPipeline0::RenderPassEvent Event; // 0x18
		::UnityEngine::Experimental::Rendering::Universal::RenderObjects_FilterSettings* filterSettings; // 0x20
		::UnityEngine::Material* overrideMaterial; // 0x28
		::System::Int32 overrideMaterialPassIndex; // 0x30
		::System::Boolean overrideDepthState; // 0x34
		::UnityEngine::Rendering::CompareFunction depthCompareFunction; // 0x38
		::System::Boolean enableWrite; // 0x3C
		::UnityEngine::Rendering::Universal::StencilStateData* stencilSettings; // 0x40
		::UnityEngine::Experimental::Rendering::Universal::RenderObjects_CustomCameraSettings* cameraSettings; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_RENDEROBJECTSSETTINGS__CTOR_OFFSET))(this);
		}
	};
}
