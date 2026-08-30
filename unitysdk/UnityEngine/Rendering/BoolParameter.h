#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Rendering/VolumeParameter_1.h"

#define UNITYENGINE_RENDERING_BOOLPARAMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBE0E70)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int BoolParameter_TypeDefinitionIndex = 34954;

	class BoolParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::System::Boolean>
	{
	public:
		::System::Void _ctor(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_BOOLPARAMETER__CTOR_OFFSET))(this, a1, a2);
		}
	};
}
