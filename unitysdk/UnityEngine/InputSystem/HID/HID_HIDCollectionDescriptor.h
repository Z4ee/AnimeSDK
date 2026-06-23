#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDCollectionType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_UsagePage.h"

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDCollectionDescriptor_TypeDefinitionIndex = 31793;

	struct alignas(4) HID_HIDCollectionDescriptor
	{
		::UnityEngine::InputSystem::HID::HID_HIDCollectionType type; // 0x10
		::System::Int32 usage; // 0x14
		::UnityEngine::InputSystem::HID::HID_UsagePage usagePage; // 0x18
		::System::Int32 parent; // 0x1C
		::System::Int32 childCount; // 0x20
		::System::Int32 firstChild; // 0x24
	};
}
