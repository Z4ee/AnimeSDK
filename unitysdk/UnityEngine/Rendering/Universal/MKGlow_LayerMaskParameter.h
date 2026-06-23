#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LAYERMASKPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AF11330)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LAYERMASKPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1AF112B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LAYERMASKPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1AF11340)
#define UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LAYERMASKPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF11350)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MKGlow_LayerMaskParameter_TypeDefinitionIndex = 27104;

	class MKGlow_LayerMaskParameter : public ::UnityEngine::NAPRenderPipeline0::VolumeParameter_1<::UnityEngine::LayerMask>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LAYERMASKPARAMETER__CTOR_OFFSET))(this);
		}

		::System::Void Interp(::UnityEngine::LayerMask from, ::UnityEngine::LayerMask to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::UnityEngine::LayerMask, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LAYERMASKPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::UnityEngine::LayerMask get_value()
		{
			return ((::UnityEngine::LayerMask(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LAYERMASKPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::LayerMask value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MKGLOW_LAYERMASKPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
