#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/MinMaxRange.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC66080)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1BC65FF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC66090)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC660A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_MinMaxRangeParameter_TypeDefinitionIndex = 27630;

	class MKGlow_MinMaxRangeParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::PostProcess::MKGlow::MinMaxRange>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::MinMaxRange from, ::PostProcess::MKGlow::MinMaxRange to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::MinMaxRange, ::PostProcess::MKGlow::MinMaxRange, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::MinMaxRange get_value()
		{
			return ((::PostProcess::MKGlow::MinMaxRange(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::MinMaxRange value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::MinMaxRange))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_MINMAXRANGEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
