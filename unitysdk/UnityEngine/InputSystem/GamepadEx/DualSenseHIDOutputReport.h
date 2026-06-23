#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/DualSenseHIDOutputReport__rawdata_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/DualSenseHIDOutputReport__unknown2_e__FixedBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_CREATE_OFFSET UNITYSDK_OFFSET(0x1DCF7DB0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_GET_TYPESTATIC_OFFSET UNITYSDK_OFFSET(0x9EB720)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x1DCFA920)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_RESETCOLOR_OFFSET UNITYSDK_OFFSET(0xA3C720)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_SETCOLOR_OFFSET UNITYSDK_OFFSET(0xA3C5E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0xA3C420)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_SETTRIGGEREFFECT_1_OFFSET UNITYSDK_OFFSET(0xA3C570)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_SETTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0xA3C530)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int DualSenseHIDOutputReport_TypeDefinitionIndex = 39069;

	struct alignas(4) DualSenseHIDOutputReport
	{
		// static const ::System::Int32 kSize = 0x38; // 0x0
		// static const ::System::Int32 kReportId = 0x2; // 0x0
		// static const ::System::Int32 kTriggerEffectSize = 0xB; // 0x0
		// static const ::System::Byte kVibration = 0x26; // 0x0
		// static const ::System::Byte kWeapon = 0x25; // 0x0
		// static const ::System::Byte kFeedback = 0x21; // 0x0
		// static const ::System::Byte kNone = 0x5; // 0x0
		::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand; // 0x10
		::System::Byte reportId; // 0x18
		::System::Byte flags; // 0x19
		::System::Byte flags2; // 0x1A
		::System::Byte highFrequencyMotorSpeed; // 0x1B
		::System::Byte lowFrequencyMotorSpeed; // 0x1C
		::System::Byte redColor; // 0x45
		::System::Byte greenColor; // 0x46
		::System::Byte blueColor; // 0x47
		::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport__unknown2_e__FixedBuffer unknown2; // 0x21
		::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport__rawdata_e__FixedBuffer rawdata; // 0x18

		/*
		static ::UnityEngine::InputSystem::Utilities::FourCC get_Type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_GET_TYPE_OFFSET))();
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_typeStatic()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_GET_TYPESTATIC_OFFSET))(this);
		}
		*/

		::System::Void SetMotorSpeeds(::System::Single lowFreq, ::System::Single highFreq)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_SETMOTORSPEEDS_OFFSET))(this, lowFreq, highFreq);
		}

		/*
		::System::Void SetTriggerEffect(::UnityEngine::InputSystem::GamepadEx::TriggerEffectCommand effect, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectCommand, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_SETTRIGGEREFFECT_OFFSET))(this, effect, index);
		}
		*/

		/*
		::System::Void SetTriggerEffect_1(::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam data)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_SETTRIGGEREFFECT_1_OFFSET))(this, data);
		}
		*/

		/*
		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_SETCOLOR_OFFSET))(this, color);
		}
		*/

		::System::Void ResetColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_RESETCOLOR_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport Create()
		{
			return ((::UnityEngine::InputSystem::GamepadEx::DualSenseHIDOutputReport(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEHIDOUTPUTREPORT_CREATE_OFFSET))();
		}
	};
}
