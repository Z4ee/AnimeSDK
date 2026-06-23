#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES_GET_CAMERASTACKING_OFFSET UNITYSDK_OFFSET(0x1B800690)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES_SET_CAMERASTACKING_OFFSET UNITYSDK_OFFSET(0x1B8006A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8006B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderer_RenderingFeatures_TypeDefinitionIndex = 26270;

	class ScriptableRenderer_RenderingFeatures : public ::System::Object
	{
	public:
		::System::Boolean _cameraStacking_k__BackingField; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES__CTOR_OFFSET))(this);
		}

		::System::Boolean get_cameraStacking()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES_GET_CAMERASTACKING_OFFSET))(this);
		}

		::System::Void set_cameraStacking(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES_SET_CAMERASTACKING_OFFSET))(this, value);
		}
	};
}
