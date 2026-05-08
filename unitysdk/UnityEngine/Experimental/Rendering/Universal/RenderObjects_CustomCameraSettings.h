#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_CUSTOMCAMERASETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B360720)

namespace UnityEngine::Experimental::Rendering::Universal
{
	inline static constexpr unsigned int RenderObjects_CustomCameraSettings_TypeDefinitionIndex = 29734;

	class RenderObjects_CustomCameraSettings : public ::System::Object
	{
	public:
		::System::Boolean overrideCamera; // 0x10
		::System::Boolean restoreCamera; // 0x11
		::UnityEngine::Vector4 offset; // 0x14
		::System::Single cameraFieldOfView; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_UNIVERSAL_RENDEROBJECTS_CUSTOMCAMERASETTINGS__CTOR_OFFSET))(this);
		}
	};
}
