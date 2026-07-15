#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoopSystemInternal_TypeDefinitionIndex = 4525;

	struct alignas(8) PlayerLoopSystemInternal
	{
		::System::Type* type; // 0x10
		::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate; // 0x18
		::System::IntPtr updateFunction; // 0x20
		::System::IntPtr loopConditionFunction; // 0x28
		::System::Int32 numSubSystems; // 0x30
	};
}
