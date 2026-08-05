#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FloatParameter.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_MINFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EA5F900)
#define UNITYENGINE_NAPRENDERPIPELINE0_MINFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EA5F910)
#define UNITYENGINE_NAPRENDERPIPELINE0_MINFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5F9F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int MinFloatParameter_TypeDefinitionIndex = 6057;

	class MinFloatParameter : public ::UnityEngine::NAPRenderPipeline0::FloatParameter
	{
	public:
		::System::Single min; // 0x20

		::System::Void _ctor(::System::Single value, ::System::Single min, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MINFLOATPARAMETER__CTOR_OFFSET))(this, value, min, overrideState);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MINFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_MINFLOATPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
