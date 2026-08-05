#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/IntParameter.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8A9830)
#define UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E8A9840)
#define UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A98F0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int ClampedIntParameter_TypeDefinitionIndex = 6054;

	class ClampedIntParameter : public ::UnityEngine::NAPRenderPipeline0::IntParameter
	{
	public:
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24

		::System::Void _ctor(::System::Int32 value, ::System::Int32 min, ::System::Int32 max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDINTPARAMETER__CTOR_OFFSET))(this, value, min, max, overrideState);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
