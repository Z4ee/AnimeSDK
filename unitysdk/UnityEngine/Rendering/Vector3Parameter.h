#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_RENDERING_VECTOR3PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1C08B050)
#define UNITYENGINE_RENDERING_VECTOR3PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08AEF0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int Vector3Parameter_TypeDefinitionIndex = 34211;

	class Vector3Parameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR3PARAMETER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Interp(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_VECTOR3PARAMETER_INTERP_OFFSET))(this, a1, a2, a3);
		}
	};
}
