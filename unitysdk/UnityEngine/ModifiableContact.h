#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ModifiableContact_TypeDefinitionIndex = 7784;

	struct alignas(4) ModifiableContact
	{
		::UnityEngine::Vector3 contact; // 0x10
		::System::Single separation; // 0x1C
		::UnityEngine::Vector3 targetVelocity; // 0x20
		::System::Single maxImpulse; // 0x2C
		::UnityEngine::Vector3 normal; // 0x30
		::System::Single restitution; // 0x3C
		::System::UInt32 materialFlags; // 0x40
		::System::UInt16 materialIndex; // 0x44
		::System::UInt16 otherMaterialIndex; // 0x46
		::System::Single staticFriction; // 0x48
		::System::Single dynamicFriction; // 0x4C
	};
}
