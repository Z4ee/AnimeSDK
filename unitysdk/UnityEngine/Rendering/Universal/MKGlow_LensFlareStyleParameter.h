#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/LensFlareStyle.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LENSFLARESTYLEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E264290)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LENSFLARESTYLEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1E264210)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LENSFLARESTYLEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E2642A0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LENSFLARESTYLEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2642B0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_LensFlareStyleParameter_TypeDefinitionIndex = 27633;

	class MKGlow_LensFlareStyleParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::PostProcess::MKGlow::LensFlareStyle>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LENSFLARESTYLEPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::LensFlareStyle from, ::PostProcess::MKGlow::LensFlareStyle to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::LensFlareStyle, ::PostProcess::MKGlow::LensFlareStyle, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LENSFLARESTYLEPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::LensFlareStyle get_value()
		{
			return ((::PostProcess::MKGlow::LensFlareStyle(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LENSFLARESTYLEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::LensFlareStyle value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::LensFlareStyle))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LENSFLARESTYLEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
