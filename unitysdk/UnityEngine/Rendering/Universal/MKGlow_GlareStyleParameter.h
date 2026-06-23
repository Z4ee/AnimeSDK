#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/GlareStyle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C14FFE0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1C14FF60)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1C14FFF0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C150000)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_GlareStyleParameter_TypeDefinitionIndex = 27099;

	class MKGlow_GlareStyleParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::PostProcess::MKGlow::GlareStyle>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::GlareStyle from, ::PostProcess::MKGlow::GlareStyle to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::GlareStyle, ::PostProcess::MKGlow::GlareStyle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::GlareStyle get_value()
		{
			return ((::PostProcess::MKGlow::GlareStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::GlareStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::GlareStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_GLARESTYLEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
