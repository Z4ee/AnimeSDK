#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B17C660)
#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1B17C670)
#define UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B17C690)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int NoInterpClampedIntParameter_TypeDefinitionIndex = 33825;

	class NoInterpClampedIntParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Int32>
	{
	public:
		::System::Int32 min; // 0x20
		::System::Int32 max; // 0x24

		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER__CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_NOINTERPCLAMPEDINTPARAMETER_SET_VALUE_OFFSET))(this, a1);
		}
	};
}
