#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/Quality.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_QUALITYPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x192A6820)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_QUALITYPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x192A67A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_QUALITYPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x192A6830)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_QUALITYPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x192A6680)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_QualityParameter_TypeDefinitionIndex = 30043;

	class MKGlow_QualityParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::PostProcess::MKGlow::Quality>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_QUALITYPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::Quality from, ::PostProcess::MKGlow::Quality to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::Quality, ::PostProcess::MKGlow::Quality, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_QUALITYPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::Quality get_value()
		{
			return ((::PostProcess::MKGlow::Quality(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_QUALITYPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::Quality value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::Quality))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_QUALITYPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
