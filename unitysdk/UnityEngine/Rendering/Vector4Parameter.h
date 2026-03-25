#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_VECTOR4PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x188FBFA0)
#define UNITYENGINE_RENDERING_VECTOR4PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x188FBF60)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector4Parameter_TypeDefinitionIndex = 27936;

	class Vector4Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector4>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector4 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR4PARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Interp(::UnityEngine::Vector4 from, ::UnityEngine::Vector4 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR4PARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
