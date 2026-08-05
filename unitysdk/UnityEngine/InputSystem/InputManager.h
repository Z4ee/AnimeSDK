#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlLayoutChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlList_1.h"
#include "unitysdk/UnityEngine/InputSystem/InputDeviceChange.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice_DeviceFlags.h"
#include "unitysdk/UnityEngine/InputSystem/InputManager_AvailableDevice.h"
#include "unitysdk/UnityEngine/InputSystem/InputManager_DeviceDisableScope.h"
#include "unitysdk/UnityEngine/InputSystem/InputManager_StateChangeMonitorTimeout.h"
#include "unitysdk/UnityEngine/InputSystem/InputManager_StateChangeMonitorsForDevice.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_Collection.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceDescription.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceMatcher.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputDeviceCommand.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventBuffer.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventStream.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputMetrics.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateBlock.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateBuffers.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateBuffers_DoubleBuffers.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/TypeTable.h"

namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem { class InputSettings; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::Layouts { class InputDeviceFindControlLayoutDelegate; }
namespace UnityEngine::InputSystem::LowLevel { class IInputRuntime; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceCommandDelegate; }
namespace UnityEngine::InputSystem::LowLevel { class InputDeviceExecuteCommandDelegate; }

#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDAVAILABLEDEVICESMATCHINGDESCRIPTION_OFFSET UNITYSDK_OFFSET(0x1D7A93E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDAVAILABLEDEVICESTHATARENOWRECOGNIZED_OFFSET UNITYSDK_OFFSET(0x1D7A6CA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D7AB720)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_1_OFFSET UNITYSDK_OFFSET(0x1D7ABC80)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_2_OFFSET UNITYSDK_OFFSET(0x1D7AAC20)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_3_OFFSET UNITYSDK_OFFSET(0x1D7AA550)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_4_OFFSET UNITYSDK_OFFSET(0x1D7ACA00)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_5_OFFSET UNITYSDK_OFFSET(0x1D7ACA50)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_6_OFFSET UNITYSDK_OFFSET(0x1D7ACCF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7ABB80)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDSTATECHANGEMONITORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D79CC00)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDSTATECHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x1D79A720)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7A7390)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D79A9E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1D7A6A70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x1D7A6BB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1D7A6B10)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1D7A7270)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONFINDCONTROLLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7A6C50)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x1D7A71D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D7A7430)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_APPLYSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D7A6420)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ASSIGNUNIQUEDEVICEID_OFFSET UNITYSDK_OFFSET(0x1D7ABF30)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_DESTROY_OFFSET UNITYSDK_OFFSET(0x1D7AFBE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_DOESLAYOUTEXIST_OFFSET UNITYSDK_OFFSET(0x1D7A7A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ENABLEORDISABLEDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7AC5B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FINDORREGISTERDEVICELAYOUTFORTYPE_OFFSET UNITYSDK_OFFSET(0x1D7AB1F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FIRESTATECHANGENOTIFICATIONS_OFFSET UNITYSDK_OFFSET(0x1D7B32B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FLIPBUFFERSFORDEVICEIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1D7B3630)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FLUSHDISCONNECTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1D7ACF10)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7ADC90)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETUNSUPPORTEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1D7ADD70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_COMPOSITES_OFFSET UNITYSDK_OFFSET(0x1D7A6110)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_DEFAULTUPDATETYPE_OFFSET UNITYSDK_OFFSET(0x1D7A6910)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_DEVICES_OFFSET UNITYSDK_OFFSET(0x1D7A60D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMEHASFOCUS_OFFSET UNITYSDK_OFFSET(0x1D7A74F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMEISPLAYING_OFFSET UNITYSDK_OFFSET(0x1D7A74E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMESHOULDGETINPUTREGARDLESSOFFOCUS_OFFSET UNITYSDK_OFFSET(0x1D7A7500)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_INTERACTIONS_OFFSET UNITYSDK_OFFSET(0x1D7A6100)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_ISPROCESSINGEVENTS_OFFSET UNITYSDK_OFFSET(0x1D7A74D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_METRICS_OFFSET UNITYSDK_OFFSET(0x1D7A6120)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1D7A6960)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_PROCESSORS_OFFSET UNITYSDK_OFFSET(0x1D7A60F0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1D7A6270)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x1D7A6720)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDATA_OFFSET UNITYSDK_OFFSET(0x1D7AE200)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDEFAULTSTATE_OFFSET UNITYSDK_OFFSET(0x1D7B0500)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDEVICESTATE_OFFSET UNITYSDK_OFFSET(0x1D7AC140)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1D7AE1C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLBEFOREUPDATEHOOKIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1D7A7310)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLGLOBALS_OFFSET UNITYSDK_OFFSET(0x1D7AF9E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLRUNTIME_OFFSET UNITYSDK_OFFSET(0x1D7AF3E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INVOKEAFTERUPDATECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D7B2DD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISCONTROLORCHILDUSINGLAYOUTRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1D7A8E60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISCONTROLUSINGLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D7A8D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISDEVICELAYOUTMARKEDASSUPPORTEDINSETTINGS_OFFSET UNITYSDK_OFFSET(0x1D7AB270)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_LISTCONTROLLAYOUTS_OFFSET UNITYSDK_OFFSET(0x1D7AB3D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_MAKEDEVICENAMEUNIQUE_OFFSET UNITYSDK_OFFSET(0x1D7ABDA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_NOTIFYUSAGECHANGED_OFFSET UNITYSDK_OFFSET(0x1D7AB690)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7B0D50)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONFOCUSCHANGED_OFFSET UNITYSDK_OFFSET(0x1D7B1040)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONNATIVEDEVICEDISCOVERED_OFFSET UNITYSDK_OFFSET(0x1D7B06E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7B1550)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PERFORMLAYOUTPOSTREGISTRATION_OFFSET UNITYSDK_OFFSET(0x1D7A7BF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PROCESSSTATECHANGEMONITORS_OFFSET UNITYSDK_OFFSET(0x1D7B2EC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PROCESSSTATECHANGEMONITORTIMEOUTS_OFFSET UNITYSDK_OFFSET(0x1D7B2AF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_1_OFFSET UNITYSDK_OFFSET(0x1D7AE030)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x1D7ADFA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REALLOCATESTATEBUFFERS_OFFSET UNITYSDK_OFFSET(0x1D7A6750)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICESUSINGLAYOUTWITHINFERIORMATCH_OFFSET UNITYSDK_OFFSET(0x1D7A9110)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICESUSINGLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D7A8A80)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7A8F20)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTBUILDER_OFFSET UNITYSDK_OFFSET(0x1D7A88C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTMATCHER_1_OFFSET UNITYSDK_OFFSET(0x1D7A9970)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTMATCHER_OFFSET UNITYSDK_OFFSET(0x1D7A87A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUT_1_OFFSET UNITYSDK_OFFSET(0x1D7A8330)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D7A7530)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVECONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D7AADE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVEDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D7AB980)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVEDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7A9E60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITORS_OFFSET UNITYSDK_OFFSET(0x1D7ACDE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1D79CC50)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x1D79A8B0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONAFTERUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7A73E0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1D79AB70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICECHANGE_OFFSET UNITYSDK_OFFSET(0x1D7A6AC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICECOMMAND_OFFSET UNITYSDK_OFFSET(0x1D7A6C00)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1D7A6B60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1D7A72C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONFINDCONTROLLAYOUTFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7A7180)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONLAYOUTCHANGE_OFFSET UNITYSDK_OFFSET(0x1D7A7220)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONSETTINGSCHANGE_OFFSET UNITYSDK_OFFSET(0x1D7A7480)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESETCONTROLPATHSRECURSIVE_OFFSET UNITYSDK_OFFSET(0x1D7B0480)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESETDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7ACF50)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESTOREDEVICESAFTERDOMAINRELOADIFNECESSARY_OFFSET UNITYSDK_OFFSET(0x1D7B0B60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SETDEVICEUSAGE_OFFSET UNITYSDK_OFFSET(0x1D7AB440)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_POLLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1D7A6970)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1D7A6280)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_UPDATEMASK_OFFSET UNITYSDK_OFFSET(0x1D7A6730)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SHOULDRUNDEVICEINBACKGROUND_OFFSET UNITYSDK_OFFSET(0x1D7AC500)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SHOULDRUNUPDATE_OFFSET UNITYSDK_OFFSET(0x1D7B1530)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYFINDMATCHINGCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D7A9AC0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICEBYID_OFFSET UNITYSDK_OFFSET(0x1D7AAB70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICE_1_OFFSET UNITYSDK_OFFSET(0x1D7ADD20)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7ADAE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYLOADCONTROLLAYOUT_1_OFFSET UNITYSDK_OFFSET(0x1D7AB1C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYLOADCONTROLLAYOUT_OFFSET UNITYSDK_OFFSET(0x1D7AB000)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYMATCHDISCONNECTEDDEVICE_OFFSET UNITYSDK_OFFSET(0x1D7B0B70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UNINSTALLGLOBALS_OFFSET UNITYSDK_OFFSET(0x1D7AFF70)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATESTATE_1_OFFSET UNITYSDK_OFFSET(0x1D7AD8A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATESTATE_OFFSET UNITYSDK_OFFSET(0x1D7B2E30)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATE_1_OFFSET UNITYSDK_OFFSET(0x1D7AE150)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1D7AE0C0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_WARNABOUTDEVICESFAILINGTORECREATEAFTERDOMAINRELOAD_OFFSET UNITYSDK_OFFSET(0x1D7B0D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_WRITESTATECHANGE_OFFSET UNITYSDK_OFFSET(0x1D7B36A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B3720)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__TRYFINDMATCHINGCONTROLLAYOUT_B__72_0_OFFSET UNITYSDK_OFFSET(0x1D7B3730)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager_TypeDefinitionIndex = 32302;

	class InputManager : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::Layouts::InputControlLayout_Collection m_Layouts; // 0x10
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> m_AfterUpdateListeners; // 0x50
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputManager_StateChangeMonitorTimeout> m_StateChangeMonitorTimeouts; // 0xA0
		::Il2CppArray<::UnityEngine::InputSystem::InputManager_StateChangeMonitorsForDevice>* m_StateChangeMonitors; // 0xD8
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> m_BeforeUpdateListeners; // 0xE0
		::UnityEngine::InputSystem::LowLevel::InputDeviceExecuteCommandDelegate* m_DeviceFindExecuteCommandDelegate; // 0x130
		::Il2CppArray<::UnityEngine::InputSystem::InputManager_AvailableDevice>* m_AvailableDevices; // 0x138
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>*> m_LayoutChangeListeners; // 0x140
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*> m_DeviceChangeListeners; // 0x190
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> m_DeviceStateChangeListeners; // 0x1E0
		::UnityEngine::InputSystem::Utilities::TypeTable m_Interactions; // 0x230
		::UnityEngine::InputSystem::InputSettings* m_Settings; // 0x238
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action*> m_SettingsChangedListeners; // 0x240
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*> m_DeviceFindLayoutCallbacks; // 0x290
		::UnityEngine::InputSystem::LowLevel::IInputRuntime* m_Runtime; // 0x2E0
		::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* m_DisconnectedDevices; // 0x2E8
		::UnityEngine::InputSystem::Utilities::TypeTable m_Processors; // 0x2F0
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*> m_DeviceCommandCallbacks; // 0x2F8
		::UnityEngine::InputSystem::Utilities::TypeTable m_Composites; // 0x348
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> m_EventListeners; // 0x350
		::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* m_Devices; // 0x3A0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::InputSystem::InputDevice*>* m_DevicesById; // 0x3A8
		::System::Int32 m_DevicesCount; // 0x3B0
		::System::Boolean m_HasFocus; // 0x3B4
		::System::Boolean m_HaveDevicesWithStateCallbackReceivers; // 0x3B5
		::System::Boolean m_NativeBeforeUpdateHooked; // 0x3B6
		::UnityEngine::InputSystem::LowLevel::InputMetrics m_Metrics; // 0x3B8
		::UnityEngine::InputSystem::LowLevel::InputUpdateType m_CurrentUpdate; // 0x3F0
		::System::Int32 m_LayoutRegistrationVersion; // 0x3F4
		::UnityEngine::InputSystem::LowLevel::InputStateBuffers m_StateBuffers; // 0x3F8
		::UnityEngine::InputSystem::LowLevel::InputEventStream m_InputEventStream; // 0x428
		::System::Int32 m_AvailableDeviceCount; // 0x4A0
		::UnityEngine::InputSystem::LowLevel::InputUpdateType m_UpdateMask; // 0x4A4
		::System::Int32 m_DeviceFindExecuteCommandDeviceId; // 0x4A8
		::System::Int32 m_DisconnectedDevicesCount; // 0x4AC
		::System::Single m_PollingFrequency; // 0x4B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> get_devices()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_DEVICES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::TypeTable get_processors()
		{
			return ((::UnityEngine::InputSystem::Utilities::TypeTable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_PROCESSORS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::TypeTable get_interactions()
		{
			return ((::UnityEngine::InputSystem::Utilities::TypeTable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_INTERACTIONS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::TypeTable get_composites()
		{
			return ((::UnityEngine::InputSystem::Utilities::TypeTable(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_COMPOSITES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputMetrics get_metrics()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputMetrics(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_METRICS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputSettings* get_settings()
		{
			return ((::UnityEngine::InputSystem::InputSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_SETTINGS_OFFSET))(this);
		}

		::System::Void set_settings(::UnityEngine::InputSystem::InputSettings* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_SETTINGS_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputUpdateType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_UPDATEMASK_OFFSET))(this);
		}

		::System::Void set_updateMask(::UnityEngine::InputSystem::LowLevel::InputUpdateType value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_UPDATEMASK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::LowLevel::InputUpdateType get_defaultUpdateType()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputUpdateType(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_DEFAULTUPDATETYPE_OFFSET))(this);
		}

		::System::Single get_pollingFrequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_POLLINGFREQUENCY_OFFSET))(this);
		}

		::System::Void set_pollingFrequency(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SET_POLLINGFREQUENCY_OFFSET))(this, value);
		}

		::System::Void add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICECHANGE_OFFSET))(this, value);
		}

		::System::Void remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICECHANGE_OFFSET))(this, value);
		}

		::System::Void add_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICESTATECHANGE_OFFSET))(this, value);
		}

		::System::Void remove_onDeviceStateChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICESTATECHANGE_OFFSET))(this, value);
		}

		::System::Void add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONDEVICECOMMAND_OFFSET))(this, value);
		}

		::System::Void remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONDEVICECOMMAND_OFFSET))(this, value);
		}

		::System::Void add_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONFINDCONTROLLAYOUTFORDEVICE_OFFSET))(this, value);
		}

		::System::Void remove_onFindControlLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONFINDCONTROLLAYOUTFORDEVICE_OFFSET))(this, value);
		}

		::System::Void add_onLayoutChange(::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONLAYOUTCHANGE_OFFSET))(this, value);
		}

		::System::Void remove_onLayoutChange(::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::System::String*, ::UnityEngine::InputSystem::InputControlLayoutChange>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONLAYOUTCHANGE_OFFSET))(this, value);
		}

		::System::Void add_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONEVENT_OFFSET))(this, value);
		}

		::System::Void remove_onEvent(::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONEVENT_OFFSET))(this, value);
		}

		::System::Void add_onBeforeUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONBEFOREUPDATE_OFFSET))(this, value);
		}

		::System::Void remove_onBeforeUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONBEFOREUPDATE_OFFSET))(this, value);
		}

		::System::Void add_onAfterUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONAFTERUPDATE_OFFSET))(this, value);
		}

		::System::Void remove_onAfterUpdate(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONAFTERUPDATE_OFFSET))(this, value);
		}

		::System::Void add_onSettingsChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADD_ONSETTINGSCHANGE_OFFSET))(this, value);
		}

		::System::Void remove_onSettingsChange(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVE_ONSETTINGSCHANGE_OFFSET))(this, value);
		}

		::System::Boolean get_isProcessingEvents()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_ISPROCESSINGEVENTS_OFFSET))(this);
		}

		::System::Boolean get_gameIsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMEISPLAYING_OFFSET))(this);
		}

		::System::Boolean get_gameHasFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMEHASFOCUS_OFFSET))(this);
		}

		::System::Boolean get_gameShouldGetInputRegardlessOfFocus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GET_GAMESHOULDGETINPUTREGARDLESSOFFOCUS_OFFSET))(this);
		}

		::System::Void RegisterControlLayout(::System::String* name, ::System::Type* type)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUT_OFFSET))(this, name, type);
		}

		::System::Void RegisterControlLayout_1(::System::String* json, ::System::String* name, ::System::Boolean isOverride)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUT_1_OFFSET))(this, json, name, isOverride);
		}

		::System::Void RegisterControlLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>* method, ::System::String* name, ::System::String* baseLayout)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTBUILDER_OFFSET))(this, method, name, baseLayout);
		}

		::System::Void PerformLayoutPostRegistration(::UnityEngine::InputSystem::Utilities::InternedString layoutName, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString> baseLayouts, ::System::Boolean isReplacement, ::System::Boolean isKnownToBeDeviceLayout, ::System::Boolean isOverride)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::InternedString>, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PERFORMLAYOUTPOSTREGISTRATION_OFFSET))(this, layoutName, baseLayouts, isReplacement, isKnownToBeDeviceLayout, isOverride);
		}

		::System::Void RecreateDevicesUsingLayout(::UnityEngine::InputSystem::Utilities::InternedString layout, ::System::Boolean isKnownToBeDeviceLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICESUSINGLAYOUT_OFFSET))(this, layout, isKnownToBeDeviceLayout);
		}

		::System::Boolean IsControlOrChildUsingLayoutRecursive(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Utilities::InternedString layout)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISCONTROLORCHILDUSINGLAYOUTRECURSIVE_OFFSET))(this, control, layout);
		}

		::System::Boolean IsControlUsingLayout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::Utilities::InternedString layout)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISCONTROLUSINGLAYOUT_OFFSET))(this, control, layout);
		}

		::System::Void RegisterControlLayoutMatcher(::System::String* layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTMATCHER_OFFSET))(this, layoutName, matcher);
		}

		::System::Void RegisterControlLayoutMatcher_1(::System::Type* type, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REGISTERCONTROLLAYOUTMATCHER_1_OFFSET))(this, type, matcher);
		}

		::System::Void RecreateDevicesUsingLayoutWithInferiorMatch(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICESUSINGLAYOUTWITHINFERIORMATCH_OFFSET))(this, deviceMatcher);
		}

		::System::Void RecreateDevice(::UnityEngine::InputSystem::InputDevice* oldDevice, ::UnityEngine::InputSystem::Utilities::InternedString newLayout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RECREATEDEVICE_OFFSET))(this, oldDevice, newLayout);
		}

		::System::Void AddAvailableDevicesMatchingDescription(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher, ::UnityEngine::InputSystem::Utilities::InternedString layout)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDAVAILABLEDEVICESMATCHINGDESCRIPTION_OFFSET))(this, matcher, layout);
		}

		::System::Void RemoveControlLayout(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVECONTROLLAYOUT_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout(::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYLOADCONTROLLAYOUT_OFFSET))(this, type);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout* TryLoadControlLayout_1(::UnityEngine::InputSystem::Utilities::InternedString name)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYLOADCONTROLLAYOUT_1_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingControlLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription& deviceDescription, ::System::Int32 deviceId)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYFINDMATCHINGCONTROLLAYOUT_OFFSET))(this, deviceDescription, deviceId);
		}

		::UnityEngine::InputSystem::Utilities::InternedString FindOrRegisterDeviceLayoutForType(::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FINDORREGISTERDEVICELAYOUTFORTYPE_OFFSET))(this, type);
		}

		::System::Boolean IsDeviceLayoutMarkedAsSupportedInSettings(::UnityEngine::InputSystem::Utilities::InternedString layoutName)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ISDEVICELAYOUTMARKEDASSUPPORTEDINSETTINGS_OFFSET))(this, layoutName);
		}

		::System::Boolean DoesLayoutExist(::UnityEngine::InputSystem::Utilities::InternedString name)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_DOESLAYOUTEXIST_OFFSET))(this, name);
		}

		::System::Collections::Generic::IEnumerable_1<::System::String*>* ListControlLayouts(::System::String* basedOn)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_LISTCONTROLLAYOUTS_OFFSET))(this, basedOn);
		}

		::System::Void SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SETDEVICEUSAGE_OFFSET))(this, device, usage);
		}

		::System::Void AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICEUSAGE_OFFSET))(this, device, usage);
		}

		::System::Void RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVEDEVICEUSAGE_OFFSET))(this, device, usage);
		}

		::System::Void NotifyUsageChanged(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_NOTIFYUSAGECHANGED_OFFSET))(this, device);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice(::System::Type* type, ::System::String* name)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::System::Type*, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_OFFSET))(this, type, name);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice_1(::System::String* layout, ::System::String* name, ::UnityEngine::InputSystem::Utilities::InternedString variants)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::System::String*, ::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_1_OFFSET))(this, layout, name, variants);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice_2(::UnityEngine::InputSystem::Utilities::InternedString layout, ::System::Int32 deviceId, ::System::String* deviceName, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription, ::UnityEngine::InputSystem::InputDevice_DeviceFlags deviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString variants)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString, ::System::Int32, ::System::String*, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::InputDevice_DeviceFlags, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_2_OFFSET))(this, layout, deviceId, deviceName, deviceDescription, deviceFlags, variants);
		}

		::System::Void AddDevice_3(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_3_OFFSET))(this, device);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice_4(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_4_OFFSET))(this, description);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice_5(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, ::System::Boolean throwIfNoLayoutFound, ::System::String* deviceName, ::System::Int32 deviceId, ::UnityEngine::InputSystem::InputDevice_DeviceFlags deviceFlags)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::System::Boolean, ::System::String*, ::System::Int32, ::UnityEngine::InputSystem::InputDevice_DeviceFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_5_OFFSET))(this, description, throwIfNoLayoutFound, deviceName, deviceId, deviceFlags);
		}

		::UnityEngine::InputSystem::InputDevice* AddDevice_6(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description, ::UnityEngine::InputSystem::Utilities::InternedString layout, ::System::String* deviceName, ::System::Int32 deviceId, ::UnityEngine::InputSystem::InputDevice_DeviceFlags deviceFlags)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*, ::System::Int32, ::UnityEngine::InputSystem::InputDevice_DeviceFlags))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDDEVICE_6_OFFSET))(this, description, layout, deviceName, deviceId, deviceFlags);
		}

		::System::Void RemoveDevice(::UnityEngine::InputSystem::InputDevice* device, ::System::Boolean keepOnListOfAvailableDevices)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVEDEVICE_OFFSET))(this, device, keepOnListOfAvailableDevices);
		}

		::System::Void FlushDisconnectedDevices()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FLUSHDISCONNECTEDDEVICES_OFFSET))(this);
		}

		::System::Void ResetDevice(::UnityEngine::InputSystem::InputDevice* device, ::System::Boolean alsoResetDontResetControls, ::System::Nullable_1<::System::Boolean> issueResetCommand)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::System::Nullable_1<::System::Boolean>))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESETDEVICE_OFFSET))(this, device, alsoResetDontResetControls, issueResetCommand);
		}

		::UnityEngine::InputSystem::InputDevice* TryGetDevice(::System::String* nameOrLayout)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICE_OFFSET))(this, nameOrLayout);
		}

		::UnityEngine::InputSystem::InputDevice* GetDevice(::System::String* nameOrLayout)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETDEVICE_OFFSET))(this, nameOrLayout);
		}

		::UnityEngine::InputSystem::InputDevice* TryGetDevice_1(::System::Type* layoutType)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICE_1_OFFSET))(this, layoutType);
		}

		::UnityEngine::InputSystem::InputDevice* TryGetDeviceById(::System::Int32 id)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYGETDEVICEBYID_OFFSET))(this, id);
		}

		::System::Int32 GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* descriptions)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_GETUNSUPPORTEDDEVICES_OFFSET))(this, descriptions);
		}

		::System::Void EnableOrDisableDevice(::UnityEngine::InputSystem::InputDevice* device, ::System::Boolean enable, ::UnityEngine::InputSystem::InputManager_DeviceDisableScope scope)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean, ::UnityEngine::InputSystem::InputManager_DeviceDisableScope))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ENABLEORDISABLEDEVICE_OFFSET))(this, device, enable, scope);
		}

		::System::Void AddStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDSTATECHANGEMONITOR_OFFSET))(this, control, monitor, monitorIndex);
		}

		::System::Void RemoveStateChangeMonitors(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITORS_OFFSET))(this, device);
		}

		::System::Void RemoveStateChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITOR_OFFSET))(this, control, monitor, monitorIndex);
		}

		::System::Void AddStateChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Double time, ::System::Int64 monitorIndex, ::System::Int32 timerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Double, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDSTATECHANGEMONITORTIMEOUT_OFFSET))(this, control, monitor, time, monitorIndex, timerIndex);
		}

		::System::Void RemoveStateChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex, ::System::Int32 timerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REMOVESTATECHANGEMONITORTIMEOUT_OFFSET))(this, monitor, monitorIndex, timerIndex);
		}

		::System::Void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Void QueueEvent_1(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_QUEUEEVENT_1_OFFSET))(this, ptr);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATE_OFFSET))(this);
		}

		::System::Void Update_1(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATE_1_OFFSET))(this, updateType);
		}

		::System::Void Initialize(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, ::UnityEngine::InputSystem::InputSettings* settings)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::UnityEngine::InputSystem::InputSettings*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZE_OFFSET))(this, runtime, settings);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_DESTROY_OFFSET))(this);
		}

		::System::Void InitializeData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDATA_OFFSET))(this);
		}

		::System::Void InstallRuntime(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::IInputRuntime*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLRUNTIME_OFFSET))(this, runtime);
		}

		::System::Void InstallGlobals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLGLOBALS_OFFSET))(this);
		}

		::System::Void UninstallGlobals()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UNINSTALLGLOBALS_OFFSET))(this);
		}

		::System::Void MakeDeviceNameUnique(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_MAKEDEVICENAMEUNIQUE_OFFSET))(this, device);
		}

		static ::System::Void ResetControlPathsRecursive(::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESETCONTROLPATHSRECURSIVE_OFFSET))(control);
		}

		::System::Void AssignUniqueDeviceId(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ASSIGNUNIQUEDEVICEID_OFFSET))(this, device);
		}

		::System::Void ReallocateStateBuffers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_REALLOCATESTATEBUFFERS_OFFSET))(this);
		}

		::System::Void InitializeDefaultState(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDEFAULTSTATE_OFFSET))(this, device);
		}

		::System::Void InitializeDeviceState(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INITIALIZEDEVICESTATE_OFFSET))(this, device);
		}

		::System::Void OnNativeDeviceDiscovered(::System::Int32 deviceId, ::System::String* deviceDescriptor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONNATIVEDEVICEDISCOVERED_OFFSET))(this, deviceId, deviceDescriptor);
		}

		::UnityEngine::InputSystem::InputDevice* TryMatchDisconnectedDevice(::System::String* deviceDescriptor)
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_TRYMATCHDISCONNECTEDDEVICE_OFFSET))(this, deviceDescriptor);
		}

		::System::Void InstallBeforeUpdateHookIfNecessary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INSTALLBEFOREUPDATEHOOKIFNECESSARY_OFFSET))(this);
		}

		::System::Void RestoreDevicesAfterDomainReloadIfNecessary()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_RESTOREDEVICESAFTERDOMAINRELOADIFNECESSARY_OFFSET))(this);
		}

		::System::Void WarnAboutDevicesFailingToRecreateAfterDomainReload()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_WARNABOUTDEVICESFAILINGTORECREATEAFTERDOMAINRELOAD_OFFSET))(this);
		}

		::System::Void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONBEFOREUPDATE_OFFSET))(this, updateType);
		}

		::System::Void ApplySettings()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_APPLYSETTINGS_OFFSET))(this);
		}

		::System::Void AddAvailableDevicesThatAreNowRecognized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ADDAVAILABLEDEVICESTHATARENOWRECOGNIZED_OFFSET))(this);
		}

		::System::Boolean ShouldRunDeviceInBackground(::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SHOULDRUNDEVICEINBACKGROUND_OFFSET))(this, device);
		}

		::System::Void OnFocusChanged(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONFOCUSCHANGED_OFFSET))(this, focus);
		}

		::System::Boolean ShouldRunUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_SHOULDRUNUPDATE_OFFSET))(this, updateType);
		}

		::System::Void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& eventBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_ONUPDATE_OFFSET))(this, updateType, eventBuffer);
		}

		::System::Void InvokeAfterUpdateCallback(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_INVOKEAFTERUPDATECALLBACK_OFFSET))(this, updateType);
		}

		::System::Boolean ProcessStateChangeMonitors(::System::Int32 deviceIndex, ::System::Void* newStateFromEvent, ::System::Void* oldStateOfDevice, ::System::UInt32 newStateSizeInBytes, ::System::UInt32 newStateOffsetInBytes)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Void*, ::System::Void*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PROCESSSTATECHANGEMONITORS_OFFSET))(this, deviceIndex, newStateFromEvent, oldStateOfDevice, newStateSizeInBytes, newStateOffsetInBytes);
		}

		::System::Void FireStateChangeNotifications(::System::Int32 deviceIndex, ::System::Double internalTime, ::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FIRESTATECHANGENOTIFICATIONS_OFFSET))(this, deviceIndex, internalTime, eventPtr);
		}

		::System::Void ProcessStateChangeMonitorTimeouts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_PROCESSSTATECHANGEMONITORTIMEOUTS_OFFSET))(this);
		}

		::System::Boolean UpdateState(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEvent*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATESTATE_OFFSET))(this, device, eventPtr, updateType);
		}

		::System::Boolean UpdateState_1(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType, ::System::Void* statePtr, ::System::UInt32 stateOffsetInDevice, ::System::UInt32 stateSize, ::System::Double internalTime, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType, ::System::Void*, ::System::UInt32, ::System::UInt32, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_UPDATESTATE_1_OFFSET))(this, device, updateType, statePtr, stateOffsetInDevice, stateSize, internalTime, eventPtr);
		}

		static ::System::Void WriteStateChange(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers buffers, ::System::Int32 deviceIndex, ::UnityEngine::InputSystem::LowLevel::InputStateBlock& deviceStateBlock, ::System::UInt32 stateOffsetInDevice, ::System::Void* statePtr, ::System::UInt32 stateSizeInBytes, ::System::Boolean flippedBuffers)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputStateBlock&, ::System::UInt32, ::System::Void*, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_WRITESTATECHANGE_OFFSET))(buffers, deviceIndex, deviceStateBlock, stateOffsetInDevice, statePtr, stateSizeInBytes, flippedBuffers);
		}

		::System::Boolean FlipBuffersForDeviceIfNecessary(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER_FLIPBUFFERSFORDEVICEIFNECESSARY_OFFSET))(this, device, updateType);
		}

		::System::Int64 _TryFindMatchingControlLayout_b__72_0(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand& commandRef)
		{
			return ((::System::Int64(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER__TRYFINDMATCHINGCONTROLLAYOUT_B__72_0_OFFSET))(this, commandRef);
		}
	};
}
