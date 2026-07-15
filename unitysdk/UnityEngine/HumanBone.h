#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/HumanLimit.h"

namespace System { class String; }

namespace UnityEngine
{
	inline static constexpr unsigned int HumanBone_TypeDefinitionIndex = 5152;

	struct alignas(8) HumanBone
	{
		::System::String* m_BoneName; // 0x10
		::System::String* m_HumanName; // 0x18
		::UnityEngine::HumanLimit limit; // 0x20
	};
}
