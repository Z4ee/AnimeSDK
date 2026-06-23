#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDCollectionDescriptor.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDElementDescriptor.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_UsagePage.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTOR_FROMJSON_OFFSET UNITYSDK_OFFSET(0x1D752170)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTOR_TOJSON_OFFSET UNITYSDK_OFFSET(0xA0B490)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDDeviceDescriptor_TypeDefinitionIndex = 31794;

	struct alignas(8) HID_HIDDeviceDescriptor
	{
		::System::Int32 vendorId; // 0x10
		::System::Int32 productId; // 0x14
		::System::Int32 usage; // 0x18
		::UnityEngine::InputSystem::HID::HID_UsagePage usagePage; // 0x1C
		::System::Int32 inputReportSize; // 0x20
		::System::Int32 outputReportSize; // 0x24
		::System::Int32 featureReportSize; // 0x28
		::Il2CppArray<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>* elements; // 0x30
		::Il2CppArray<::UnityEngine::InputSystem::HID::HID_HIDCollectionDescriptor>* collections; // 0x38

		::System::String* ToJson()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTOR_TOJSON_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor FromJson(::System::String* json)
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDDEVICEDESCRIPTOR_FROMJSON_OFFSET))(json);
		}
	};
}
