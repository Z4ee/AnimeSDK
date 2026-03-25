#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_NOINTERPINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188E8200)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpIntParameter_TypeDefinitionIndex = 27913;

	class NoInterpIntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Int32>
	{
	public:
		::System::Void _ctor(::System::Int32 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPINTPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}
	};
}
