#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_NOINTERPFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E8110)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpFloatParameter_TypeDefinitionIndex = 27921;

	class NoInterpFloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Single>
	{
	public:
		::System::Void _ctor(::System::Single value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPFLOATPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
