#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1EBFA370)
#define UNITYENGINE_RENDERING_FLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE2D10)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int FloatParameter_TypeDefinitionIndex = 34964;

	class FloatParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Single>
	{
	public:
		::System::Void _ctor(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Interp(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_FLOATPARAMETER_INTERP_OFFSET))(this, a1, a2, a3);
		}
	};
}
