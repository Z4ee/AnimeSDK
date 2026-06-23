#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_MessageType.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_Message_TypeDefinitionIndex = 31643;

	struct alignas(8) InputRemoting_Message
	{
		::System::Int32 participantId; // 0x10
		::UnityEngine::InputSystem::InputRemoting_MessageType type; // 0x14
		::Il2CppArray<::System::Byte>* data; // 0x18
	};
}
