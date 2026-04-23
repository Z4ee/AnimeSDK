#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1A31EEA0)
#define UNITYENGINE_RENDERING_FLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A304500)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FloatParameter_TypeDefinitionIndex = 33544;

	class FloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Single>
	{
	public:
		::System::Void _ctor(::System::Single value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Interp(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
