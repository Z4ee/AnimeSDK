#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"

namespace System { class String; }

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_NewDeviceMsg_Data_TypeDefinitionIndex = 28999;

	struct alignas(8) InputRemoting_NewDeviceMsg_Data
	{
		::System::String* name; // 0x10
		::System::String* layout; // 0x18
		::System::Int32 deviceId; // 0x20
		::Il2CppArray<::System::String*>* usages; // 0x28
		::UnityEngine::InputSystem::Layouts::InputDeviceDescription description; // 0x30
	};
}
