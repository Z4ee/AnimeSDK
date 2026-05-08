#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_FLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3C2F10)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLOATPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1B3C3000)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B3C2F20)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3C2EF0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FloatParameter_TypeDefinitionIndex = 6043;

	class FloatParameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::System::Single>
	{
	public:
		::System::Void _ctor(::System::Single value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLOATPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLOATPARAMETER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Interp(::System::Single from, ::System::Single to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLOATPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
