#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/LayerMask.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_LAYERMASKPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBFC9F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LayerMaskParameter_TypeDefinitionIndex = 34955;

	class LayerMaskParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::LayerMask>
	{
	public:
		::System::Void _ctor(::UnityEngine::LayerMask a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::LayerMask, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LAYERMASKPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
