#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR4PARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D4F9170)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR4PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1D4F9100)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR4PARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D4F9180)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR4PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F7F90)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int Vector4Parameter_TypeDefinitionIndex = 6062;

	class Vector4Parameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::UnityEngine::Vector4>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector4 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR4PARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Interp(::UnityEngine::Vector4 from, ::UnityEngine::Vector4 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4, ::UnityEngine::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR4PARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::UnityEngine::Vector4 get_value()
		{
			return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR4PARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector4 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR4PARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
