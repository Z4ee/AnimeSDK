#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int ModifiableMassProperties_TypeDefinitionIndex = 7783;

	struct alignas(4) ModifiableMassProperties
	{
		::System::Single inverseMassScale; // 0x10
		::System::Single inverseInertiaScale; // 0x14
		::System::Single otherInverseMassScale; // 0x18
		::System::Single otherInverseInertiaScale; // 0x1C
	};
}
