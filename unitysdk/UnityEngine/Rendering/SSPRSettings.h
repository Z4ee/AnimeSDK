#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/SSPRSettings__PlaneDir_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/SSPRSettings__PlanePos_e__FixedBuffer.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SSPRSettings_TypeDefinitionIndex = 4807;

	struct alignas(4) SSPRSettings
	{
		::System::Boolean Enabled; // 0x10
		::System::Int32 PlaneCount; // 0x14
		::UnityEngine::Rendering::SSPRSettings__PlanePos_e__FixedBuffer PlanePos; // 0x18
		::UnityEngine::Rendering::SSPRSettings__PlaneDir_e__FixedBuffer PlaneDir; // 0x48
		::System::Int32 SSPRCS; // 0x78
	};
}
