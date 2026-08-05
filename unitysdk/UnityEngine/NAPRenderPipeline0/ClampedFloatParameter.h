#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/FloatParameter.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EDE1080)
#define UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EDE1090)
#define UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE1190)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ClampedFloatParameter_TypeDefinitionIndex = 6059;

	class ClampedFloatParameter : public ::UnityEngine::NAPRenderPipeline0::FloatParameter
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void _ctor(::System::Single value, ::System::Single min, ::System::Single max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDFLOATPARAMETER__CTOR_OFFSET))(this, value, min, max, overrideState);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDFLOATPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
