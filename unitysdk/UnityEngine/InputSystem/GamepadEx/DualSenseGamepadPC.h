#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/InputSystem/DualShock/DualSenseGamepadHID.h"
#include "unitysdk/UnityEngine/InputSystem/GamepadEx/TriggerEffectParam.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }
namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ADDDEVICETOLIST_OFFSET UNITYSDK_OFFSET(0x1F160970)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_CONVERACCEL_OFFSET UNITYSDK_OFFSET(0x1F162D20)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_CONVERGYRO2RADPERSECOND_OFFSET UNITYSDK_OFFSET(0x1F162C80)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_CUSTOMMERGESENSOR_OFFSET UNITYSDK_OFFSET(0x1F162630)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F160E10)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GETBYSLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1F1605D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F1601C0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1F160220)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F160200)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_LIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1F1602A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F1601E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_PS5USERID_OFFSET UNITYSDK_OFFSET(0x1F160540)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_SLOTINDEX_OFFSET UNITYSDK_OFFSET(0x1F160470)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_MERGEFORWARDINNER_OFFSET UNITYSDK_OFFSET(0x1F1633A0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_MERGESENSOR_OFFSET UNITYSDK_OFFSET(0x1F163420)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ONADDED_OFFSET UNITYSDK_OFFSET(0x1F1608E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1635E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1F160B70)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1F163620)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1F161030)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_PREPROCESSEVENTINNER_OFFSET UNITYSDK_OFFSET(0x1F162E80)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_PS4COLORIDTOCOLOR_OFFSET UNITYSDK_OFFSET(0x1F1603D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_REMOVEDEVICEFROMLIST_OFFSET UNITYSDK_OFFSET(0x1F160BE0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x1F1614F0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1F1617E0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1F161C90)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x1F162360)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SETTRIGGEREFFECT_OFFSET UNITYSDK_OFFSET(0x1F161F70)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1F1601D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1F160210)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SET_ORIENTATION_OFFSET UNITYSDK_OFFSET(0x1F1601F0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET UNITYSDK_OFFSET(0x1F163860)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET UNITYSDK_OFFSET(0x1F1637B0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET UNITYSDK_OFFSET(0x1F163810)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_UPDATEPADSETTINGSIFNEEDED_OFFSET UNITYSDK_OFFSET(0x1F160500)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F163900)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1638C0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F163950)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_MERGEFORWARDINNER_OFFSET UNITYSDK_OFFSET(0x1F163960)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_ONADDED_OFFSET UNITYSDK_OFFSET(0x1F163970)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1F1639D0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_PAUSEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1F163A10)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_PREPROCESSEVENTINNER_OFFSET UNITYSDK_OFFSET(0x1F163A60)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_RESETHAPTICS_OFFSET UNITYSDK_OFFSET(0x1F163A70)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_RESUMEHAPTICS_OFFSET UNITYSDK_OFFSET(0x1F163AD0)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_SETLIGHTBARCOLOR_OFFSET UNITYSDK_OFFSET(0x1F163B20)
#define UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_SETMOTORSPEEDS_OFFSET UNITYSDK_OFFSET(0x1F163B80)

namespace UnityEngine::InputSystem::GamepadEx
{
	inline static constexpr unsigned int DualSenseGamepadPC_TypeDefinitionIndex = 39731;

