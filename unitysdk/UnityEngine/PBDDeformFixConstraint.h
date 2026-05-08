#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine
{
	inline static constexpr unsigned int PBDDeformFixConstraint_TypeDefinitionIndex = 24848;

	struct alignas(4) PBDDeformFixConstraint
	{
		::System::UInt32 particle; // 0x10
		::UnityEngine::Vector3 position; // 0x14
		::UnityEngine::Quaternion rotation; // 0x20
		::System::Single compliance; // 0x30
		::System::Single rotationCompliance; // 0x34
	};
}
