#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceDescription_DeviceDescriptionJson_TypeDefinitionIndex = 32000;

	struct alignas(8) InputDeviceDescription_DeviceDescriptionJson
	{
		::System::String* interface; // 0x10
		::System::String* type; // 0x18
		::System::String* product; // 0x20
		::System::String* serial; // 0x28
		::System::String* version; // 0x30
		::System::String* manufacturer; // 0x38
		::System::String* capabilities; // 0x40
	};
}
