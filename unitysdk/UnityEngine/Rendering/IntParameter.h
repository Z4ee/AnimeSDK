#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x188E7BA0)
#define UNITYENGINE_RENDERING_INTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188CA610)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IntParameter_TypeDefinitionIndex = 27912;

	class IntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Int32>
	{
	public:
		::System::Void _ctor(::System::Int32 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Interp(::System::Int32 from, ::System::Int32 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
