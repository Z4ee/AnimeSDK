#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/AntiFlickerMode.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ANTIFLICKERMODEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x18FF33B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ANTIFLICKERMODEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x18FF3330)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ANTIFLICKERMODEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x18FF33C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ANTIFLICKERMODEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x18FF33D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_AntiFlickerModeParameter_TypeDefinitionIndex = 30044;

	class MKGlow_AntiFlickerModeParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::PostProcess::MKGlow::AntiFlickerMode>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ANTIFLICKERMODEPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::AntiFlickerMode from, ::PostProcess::MKGlow::AntiFlickerMode to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::AntiFlickerMode, ::PostProcess::MKGlow::AntiFlickerMode, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ANTIFLICKERMODEPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::AntiFlickerMode get_value()
		{
			return ((::PostProcess::MKGlow::AntiFlickerMode(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ANTIFLICKERMODEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::AntiFlickerMode value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::AntiFlickerMode))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_ANTIFLICKERMODEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
