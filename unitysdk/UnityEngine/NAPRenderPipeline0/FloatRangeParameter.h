#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/PrimitiveVolumeParameter_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_FLOATRANGEPARAMETER_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D84C9A0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLOATRANGEPARAMETER_INTERP_OFFSET UNITYSDK_OFFSET(0x1D84CB00)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLOATRANGEPARAMETER_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1D84C9B0)
#define UNITYENGINE_NAPRENDERPIPELINE0_FLOATRANGEPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D84CAB0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int FloatRangeParameter_TypeDefinitionIndex = 6058;

	class FloatRangeParameter : public ::UnityEngine::NAPRenderPipeline0::PrimitiveVolumeParameter_1<::UnityEngine::Vector2>
	{
	public:
		::System::Single min; // 0x20
		::System::Single max; // 0x24

		::System::Void _ctor(::UnityEngine::Vector2 value, ::System::Single min, ::System::Single max, ::System::Boolean overrideState)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLOATRANGEPARAMETER__CTOR_OFFSET))(this, value, min, max, overrideState);
		}

		::UnityEngine::Vector2 get_value()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLOATRANGEPARAMETER_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::UnityEngine::Vector2 value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLOATRANGEPARAMETER_SET_VALUE_OFFSET))(this, value);
		}

		::System::Void Interp(::UnityEngine::Vector2 from, ::UnityEngine::Vector2 to, ::System::Single t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_FLOATRANGEPARAMETER_INTERP_OFFSET))(this, from, to, t);
		}
	};
}
