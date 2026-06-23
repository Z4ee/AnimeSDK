#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice_DeviceFlags.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ADDDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D3C0F30)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_CLEARDEVICEUSAGES_OFFSET UNITYSDK_OFFSET(0x1D3C10C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x1D3C0B90)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DECODESTATEOFFSETTOCONTROLMAPENTRY_OFFSET UNITYSDK_OFFSET(0x1D3C0E20)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ENCODESTATEOFFSETTOCONTROLMAPENTRY_OFFSET UNITYSDK_OFFSET(0x1D3C0E10)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTECOMMAND_OFFSET UNITYSDK_OFFSET(0x1D3C0D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTEDISABLECOMMAND_OFFSET UNITYSDK_OFFSET(0x1D3C1200)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTEENABLECOMMAND_OFFSET UNITYSDK_OFFSET(0x1D3C11C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ADDED_OFFSET UNITYSDK_OFFSET(0x1D3C0750)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ALLCONTROLS_OFFSET UNITYSDK_OFFSET(0x1D3C07D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1D3C0840)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_CANRUNINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D3C06D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D3C0590)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1D3C0790)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDINFRONTEND_OFFSET UNITYSDK_OFFSET(0x1D3C0D80)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDINRUNTIME_OFFSET UNITYSDK_OFFSET(0x1D3C0DB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDWHILEINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D3C0DE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1D3C05C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASCONTROLSWITHDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1D3C0E40)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASDONTRESETCONTROLS_OFFSET UNITYSDK_OFFSET(0x1D3C0E70)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASEVENTMERGER_OFFSET UNITYSDK_OFFSET(0x1D3C0ED0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASEVENTPREPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1D3C0F00)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASSTATECALLBACKS_OFFSET UNITYSDK_OFFSET(0x1D3C0EA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_LASTUPDATETIME_OFFSET UNITYSDK_OFFSET(0x1D3C07A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_NATIVE_OFFSET UNITYSDK_OFFSET(0x1D3C0770)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_REMOTE_OFFSET UNITYSDK_OFFSET(0x1D3C0760)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_UPDATEBEFORERENDER_OFFSET UNITYSDK_OFFSET(0x1D3C0780)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_VALUESIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1D3C0830)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_VALUETYPE_OFFSET UNITYSDK_OFFSET(0x1D3C0800)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_WASUPDATEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1D3C07C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1D3C0D00)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYADDED_OFFSET UNITYSDK_OFFSET(0x1D3C1240)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D3C0C60)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYREMOVED_OFFSET UNITYSDK_OFFSET(0x1D3C1250)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONADDED_OFFSET UNITYSDK_OFFSET(0x1D3C0D10)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONCONFIGURATIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1D3C0D30)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1D3C0D20)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_QUERYENABLEDSTATEFROMRUNTIME_OFFSET UNITYSDK_OFFSET(0x1D3C0650)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMBUFFERASOBJECT_OFFSET UNITYSDK_OFFSET(0x1D3C0960)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMSTATEASOBJECT_OFFSET UNITYSDK_OFFSET(0x1D3C09B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMSTATEINTOBUFFER_OFFSET UNITYSDK_OFFSET(0x1D3C0A50)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REMOVEDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D3C0FA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REQUESTRESET_OFFSET UNITYSDK_OFFSET(0x1D3C1180)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REQUESTSYNC_OFFSET UNITYSDK_OFFSET(0x1D3C1140)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDINFRONTEND_OFFSET UNITYSDK_OFFSET(0x1D3C0D90)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDINRUNTIME_OFFSET UNITYSDK_OFFSET(0x1D3C0DC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDWHILEINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D3C0DF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASCONTROLSWITHDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1D3C0E50)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASDONTRESETCONTROLS_OFFSET UNITYSDK_OFFSET(0x1D3C0E80)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASEVENTMERGER_OFFSET UNITYSDK_OFFSET(0x1D3C0EE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASEVENTPREPROCESSOR_OFFSET UNITYSDK_OFFSET(0x1D3C0F10)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASSTATECALLBACKS_OFFSET UNITYSDK_OFFSET(0x1D3C0EB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTDEVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C0930)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputDevice_TypeDefinitionIndex = 31628;

	class InputDevice : public ::UnityEngine::InputSystem::InputControl
	{
	public:
		// static const ::System::Int32 InvalidDeviceId = 0x0; // 0x0
		// static const ::System::Int32 kLocalParticipantId = 0x0; // 0x0
		// static const ::System::Int32 kInvalidDeviceIndex = 0xFFFFFFFF; // 0x0
		// static const ::System::Int32 kControlIndexBits = 0xA; // 0x0
		// static const ::System::Int32 kStateOffsetBits = 0xD; // 0x0
		// static const ::System::Int32 kStateSizeBits = 0x9; // 0x0
		::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* m_ChildrenForEachControl; // 0xD8
		::Il2CppArray<::System::UInt32>* m_StateOffsetToControlMap; // 0xE0
		::Il2CppArray<::UnityEngine::InputSystem::InputControl*>* m_UsageToControl; // 0xE8
		::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>* m_AliasesForEachControl; // 0xF0
		::Il2CppArray<::UnityEngine::InputSystem::Utilities::InternedString>* m_UsagesForEachControl; // 0xF8
		::UnityEngine::InputSystem::Layouts::InputDeviceDescription m_Description; // 0x100
		::System::Double m_LastUpdateTimeInternal; // 0x138
		::System::Int32 m_DeviceId; // 0x140
		::System::UInt32 m_CurrentUpdateStepCount; // 0x144
		::System::Int32 m_ParticipantId; // 0x148
		::UnityEngine::InputSystem::InputDevice_DeviceFlags m_DeviceFlags; // 0x14C
		::System::Int32 m_DeviceIndex; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputDeviceDescription get_description()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceDescription(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DESCRIPTION_OFFSET))(this);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ENABLED_OFFSET))(this);
		}

		::System::Boolean get_canRunInBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_CANRUNINBACKGROUND_OFFSET))(this);
		}

		::System::Boolean get_added()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ADDED_OFFSET))(this);
		}

		::System::Boolean get_remote()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_REMOTE_OFFSET))(this);
		}

		::System::Boolean get_native()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_NATIVE_OFFSET))(this);
		}

		::System::Boolean get_updateBeforeRender()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_UPDATEBEFORERENDER_OFFSET))(this);
		}

		::System::Int32 get_deviceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DEVICEID_OFFSET))(this);
		}

		::System::Double get_lastUpdateTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_LASTUPDATETIME_OFFSET))(this);
		}

		::System::Boolean get_wasUpdatedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_WASUPDATEDTHISFRAME_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*> get_allControls()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputControl*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ALLCONTROLS_OFFSET))(this);
		}

		::System::Type* get_valueType()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_VALUETYPE_OFFSET))(this);
		}

		::System::Int32 get_valueSizeInBytes()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_VALUESIZEINBYTES_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_all()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_ALL_OFFSET))();
		}

		::System::Object* ReadValueFromBufferAsObject(::System::Void* buffer, ::System::Int32 bufferSize)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMBUFFERASOBJECT_OFFSET))(this, buffer, bufferSize);
		}

		::System::Object* ReadValueFromStateAsObject(::System::Void* statePtr)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMSTATEASOBJECT_OFFSET))(this, statePtr);
		}

		::System::Void ReadValueFromStateIntoBuffer(::System::Void* statePtr, ::System::Void* bufferPtr, ::System::Int32 bufferSize)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*, ::System::Void*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_READVALUEFROMSTATEINTOBUFFER_OFFSET))(this, statePtr, bufferPtr, bufferSize);
		}

		::System::Boolean CompareValue(::System::Void* firstStatePtr, ::System::Void* secondStatePtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_COMPAREVALUE_OFFSET))(this, firstStatePtr, secondStatePtr);
		}

		::System::Void NotifyConfigurationChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYCONFIGURATIONCHANGED_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONADDED_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONREMOVED_OFFSET))(this);
		}

		::System::Void OnConfigurationChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ONCONFIGURATIONCHANGED_OFFSET))(this);
		}

		::System::Int64 ExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand* commandPtr)
		{
			return ((::System::Int64(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTECOMMAND_OFFSET))(this, commandPtr);
		}

		::System::Boolean QueryEnabledStateFromRuntime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_QUERYENABLEDSTATEFROMRUNTIME_OFFSET))(this);
		}

		::System::Boolean get_disabledInFrontend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDINFRONTEND_OFFSET))(this);
		}

		::System::Void set_disabledInFrontend(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDINFRONTEND_OFFSET))(this, value);
		}

		::System::Boolean get_disabledInRuntime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDINRUNTIME_OFFSET))(this);
		}

		::System::Void set_disabledInRuntime(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDINRUNTIME_OFFSET))(this, value);
		}

		::System::Boolean get_disabledWhileInBackground()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_DISABLEDWHILEINBACKGROUND_OFFSET))(this);
		}

		::System::Void set_disabledWhileInBackground(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_DISABLEDWHILEINBACKGROUND_OFFSET))(this, value);
		}

		static ::System::UInt32 EncodeStateOffsetToControlMapEntry(::System::UInt32 controlIndex, ::System::UInt32 stateOffsetInBits, ::System::UInt32 stateSizeInBits)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ENCODESTATEOFFSETTOCONTROLMAPENTRY_OFFSET))(controlIndex, stateOffsetInBits, stateSizeInBits);
		}

		static ::System::Void DecodeStateOffsetToControlMapEntry(::System::UInt32 entry, ::System::UInt32& controlIndex, ::System::UInt32& stateOffset, ::System::UInt32& stateSize)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::UInt32&, ::System::UInt32&, ::System::UInt32&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_DECODESTATEOFFSETTOCONTROLMAPENTRY_OFFSET))(entry, controlIndex, stateOffset, stateSize);
		}

		::System::Boolean get_hasControlsWithDefaultState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASCONTROLSWITHDEFAULTSTATE_OFFSET))(this);
		}

		::System::Void set_hasControlsWithDefaultState(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASCONTROLSWITHDEFAULTSTATE_OFFSET))(this, value);
		}

		::System::Boolean get_hasDontResetControls()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASDONTRESETCONTROLS_OFFSET))(this);
		}

		::System::Void set_hasDontResetControls(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASDONTRESETCONTROLS_OFFSET))(this, value);
		}

		::System::Boolean get_hasStateCallbacks()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASSTATECALLBACKS_OFFSET))(this);
		}

		::System::Void set_hasStateCallbacks(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASSTATECALLBACKS_OFFSET))(this, value);
		}

		::System::Boolean get_hasEventMerger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASEVENTMERGER_OFFSET))(this);
		}

		::System::Void set_hasEventMerger(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASEVENTMERGER_OFFSET))(this, value);
		}

		::System::Boolean get_hasEventPreProcessor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_GET_HASEVENTPREPROCESSOR_OFFSET))(this);
		}

		::System::Void set_hasEventPreProcessor(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_SET_HASEVENTPREPROCESSOR_OFFSET))(this, value);
		}

		::System::Void AddDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_ADDDEVICEUSAGE_OFFSET))(this, usage);
		}

		::System::Void RemoveDeviceUsage(::UnityEngine::InputSystem::Utilities::InternedString usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REMOVEDEVICEUSAGE_OFFSET))(this, usage);
		}

		::System::Void ClearDeviceUsages()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_CLEARDEVICEUSAGES_OFFSET))(this);
		}

		::System::Boolean RequestSync()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REQUESTSYNC_OFFSET))(this);
		}

		::System::Boolean RequestReset()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_REQUESTRESET_OFFSET))(this);
		}

		::System::Boolean ExecuteEnableCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTEENABLECOMMAND_OFFSET))(this);
		}

		::System::Boolean ExecuteDisableCommand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_EXECUTEDISABLECOMMAND_OFFSET))(this);
		}

		::System::Void NotifyAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYADDED_OFFSET))(this);
		}

		::System::Void NotifyRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTDEVICE_NOTIFYREMOVED_OFFSET))(this);
		}
	};
}
