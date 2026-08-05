#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_FORMAT_1_OFFSET UNITYSDK_OFFSET(0xA929D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x1F165440)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH0ID_OFFSET UNITYSDK_OFFSET(0xA92AD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH0PRESSED_OFFSET UNITYSDK_OFFSET(0xA92A30)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH0X_OFFSET UNITYSDK_OFFSET(0xA92AE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH0Y_OFFSET UNITYSDK_OFFSET(0xA92B80)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH1ID_OFFSET UNITYSDK_OFFSET(0xA92CC0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH1PRESSED_OFFSET UNITYSDK_OFFSET(0xA92C20)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH1X_OFFSET UNITYSDK_OFFSET(0xA92CD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH1Y_OFFSET UNITYSDK_OFFSET(0xA92D70)

namespace UnityEngine::InputSystem::GamepadEx::LowLevel
{
	inline static constexpr unsigned int DualSenseHIDInputReportV2_TypeDefinitionIndex = 39750;

	struct alignas(4) DualSenseHIDInputReportV2
	{
		// static const ::System::Single GyroParam; // 0x0
		// static const ::System::Single AccelParam; // 0x0
		::System::Byte leftStickX; // 0x10
		::System::Byte leftStickY; // 0x11
		::System::Byte rightStickX; // 0x12
		::System::Byte rightStickY; // 0x13
		::System::Byte leftTrigger; // 0x14
		::System::Byte rightTrigger; // 0x15
		::System::Byte buttons0; // 0x16
		::System::Byte buttons1; // 0x17
		::System::Byte buttons2; // 0x18
		::System::Int32 timestamp; // 0x1C
		::System::Int16 gyroPitch; // 0x20
		::System::Int16 gyroYaw; // 0x22
		::System::Int16 gyroRoll; // 0x24
		::System::Int16 accelX; // 0x26
		::System::Int16 accelY; // 0x28
		::System::Int16 accelZ; // 0x2A
		::System::Byte touch0data0; // 0x31
		::System::Byte touch0data1; // 0x32
		::System::Byte touch0data2; // 0x33
		::System::Byte touch0data3; // 0x34
		::System::Byte touch1data0; // 0x35
		::System::Byte touch1data1; // 0x36
		::System::Byte touch1data2; // 0x37
		::System::Byte touch1data3; // 0x38

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_FORMAT_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_format_1()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_FORMAT_1_OFFSET))(this);
		}
		*/

		::System::Boolean get_touch0pressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH0PRESSED_OFFSET))(this);
		}

		::System::Int32 get_touch0id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH0ID_OFFSET))(this);
		}

		::System::Int32 get_touch0x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH0X_OFFSET))(this);
		}

		::System::Int32 get_touch0y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH0Y_OFFSET))(this);
		}

		::System::Boolean get_touch1pressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH1PRESSED_OFFSET))(this);
		}

		::System::Int32 get_touch1id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH1ID_OFFSET))(this);
		}

		::System::Int32 get_touch1x()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH1X_OFFSET))(this);
		}

		::System::Int32 get_touch1y()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_LOWLEVEL_DUALSENSEHIDINPUTREPORTV2_GET_TOUCH1Y_OFFSET))(this);
		}
	};
}
