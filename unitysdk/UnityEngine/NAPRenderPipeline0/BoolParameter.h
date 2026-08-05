#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_BOOLPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EE1E900)
#define UNITYENGINE_NAPRENDERPIPELINE0_BOOLPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EE1E910)
#define UNITYENGINE_NAPRENDERPIPELINE0_BOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE1E8E0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int BoolParameter_TypeDefinitionIndex = 6051;

	class BoolParameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::System::Boolean>
	{
	public:
		::System::Void _ctor(::System::Boolean value, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BOOLPARAMETER__CTOR_OFFSET))(this, value, overrideState);
		}

		::System::Boolean get_value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BOOLPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_BOOLPARAMETER_SET_VALUE_OFFSET))(this, value);
		}
	};
}
