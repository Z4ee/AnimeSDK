#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_UsagePage.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace System { class String; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceExecuteCommandDelegate; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_HIDDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAFFED0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDPARSEDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x1EAFFEC0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x1EAFFEA0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORSIZEDEVICECOMMANDTYPE_OFFSET UNITYSDK_OFFSET(0x1EAFFEB0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_ONFINDLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1EAFFF60)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_READHIDDEVICEDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB008A0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_USAGEPAGETOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB01310)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_USAGETOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB013A0)
#define UNITYENGINE_INPUTSYSTEM_HID_HID__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB01440)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_TypeDefinitionIndex = 32406;

	class HID : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		// static const ::System::String* kHIDInterface; // 0x0
		// static const ::System::String* kHIDNamespace; // 0x0
		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor m_HIDDescriptor; // 0x158
		::System::Boolean m_HaveParsedHIDDescriptor; // 0x188

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorDeviceCommandType()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDReportDescriptorSizeDeviceCommandType()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDREPORTDESCRIPTORSIZEDEVICECOMMANDTYPE_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC get_QueryHIDParsedReportDescriptorDeviceCommandType()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_QUERYHIDPARSEDREPORTDESCRIPTORDEVICECOMMANDTYPE_OFFSET))();
		}

		::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor get_hidDescriptor()
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_GET_HIDDESCRIPTOR_OFFSET))(this);
		}

		static ::System::String* OnFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& description, ::System::String* matchedLayout, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeDeviceCommand)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::String*, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_ONFINDLAYOUTFORDEVICE_OFFSET))(description, matchedLayout, executeDeviceCommand);
		}

		static ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor ReadHIDDeviceDescriptor(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& deviceDescription, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* executeCommandDelegate)
		{
			return ((::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor(*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_READHIDDEVICEDESCRIPTOR_OFFSET))(deviceDescription, executeCommandDelegate);
		}

		static ::System::String* UsagePageToString(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::HID::HID_UsagePage))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_USAGEPAGETOSTRING_OFFSET))(usagePage);
		}

		static ::System::String* UsageToString(::UnityEngine::InputSystem::HID::HID_UsagePage usagePage, ::System::Int32 usage)
		{
			return ((::System::String*(*)(::UnityEngine::InputSystem::HID::HID_UsagePage, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_USAGETOSTRING_OFFSET))(usagePage, usage);
		}
	};
}
