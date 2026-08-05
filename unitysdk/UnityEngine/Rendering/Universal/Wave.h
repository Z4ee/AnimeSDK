#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_WAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x9A60C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int Wave_TypeDefinitionIndex = 27812;

	struct alignas(4) Wave
	{
		::System::Single amplitude; // 0x10
		::System::Single direction; // 0x14
		::System::Single wavelength; // 0x18
		::UnityEngine::Vector2 origin; // 0x1C
		::System::Single onmiDir; // 0x24

		::System::Void _ctor(::System::Single amp, ::System::Single dir, ::System::Single length, ::UnityEngine::Vector2 org, ::System::Boolean omni)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_WAVE__CTOR_OFFSET))(this, amp, dir, length, org, omni);
		}
	};
}
