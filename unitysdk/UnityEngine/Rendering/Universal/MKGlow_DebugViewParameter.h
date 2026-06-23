#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PostProcess/MKGlow/DebugView.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_DEBUGVIEWPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B899950)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_DEBUGVIEWPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1B8998D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_DEBUGVIEWPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B899960)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_DEBUGVIEWPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B899970)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_DebugViewParameter_TypeDefinitionIndex = 27101;

	class MKGlow_DebugViewParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::PostProcess::MKGlow::DebugView>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_DEBUGVIEWPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::PostProcess::MKGlow::DebugView from, ::PostProcess::MKGlow::DebugView to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::DebugView, ::PostProcess::MKGlow::DebugView, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_DEBUGVIEWPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::PostProcess::MKGlow::DebugView get_value()
		{
			return ((::PostProcess::MKGlow::DebugView(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_DEBUGVIEWPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::PostProcess::MKGlow::DebugView value)
		{
			return ((::System::Void(*)(::PVOID, ::PostProcess::MKGlow::DebugView))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_DEBUGVIEWPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
