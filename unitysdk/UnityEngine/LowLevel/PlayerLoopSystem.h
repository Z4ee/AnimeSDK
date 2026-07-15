#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }
namespace UnityEngine::LowLevel { class PlayerLoopSystem_UpdateFunction; }

namespace UnityEngine::LowLevel
{
	inline static constexpr unsigned int PlayerLoopSystem_TypeDefinitionIndex = 4526;

	struct alignas(8) PlayerLoopSystem
	{
		::System::Type* type; // 0x10
		::Il2CppArray<::UnityEngine::LowLevel::PlayerLoopSystem>* subSystemList; // 0x18
		::UnityEngine::LowLevel::PlayerLoopSystem_UpdateFunction* updateDelegate; // 0x20
		::System::IntPtr updateFunction; // 0x28
		::System::IntPtr loopConditionFunction; // 0x30
	};
}
