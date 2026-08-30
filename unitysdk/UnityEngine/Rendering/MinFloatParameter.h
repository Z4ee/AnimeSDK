#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/FloatParameter.h"

#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CD1F420)
#define UNITYENGINE_RENDERING_MINFLOATPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1CD1F430)
#define UNITYENGINE_RENDERING_MINFLOATPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1F440)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int MinFloatParameter_TypeDefinitionIndex = 34966;

	class MinFloatParameter : public ::UnityEngine::Rendering::FloatParameter
	{
	public:
		::System::Single min; // 0x20

		::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER__CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_MINFLOATPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
