#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_LAYERMASKPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E7BC0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LayerMaskParameter_TypeDefinitionIndex = 27911;

	class LayerMaskParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::LayerMask>
	{
	public:
		::System::Void _ctor(::UnityEngine::LayerMask value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LAYERMASKPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
