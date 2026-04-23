#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_BOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3025B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BoolParameter_TypeDefinitionIndex = 33534;

	class BoolParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Boolean>
	{
	public:
		::System::Void _ctor(::System::Boolean value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BOOLPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
