#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_GenericDesktop.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_UsagePage.h"

#define UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_HIDPAGEUSAGE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x949400)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_HIDPAGEUSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x293FB0)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDSupport_HIDPageUsage_TypeDefinitionIndex = 29151;

	struct alignas(4) HIDSupport_HIDPageUsage
	{
		::UnityEngine::InputSystem::HID::HID_UsagePage page; // 0x10
		::System::Int32 usage; // 0x14

		::System::Void _ctor(::UnityEngine::InputSystem::HID::HID_UsagePage page, ::System::Int32 usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_UsagePage, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_HIDPAGEUSAGE__CTOR_OFFSET))(this, page, usage);
		}

		::System::Void _ctor_1(::UnityEngine::InputSystem::HID::HID_GenericDesktop usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_GenericDesktop))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDSUPPORT_HIDPAGEUSAGE__CTOR_1_OFFSET))(this, usage);
		}
	};
}
