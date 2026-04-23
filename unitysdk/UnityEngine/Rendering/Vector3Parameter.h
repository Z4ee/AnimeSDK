#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_VECTOR3PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1A335BF0)
#define UNITYENGINE_RENDERING_VECTOR3PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A335BA0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector3Parameter_TypeDefinitionIndex = 33558;

	class Vector3Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR3PARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Interp(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR3PARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
