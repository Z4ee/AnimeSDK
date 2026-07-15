#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/OffScreenUISettings__RTIIDs_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/Rendering/OffScreenUISettings__WorldSpace_e__FixedBuffer.h"

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int OffScreenUISettings_TypeDefinitionIndex = 4826;

	struct alignas(4) OffScreenUISettings
	{
		::System::Boolean Enabled; // 0x10
		::UnityEngine::Rendering::OffScreenUISettings__RTIIDs_e__FixedBuffer RTIIDs; // 0x14
		::UnityEngine::Rendering::OffScreenUISettings__WorldSpace_e__FixedBuffer WorldSpace; // 0x24
	};
}
