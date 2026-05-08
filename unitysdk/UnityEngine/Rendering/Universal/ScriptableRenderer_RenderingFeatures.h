#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES_GET_CAMERASTACKING_OFFSET UNITYSDK_OFFSET(0x19694910)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES_SET_CAMERASTACKING_OFFSET UNITYSDK_OFFSET(0x19694920)
#define UNITYENGINE_RENDERING_UNIVERSAL_SCRIPTABLERENDERER_RENDERINGFEATURES__CTOR_OFFSET UNITYSDK_OFFSET(0x19694930)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int ScriptableRenderer_RenderingFeatures_TypeDefinitionIndex = 30222;

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
