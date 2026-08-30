#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1CD1EF50)
#define UNITYENGINE_RENDERING_INTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD055B0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int IntParameter_TypeDefinitionIndex = 34956;

	class IntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Int32>
	{
	public:
		::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Interp(::System::Int32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_INTPARAMETER_INTERP_OFFSET))(this, a1, a2, a3);
		}
	};
}
