#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR3PARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8AD380)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR3PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1E8AD320)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR3PARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8AD3A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR3PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8AD2E0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int Vector3Parameter_TypeDefinitionIndex = 6063;

	class Vector3Parameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector3 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR3PARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Interp(::UnityEngine::Vector3 from, ::UnityEngine::Vector3 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR3PARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::UnityEngine::Vector3 get_value()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR3PARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector3 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR3PARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
