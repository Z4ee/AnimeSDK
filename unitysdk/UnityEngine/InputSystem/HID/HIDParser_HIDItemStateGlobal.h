#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_UsagePage.h"

#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATEGLOBAL_GETPHYSICALMAX_OFFSET UNITYSDK_OFFSET(0xA0BF50)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATEGLOBAL_GETPHYSICALMIN_OFFSET UNITYSDK_OFFSET(0xA0BE50)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATEGLOBAL_GETUSAGEPAGE_OFFSET UNITYSDK_OFFSET(0xA0BDD0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDParser_HIDItemStateGlobal_TypeDefinitionIndex = 31805;

	struct alignas(4) HIDParser_HIDItemStateGlobal
	{
		::System::Nullable_1<::System::Int32> usagePage; // 0x10
		::System::Nullable_1<::System::Int32> logicalMinimum; // 0x18
		::System::Nullable_1<::System::Int32> logicalMaximum; // 0x20
		::System::Nullable_1<::System::Int32> physicalMinimum; // 0x28
		::System::Nullable_1<::System::Int32> physicalMaximum; // 0x30
		::System::Nullable_1<::System::Int32> unitExponent; // 0x38
		::System::Nullable_1<::System::Int32> unit; // 0x40
		::System::Nullable_1<::System::Int32> reportSize; // 0x48
		::System::Nullable_1<::System::Int32> reportCount; // 0x50
		::System::Nullable_1<::System::Int32> reportId; // 0x58

		/*
		::UnityEngine::InputSystem::HID::HID_UsagePage GetUsagePage(::System::Int32 index, ::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal& localItemState)
		{
			return ((::UnityEngine::InputSystem::HID::HID_UsagePage(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::HID::HIDParser_HIDItemStateLocal&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATEGLOBAL_GETUSAGEPAGE_OFFSET))(this, index, localItemState);
		}
		*/

		::System::Int32 GetPhysicalMin()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATEGLOBAL_GETPHYSICALMIN_OFFSET))(this);
		}

		::System::Int32 GetPhysicalMax()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_HIDITEMSTATEGLOBAL_GETPHYSICALMAX_OFFSET))(this);
		}
	};
}
