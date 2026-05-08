#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPMINFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC1F610)
#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPMINFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1BC1F620)
#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPMINFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BC1F700)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NoInterpMinFloatParameter_TypeDefinitionIndex = 6045;

	class NoInterpMinFloatParameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::System::Single>
	{
	public:
		::System::Single min; // 0x20

		::System::Void _ctor(::System::Single value, ::System::Single min, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPMINFLOATPARAMETER__CTOR_OFFSET))(this, value, min, overrideState);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPMINFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPMINFLOATPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
