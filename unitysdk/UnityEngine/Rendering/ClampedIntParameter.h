#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/IntParameter.h"

#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EBE2E60)
#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1EBE2E70)
#define UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE2E90)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int ClampedIntParameter_TypeDefinitionIndex = 34962;

	class ClampedIntParameter : public ::UnityEngine::Rendering::IntParameter
	{
	public:
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_CLAMPEDINTPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
