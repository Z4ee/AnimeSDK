#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_RENDERING_VECTOR4PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1EC14970)
#define UNITYENGINE_RENDERING_VECTOR4PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC14820)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector4Parameter_TypeDefinitionIndex = 34980;

	class Vector4Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector4>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector4 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR4PARAMETER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Interp(::UnityEngine::Vector4 a1, ::UnityEngine::Vector4 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR4PARAMETER_INTERP_OFFSET))(this, a1, a2, a3);
		}
	};
}
