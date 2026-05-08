#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InlinedArray_1.h"

namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventTrace; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventTrace_Enumerator; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_APPLYDEVICEMAPPING_OFFSET UNITYSDK_OFFSET(0x1B990760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B98F3C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_FINISHED_OFFSET UNITYSDK_OFFSET(0x1B990220)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_CREATEDDEVICES_OFFSET UNITYSDK_OFFSET(0x1B98F370)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0x1B98F310)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_PAUSED_OFFSET UNITYSDK_OFFSET(0x1B98F330)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B98F350)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_TRACE_OFFSET UNITYSDK_OFFSET(0x1B98F300)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1B98F9F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONBEGINFRAME_OFFSET UNITYSDK_OFFSET(0x1B9904D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1B98F950)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONFINISHED_OFFSET UNITYSDK_OFFSET(0x1B98F940)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLEVENTSACCORDINGTOTIMESTAMPS_OFFSET UNITYSDK_OFFSET(0x1B9902B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLEVENTS_OFFSET UNITYSDK_OFFSET(0x1B990100)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLFRAMESONEBYONE_OFFSET UNITYSDK_OFFSET(0x1B990080)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYONEEVENT_OFFSET UNITYSDK_OFFSET(0x1B98F960)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_QUEUEEVENT_OFFSET UNITYSDK_OFFSET(0x1B98FD50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_REWIND_OFFSET UNITYSDK_OFFSET(0x1B990050)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_FINISHED_OFFSET UNITYSDK_OFFSET(0x1B98F320)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_PAUSED_OFFSET UNITYSDK_OFFSET(0x1B98F340)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1B98F360)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHALLDEVICESMAPPEDTONEWINSTANCES_OFFSET UNITYSDK_OFFSET(0x1B98F930)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_1_OFFSET UNITYSDK_OFFSET(0x1B98F870)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_OFFSET UNITYSDK_OFFSET(0x1B98F7C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B98E5C0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventTrace_ReplayController_TypeDefinitionIndex = 29265;

	class InputEventTrace_ReplayController : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_AllEventsByTime; // 0x10
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputDevice*> m_CreatedDevices; // 0x18
		::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>> m_DeviceIDMappings; // 0x30
		::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* m_OnEvent; // 0x48
		::UnityEngine::InputSystem::LowLevel::InputEventTrace* m_EventTrace; // 0x50
		::UnityEngine::InputSystem::LowLevel::InputEventTrace_Enumerator* m_Enumerator; // 0x58
		::System::Action* m_OnFinished; // 0x60
		::System::Double m_StartTimeAsPerRuntime; // 0x68
		::System::Int32 m_AllEventsByTimeIndex; // 0x70
		::System::Boolean _finished_k__BackingField; // 0x74
		::System::Boolean m_CreateNewDevices; // 0x75
		::System::Boolean _paused_k__BackingField; // 0x76
		::System::Double m_StartTimeAsPerFirstEvent; // 0x78
		::System::Int32 _position_k__BackingField; // 0x80

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventTrace* trace)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventTrace*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER__CTOR_OFFSET))(this, trace);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace* get_trace()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_TRACE_OFFSET))(this);
		}

		::System::Boolean get_finished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_FINISHED_OFFSET))(this);
		}

		::System::Void set_finished(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_FINISHED_OFFSET))(this, value);
		}

		::System::Boolean get_paused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_PAUSED_OFFSET))(this);
		}

		::System::Void set_paused(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_PAUSED_OFFSET))(this, value);
		}

		::System::Int32 get_position()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_position(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_SET_POSITION_OFFSET))(this, value);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>* get_createdDevices()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::InputDevice*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_GET_CREATEDDEVICES_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithDeviceMappedFromTo(::UnityEngine::InputSystem::InputDevice* recordedDevice, ::UnityEngine::InputSystem::InputDevice* playbackDevice)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_OFFSET))(this, recordedDevice, playbackDevice);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithDeviceMappedFromTo_1(::System::Int32 recordedDeviceId, ::System::Int32 playbackDeviceId)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHDEVICEMAPPEDFROMTO_1_OFFSET))(this, recordedDeviceId, playbackDeviceId);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* WithAllDevicesMappedToNewInstances()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_WITHALLDEVICESMAPPEDTONEWINSTANCES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* OnFinished(::System::Action* action)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONFINISHED_OFFSET))(this, action);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* OnEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* action)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONEVENT_OFFSET))(this, action);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayOneEvent()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYONEEVENT_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* Rewind()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_REWIND_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllFramesOneByOne()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLFRAMESONEBYONE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllEvents()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLEVENTS_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* PlayAllEventsAccordingToTimestamps()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_PLAYALLEVENTSACCORDINGTOTIMESTAMPS_OFFSET))(this);
		}

		::System::Void OnBeginFrame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_ONBEGINFRAME_OFFSET))(this);
		}

		::System::Void Finished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_FINISHED_OFFSET))(this);
		}

		::System::Void QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_QUEUEEVENT_OFFSET))(this, eventPtr);
		}

		::System::Boolean MoveNext(::System::Boolean skipFrameEvents, ::UnityEngine::InputSystem::LowLevel::InputEventPtr& eventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_MOVENEXT_OFFSET))(this, skipFrameEvents, eventPtr);
		}

		::System::Int32 ApplyDeviceMapping(::System::Int32 originalDeviceId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAYCONTROLLER_APPLYDEVICEMAPPING_OFFSET))(this, originalDeviceId);
		}
	};
}
