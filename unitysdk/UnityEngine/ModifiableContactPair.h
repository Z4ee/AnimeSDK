#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ModifiableContactPair_TypeDefinitionIndex = 7709;

	struct alignas(8) ModifiableContactPair
	{
		::System::IntPtr actor; // 0x10
		::System::IntPtr otherActor; // 0x18
		::System::IntPtr shape; // 0x20
		::System::IntPtr otherShape; // 0x28
		::UnityEngine::Quaternion rotation; // 0x30
		::UnityEngine::Vector3 position; // 0x40
		::UnityEngine::Quaternion otherRotation; // 0x4C
		::UnityEngine::Vector3 otherPosition; // 0x5C
		::System::Int32 numContacts; // 0x68
		::System::IntPtr contacts; // 0x70
	};
}
