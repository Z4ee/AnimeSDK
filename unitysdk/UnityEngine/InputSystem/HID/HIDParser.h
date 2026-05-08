#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDDeviceDescriptor.h"

#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_PARSEREPORTDESCRIPTOR_1_OFFSET UNITYSDK_OFFSET(0x1C0B19B0)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_PARSEREPORTDESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1C0B1930)
#define UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_READDATA_OFFSET UNITYSDK_OFFSET(0x1C0B2C00)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HIDParser_TypeDefinitionIndex = 29145;

	class HIDParser : public ::System::Object
	{
	public:
		static ::System::Boolean ParseReportDescriptor(::Il2CppArray<::System::Byte>* buffer, ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor& deviceDescriptor)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::Byte>*, ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_PARSEREPORTDESCRIPTOR_OFFSET))(buffer, deviceDescriptor);
		}

		static ::System::Boolean ParseReportDescriptor_1(::System::Byte* bufferPtr, ::System::Int32 bufferLength, ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor& deviceDescriptor)
		{
			return ((::System::Boolean(*)(::System::Byte*, ::System::Int32, ::UnityEngine::InputSystem::HID::HID_HIDDeviceDescriptor&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_PARSEREPORTDESCRIPTOR_1_OFFSET))(bufferPtr, bufferLength, deviceDescriptor);
		}

		static ::System::Int32 ReadData(::System::Int32 itemSize, ::System::Byte* currentPtr, ::System::Byte* endPtr)
		{
			return ((::System::Int32(*)(::System::Int32, ::System::Byte*, ::System::Byte*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HIDPARSER_READDATA_OFFSET))(itemSize, currentPtr, endPtr);
		}
	};
}
