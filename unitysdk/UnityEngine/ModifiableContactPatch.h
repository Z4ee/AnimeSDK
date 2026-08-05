#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/ModifiableMassProperties.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ModifiableContactPatch_TypeDefinitionIndex = 7785;

	struct alignas(4) ModifiableContactPatch
	{
		::UnityEngine::ModifiableMassProperties massProperties; // 0x10
		::UnityEngine::Vector3 normal; // 0x20
		::System::Single restitution; // 0x2C
		::System::Single dynamicFriction; // 0x30
		::System::Single staticFriction; // 0x34
		::System::Byte startContactIndex; // 0x38
		::System::Byte contactCount; // 0x39
		::System::Byte materialFlags; // 0x3A
		::System::Byte internalFlags; // 0x3B
		::System::UInt16 materialIndex; // 0x3C
		::System::UInt16 otherMaterialIndex; // 0x3E
	};
}
