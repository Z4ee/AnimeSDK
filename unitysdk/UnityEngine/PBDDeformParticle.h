#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformParticle_TypeDefinitionIndex = 24846;

	struct alignas(8) PBDDeformParticle
	{
		::UnityEngine::Vector3 position; // 0x10
		::UnityEngine::Vector3 fixVelocity; // 0x1C
		::System::Single mass; // 0x28
		::System::Single damping; // 0x2C
		::System::Single angularDamping; // 0x30
		::Il2CppArray<::System::UInt32>* distanceConstraints; // 0x38
		::Il2CppArray<::System::UInt32>* volumeConstraints; // 0x40
	};
}
