#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR2PARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D4F8E80)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR2PARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1D4F8E60)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR2PARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D4F8E90)
#define UNITYENGINE_NAPRENDERPIPELINE0_VECTOR2PARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D4F8E40)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int Vector2Parameter_TypeDefinitionIndex = 6060;

	class Vector2Parameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Void _ctor(::UnityEngine::Vector2 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR2PARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Void Interp(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR2PARAMETER_INTERP_OFFSET))(this, from, to, t);
		}

		::UnityEngine::Vector2 get_value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR2PARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_VECTOR2PARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
