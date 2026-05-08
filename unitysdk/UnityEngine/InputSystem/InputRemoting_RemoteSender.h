#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputRemoting_RemoteInputDevice.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_RemoteSender_TypeDefinitionIndex = 28989;

	struct alignas(8) InputRemoting_RemoteSender
	{
		::System::Int32 senderId; // 0x10
		::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>* layouts; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::InputRemoting_RemoteInputDevice>* devices; // 0x20
	};
}
