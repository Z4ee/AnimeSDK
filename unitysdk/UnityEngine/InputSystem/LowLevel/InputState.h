#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Action_4; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class IInputStateChangeMonitor; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E01F1A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITOR_1_OFFSET UNITYSDK_OFFSET(0x1E01F000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x1E01EEA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADD_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x1E01E8B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_CHANGE_OFFSET UNITYSDK_OFFSET(0x1E01EA10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0x1E01E840)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_CURRENTUPDATETYPE_OFFSET UNITYSDK_OFFSET(0x1E01E820)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_UPDATECOUNT_OFFSET UNITYSDK_OFFSET(0x1E01E830)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ISINTEGERFORMAT_OFFSET UNITYSDK_OFFSET(0x1E01EC90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVECHANGEMONITORTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1E01F2B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVECHANGEMONITOR_OFFSET UNITYSDK_OFFSET(0x1E01F0B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVE_ONCHANGE_OFFSET UNITYSDK_OFFSET(0x1E01E960)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputState_TypeDefinitionIndex = 31944;

	class InputState : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::LowLevel::InputUpdateType get_currentUpdateType()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputUpdateType(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_CURRENTUPDATETYPE_OFFSET))();
		}

		static ::System::UInt32 get_updateCount()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_UPDATECOUNT_OFFSET))();
		}

		static ::System::Double get_currentTime()
		{
			return ((::System::Double(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_GET_CURRENTTIME_OFFSET))();
		}

		static ::System::Void add_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADD_ONCHANGE_OFFSET))(value);
		}

		static ::System::Void remove_onChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value)
		{
			return ((::System::Void(*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVE_ONCHANGE_OFFSET))(value);
		}

		static ::System::Void Change(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_CHANGE_OFFSET))(device, eventPtr, updateType);
		}

		static ::System::Boolean IsIntegerFormat(::UnityEngine::InputSystem::Utilities::FourCC format)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ISINTEGERFORMAT_OFFSET))(format);
		}

		static ::System::Void AddChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITOR_OFFSET))(control, monitor, monitorIndex);
		}

		static ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* AddChangeMonitor_1(::UnityEngine::InputSystem::InputControl* control, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Int64>* valueChangeCallback, ::System::Int32 monitorIndex, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32>* timerExpiredCallback)
		{
			return ((::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*(*)(::UnityEngine::InputSystem::InputControl*, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::System::Int64>*, ::System::Int32, ::System::Action_4<::UnityEngine::InputSystem::InputControl*, ::System::Double, ::System::Int64, ::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITOR_1_OFFSET))(control, valueChangeCallback, monitorIndex, timerExpiredCallback);
		}

		static ::System::Void RemoveChangeMonitor(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVECHANGEMONITOR_OFFSET))(control, monitor, monitorIndex);
		}

		static ::System::Void AddChangeMonitorTimeout(::UnityEngine::InputSystem::InputControl* control, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Double time, ::System::Int64 monitorIndex, ::System::Int32 timerIndex)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::InputControl*, ::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Double, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_ADDCHANGEMONITORTIMEOUT_OFFSET))(control, monitor, time, monitorIndex, timerIndex);
		}

		static ::System::Void RemoveChangeMonitorTimeout(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor* monitor, ::System::Int64 monitorIndex, ::System::Int32 timerIndex)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor*, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATE_REMOVECHANGEMONITORTIMEOUT_OFFSET))(monitor, monitorIndex, timerIndex);
		}
	};
}
