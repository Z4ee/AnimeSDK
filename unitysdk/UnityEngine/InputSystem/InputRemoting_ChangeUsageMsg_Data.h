#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_ChangeUsageMsg_Data_TypeDefinitionIndex = 29003;

	struct alignas(8) InputRemoting_ChangeUsageMsg_Data
	{
		::System::Int32 deviceId; // 0x10
		::Il2CppArray<::System::String*>* usages; // 0x18
	};
}
