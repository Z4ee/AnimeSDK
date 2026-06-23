#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

namespace PostProcess::MKGlow { class MKGlowResources; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C44CFD0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C44CFE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C44CFF0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_ResourcesParameter_TypeDefinitionIndex = 27106;

	class MKGlow_ResourcesParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::PostProcess::MKGlow::MKGlowResources*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER__CTOR_OFFSET))(this);
		}

		::PostProcess::MKGlow::MKGlowResources* get_value()
		{
			return ((::PostProcess::MKGlow::MKGlowResources*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::MKGlowResources* value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::MKGlowResources*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_RESOURCESPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
