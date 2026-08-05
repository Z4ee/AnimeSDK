#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState_ActionMapIndices_TypeDefinitionIndex = 32188;

	struct alignas(4) InputActionState_ActionMapIndices
	{
		::System::Int32 actionStartIndex; // 0x10
		::System::Int32 actionCount; // 0x14
		::System::Int32 controlStartIndex; // 0x18
		::System::Int32 controlCount; // 0x1C
		::System::Int32 bindingStartIndex; // 0x20
		::System::Int32 bindingCount; // 0x24
		::System::Int32 interactionStartIndex; // 0x28
		::System::Int32 interactionCount; // 0x2C
		::System::Int32 processorStartIndex; // 0x30
		::System::Int32 processorCount; // 0x34
		::System::Int32 compositeStartIndex; // 0x38
		::System::Int32 compositeCount; // 0x3C
	};
}
