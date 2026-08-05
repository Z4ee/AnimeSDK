#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_INTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8AB8C0)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1E8AB980)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8AB8D0)
#define UNITYENGINE_NAPRENDERPIPELINE0_INTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A9930)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int IntParameter_TypeDefinitionIndex = 6053;

	class IntParameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::System::Int32>
	{
	public:
		::System::Void _ctor(::System::Int32 value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Interp(::System::Int32 from, ::System::Int32 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_INTPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
