#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.h"

namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_BUILD_OFFSET UNITYSDK_OFFSET(0x1C0B0150)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0B1920)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDLayoutBuilder_TypeDefinitionIndex = 29131;

	class HID_HIDLayoutBuilder : public ::System::Object
	{
	public:
		::System::String* displayName; // 0x10
		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor hidDescriptor; // 0x18
		::System::String* parentLayout; // 0x48
		::System::Type* deviceType; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* Build()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER_BUILD_OFFSET))(this);
		}
	};
}
