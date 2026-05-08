#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPCLAMPEDINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B4D8630)
#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPCLAMPEDINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B4D8640)
#define UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPCLAMPEDINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4D86F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int NoInterpClampedIntParameter_TypeDefinitionIndex = 6042;

	class NoInterpClampedIntParameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::System::Int32>
	{
	public:
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24

		::System::Void _ctor(::System::Int32 value, ::System::Int32 min, ::System::Int32 max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPCLAMPEDINTPARAMETER__CTOR_OFFSET))(this, value, min, max, overrideState);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPCLAMPEDINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_NOINTERPCLAMPEDINTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