	class DualSenseGamepadPC : public ::UnityEngine::InputSystem::DualShock::DualSenseGamepadHID
	{
	public:
		static ::Il2CppArray<::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC*>** StaticGet_s_Devices()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC*>**)Il2CppClass::FromTypeDefinitionIndex(DualSenseGamepadPC_TypeDefinitionIndex)->GetStaticField(0x2AF90);
		}
		static ::System::Boolean* StaticGet_UseOld_Haptics_Motor_LightBarColor()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DualSenseGamepadPC_TypeDefinitionIndex)->GetStaticField(0x94E0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField; // 0x260
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x268
		::UnityEngine::InputSystem::Controls::QuaternionControl* _orientation_k__BackingField; // 0x270
		::System::Nullable_1<::System::Double> _lastTimestamp; // 0x278
		::System::Int32 _lastFrameCount; // 0x288
		::System::Nullable_1<::System::Single> m_SmallMotor; // 0x28C
		::System::Int32 m_DefaultColorId; // 0x294
		::System::Nullable_1<::System::Single> m_LargeMotor; // 0x298
		::System::Nullable_1<::UnityEngine::Color> m_LightBarColor; // 0x2A0
		::System::Int32 m_SlotId; // 0x2B4
		::System::Int32 m_PS5UserId; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC__CCTOR_OFFSET))();
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SET_ACCELERATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_orientation()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_ORIENTATION_OFFSET))(this);
		}

		::System::Void set_orientation(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SET_ORIENTATION_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC*> get_all()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_ALL_OFFSET))();
		}

		::UnityEngine::Color get_lightBarColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_LIGHTBARCOLOR_OFFSET))(this);
		}

		::System::Int32 get_slotIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_SLOTINDEX_OFFSET))(this);
		}

		::System::Int32 get_ps5UserId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GET_PS5USERID_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC* GetBySlotIndex(::System::Int32 slotIndex)
		{
			return ((::UnityEngine::InputSystem::GamepadEx::DualSenseGamepadPC*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_GETBYSLOTINDEX_OFFSET))(slotIndex);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ONADDED_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ONREMOVED_OFFSET))(this);
		}

		::System::Void AddDeviceToList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ADDDEVICETOLIST_OFFSET))(this);
		}

		::System::Void RemoveDeviceFromList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_REMOVEDEVICEFROMLIST_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_FINISHSETUP_OFFSET))(this);
		}

		::System::Void PauseHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_PAUSEHAPTICS_OFFSET))(this);
		}

		::System::Void ResetHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_RESETHAPTICS_OFFSET))(this);
		}

		::System::Void ResumeHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_RESUMEHAPTICS_OFFSET))(this);
		}

		::System::Void SetLightBarColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SETLIGHTBARCOLOR_OFFSET))(this, color);
		}

		::System::Void SetTriggerEffect(::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam effect)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::GamepadEx::TriggerEffectParam))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SETTRIGGEREFFECT_OFFSET))(this, effect);
		}

		::System::Void SetMotorSpeeds(::System::Single lowFrequency, ::System::Single highFrequency)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_SETMOTORSPEEDS_OFFSET))(this, lowFrequency, highFrequency);
		}

		::System::Void UpdatePadSettingsIfNeeded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_UPDATEPADSETTINGSIFNEEDED_OFFSET))(this);
		}

		static ::UnityEngine::Color PS4ColorIdToColor(::System::Int32 colorId)
		{
			return ((::UnityEngine::Color(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_PS4COLORIDTOCOLOR_OFFSET))(colorId);
		}

		::System::Void CustomMergeSensor(::System::Int16 pitch, ::System::Int16 yaw, ::System::Int16 roll, ::System::Int16 accelX, ::System::Int16 accelY, ::System::Int16 accelZ, ::System::Double currentTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Int16, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_CUSTOMMERGESENSOR_OFFSET))(this, pitch, yaw, roll, accelX, accelY, accelZ, currentTime);
		}

		::System::Single ConverGyro2RadPerSecond(::System::Int16 gyro)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_CONVERGYRO2RADPERSECOND_OFFSET))(this, gyro);
		}

		::System::Single ConverAccel(::System::Int16 gyro)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int16))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_CONVERACCEL_OFFSET))(this, gyro);
		}

		::System::Boolean PreProcessEventInner(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_PREPROCESSEVENTINNER_OFFSET))(this, eventPtr);
		}

		::System::Boolean MergeForwardInner(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_MERGEFORWARDINNER_OFFSET))(this, currentEventPtr, nextEventPtr);
		}

		::System::Void MergeSensor(::UnityEngine::InputSystem::LowLevel::InputEventPtr currentEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr nextEventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_MERGESENSOR_OFFSET))(this, currentEventPtr, nextEventPtr);
		}

		::System::Void OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnNextUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONNEXTUPDATE_OFFSET))(this);
		}

		::System::Void UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_OnStateEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_ONSTATEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Boolean UnityEngine_InputSystem_LowLevel_IInputStateCallbackReceiver_GetStateOffsetForEvent(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::System::UInt32& offset)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC_UNITYENGINE_INPUTSYSTEM_LOWLEVEL_IINPUTSTATECALLBACKRECEIVER_GETSTATEOFFSETFOREVENT_OFFSET))(this, control, eventPtr, offset);
		}

		::System::Void __base_FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_FINISHSETUP_OFFSET))(this);
		}

		::System::Boolean __base_MergeForwardInner(::UnityEngine::InputSystem::LowLevel::InputEventPtr P0, ::UnityEngine::InputSystem::LowLevel::InputEventPtr P1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_MERGEFORWARDINNER_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_ONADDED_OFFSET))(this);
		}

		::System::Void __base_OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_ONREMOVED_OFFSET))(this);
		}

		::System::Void __base_PauseHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_PAUSEHAPTICS_OFFSET))(this);
		}

		::System::Boolean __base_PreProcessEventInner(::UnityEngine::InputSystem::LowLevel::InputEventPtr P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_PREPROCESSEVENTINNER_OFFSET))(this, P0);
		}

		::System::Void __base_ResetHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_RESETHAPTICS_OFFSET))(this);
		}

		::System::Void __base_ResumeHaptics()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_RESUMEHAPTICS_OFFSET))(this);
		}

		::System::Void __base_SetLightBarColor(::UnityEngine::Color P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_SETLIGHTBARCOLOR_OFFSET))(this, P0);
		}

		::System::Void __base_SetMotorSpeeds(::System::Single P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GAMEPADEX_DUALSENSEGAMEPADPC___BASE_SETMOTORSPEEDS_OFFSET))(this, P0, P1);
		}
	};
}
