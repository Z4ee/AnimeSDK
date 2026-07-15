#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine
{
	inline static constexpr unsigned int WarmupSubpass_TypeDefinitionIndex = 4368;

	struct alignas(8) WarmupSubpass
	{
		::Il2CppArray<::System::Int32>* inputAttachments; // 0x10
		::Il2CppArray<::System::Int32>* colorAttachments; // 0x18
		::System::Boolean readOnlyDepth; // 0x20
	};
}
