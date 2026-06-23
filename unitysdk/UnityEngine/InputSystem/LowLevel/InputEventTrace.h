#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventTrace_DeviceInfo.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/CallbackArray_1.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::IO { class Stream; }
namespace UnityEngine::InputSystem { class InputDevice; }
namespace UnityEngine::InputSystem::LowLevel { class InputEventTrace_ReplayController; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ADD_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1DD03B30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x1DD05750)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_CLEAR_OFFSET UNITYSDK_OFFSET(0x1DD05620)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DISABLE_OFFSET UNITYSDK_OFFSET(0x1DD05200)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DD057E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENABLE_OFFSET UNITYSDK_OFFSET(0x1DD05640)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DD04620)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GETNEXTEVENT_OFFSET UNITYSDK_OFFSET(0x1DD055B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ALLOCATEDSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1DD03AA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1DD03980)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_DEVICEINFOS_OFFSET UNITYSDK_OFFSET(0x1DD03AE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ENABLED_OFFSET UNITYSDK_OFFSET(0x1DD039A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_EVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x1DD03A80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_FRAMEMARKEREVENT_OFFSET UNITYSDK_OFFSET(0x1DD03970)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_KFILEFORMAT_OFFSET UNITYSDK_OFFSET(0x1DD04610)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_MAXSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1DD03AD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFERHEAD_OFFSET UNITYSDK_OFFSET(0x1DD055A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFERTAIL_OFFSET UNITYSDK_OFFSET(0x1DD05780)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFER_OFFSET UNITYSDK_OFFSET(0x1DD03AC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ONFILTEREVENT_OFFSET UNITYSDK_OFFSET(0x1DD03B10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_RECORDFRAMEMARKERS_OFFSET UNITYSDK_OFFSET(0x1DD039B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_TOTALEVENTSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x1DD03A90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_LOADFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD05090)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_LOADFROM_OFFSET UNITYSDK_OFFSET(0x1DD04F10)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x1DD05890)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ONINPUTEVENT_OFFSET UNITYSDK_OFFSET(0x1DD059F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_READFROM_1_OFFSET UNITYSDK_OFFSET(0x1DD047D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_READFROM_OFFSET UNITYSDK_OFFSET(0x1DD04670)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_RELEASE_OFFSET UNITYSDK_OFFSET(0x1DD05840)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REMOVE_ONEVENT_OFFSET UNITYSDK_OFFSET(0x1DD03B80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAY_OFFSET UNITYSDK_OFFSET(0x1DD05160)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_RESIZE_OFFSET UNITYSDK_OFFSET(0x1DD05320)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x1DD03990)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFERHEAD_OFFSET UNITYSDK_OFFSET(0x1DD04EF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFERTAIL_OFFSET UNITYSDK_OFFSET(0x1DD04F00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFER_OFFSET UNITYSDK_OFFSET(0x1DD04EE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_ONFILTEREVENT_OFFSET UNITYSDK_OFFSET(0x1DD03B20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_RECORDFRAMEMARKERS_OFFSET UNITYSDK_OFFSET(0x1DD039C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1DD05790)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_WRITETO_1_OFFSET UNITYSDK_OFFSET(0x1DD03E50)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DD03CF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD05F60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD03CA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD03BD0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventTrace_TypeDefinitionIndex = 31918;

	class InputEventTrace : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_kFileVersion()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(InputEventTrace_TypeDefinitionIndex)->GetStaticField(0x7D30);
		}
		// static const ::System::Int32 kDefaultBufferSize = 0x100000; // 0x0
		::System::Int32 m_ChangeCounter; // 0x10
		::System::Boolean m_Enabled; // 0x14
		::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean>* m_OnFilterEvent; // 0x18
		::System::Int32 m_DeviceId; // 0x20
		::UnityEngine::InputSystem::Utilities::CallbackArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> m_EventListeners; // 0x28
		::System::Int64 m_EventBufferSize; // 0x78
		::System::Int64 m_MaxEventBufferSize; // 0x80
		::System::Int64 m_GrowIncrementSize; // 0x88
		::System::Int64 m_EventCount; // 0x90
		::System::Int64 m_EventSizeInBytes; // 0x98
		::System::UInt64 m_EventBufferStorage; // 0xA0
		::System::UInt64 m_EventBufferHeadStorage; // 0xA8
		::System::UInt64 m_EventBufferTailStorage; // 0xB0
		::System::Boolean m_HasWrapped; // 0xB8
		::System::Boolean m_RecordFrameMarkers; // 0xB9
		::Il2CppArray<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo>* m_DeviceInfos; // 0xC0

		::System::Void _ctor(::UnityEngine::InputSystem::InputDevice* device, ::System::Int64 bufferSizeInBytes, ::System::Boolean growBuffer, ::System::Int64 maxBufferSizeInBytes, ::System::Int64 growIncrementSizeInBytes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE__CTOR_OFFSET))(this, device, bufferSizeInBytes, growBuffer, maxBufferSizeInBytes, growIncrementSizeInBytes);
		}

		::System::Void _ctor_1(::System::Int64 bufferSizeInBytes, ::System::Boolean growBuffer, ::System::Int64 maxBufferSizeInBytes, ::System::Int64 growIncrementSizeInBytes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Boolean, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE__CTOR_1_OFFSET))(this, bufferSizeInBytes, growBuffer, maxBufferSizeInBytes, growIncrementSizeInBytes);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE__CCTOR_OFFSET))();
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC get_FrameMarkerEvent()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_FRAMEMARKEREVENT_OFFSET))();
		}

		::System::Int32 get_deviceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_deviceId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::Boolean get_enabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ENABLED_OFFSET))(this);
		}

		::System::Boolean get_recordFrameMarkers()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_RECORDFRAMEMARKERS_OFFSET))(this);
		}

		::System::Void set_recordFrameMarkers(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_RECORDFRAMEMARKERS_OFFSET))(this, value);
		}

		::System::Int64 get_eventCount()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_EVENTCOUNT_OFFSET))(this);
		}

		::System::Int64 get_totalEventSizeInBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_TOTALEVENTSIZEINBYTES_OFFSET))(this);
		}

		::System::Int64 get_allocatedSizeInBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ALLOCATEDSIZEINBYTES_OFFSET))(this);
		}

		::System::Int64 get_maxSizeInBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_MAXSIZEINBYTES_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo> get_deviceInfos()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::LowLevel::InputEventTrace_DeviceInfo>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_DEVICEINFOS_OFFSET))(this);
		}

		::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean>* get_onFilterEvent()
		{
			return ((::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_ONFILTEREVENT_OFFSET))(this);
		}

		::System::Void set_onFilterEvent(::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_3<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_ONFILTEREVENT_OFFSET))(this, value);
		}

		::System::Void add_onEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ADD_ONEVENT_OFFSET))(this, value);
		}

		::System::Void remove_onEvent(::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REMOVE_ONEVENT_OFFSET))(this, value);
		}

		::System::Void WriteTo(::System::String* filePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_WRITETO_OFFSET))(this, filePath);
		}

		::System::Void WriteTo_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_WRITETO_1_OFFSET))(this, stream);
		}

		::System::Void ReadFrom(::System::String* filePath)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_READFROM_OFFSET))(this, filePath);
		}

		::System::Void ReadFrom_1(::System::IO::Stream* stream)
		{
			return ((::System::Void(*)(::PVOID, ::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_READFROM_1_OFFSET))(this, stream);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputEventTrace* LoadFrom(::System::String* filePath)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace*(*)(::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_LOADFROM_OFFSET))(filePath);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputEventTrace* LoadFrom_1(::System::IO::Stream* stream)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace*(*)(::System::IO::Stream*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_LOADFROM_1_OFFSET))(stream);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController* Replay()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventTrace_ReplayController*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_REPLAY_OFFSET))(this);
		}

		::System::Boolean Resize(::System::Int64 newBufferSize, ::System::Int64 newMaxBufferSize)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_RESIZE_OFFSET))(this, newBufferSize, newMaxBufferSize);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_CLEAR_OFFSET))(this);
		}

		::System::Void Enable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ENABLE_OFFSET))(this);
		}

		::System::Void Disable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DISABLE_OFFSET))(this);
		}

		::System::Boolean GetNextEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr& current)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GETNEXTEVENT_OFFSET))(this, current);
		}

		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_DISPOSE_OFFSET))(this);
		}

		::System::Byte* get_m_EventBuffer()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFER_OFFSET))(this);
		}

		::System::Void set_m_EventBuffer(::System::Byte* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFER_OFFSET))(this, value);
		}

		::System::Byte* get_m_EventBufferHead()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFERHEAD_OFFSET))(this);
		}

		::System::Void set_m_EventBufferHead(::System::Byte* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFERHEAD_OFFSET))(this, value);
		}

		::System::Byte* get_m_EventBufferTail()
		{
			return ((::System::Byte*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_M_EVENTBUFFERTAIL_OFFSET))(this);
		}

		::System::Void set_m_EventBufferTail(::System::Byte* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_SET_M_EVENTBUFFERTAIL_OFFSET))(this, value);
		}

		::System::Void Allocate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ALLOCATE_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_RELEASE_OFFSET))(this);
		}

		::System::Void OnBeforeUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ONBEFOREUPDATE_OFFSET))(this);
		}

		::System::Void OnInputEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_ONINPUTEVENT_OFFSET))(this, inputEvent, device);
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC get_kFileFormat()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTTRACE_GET_KFILEFORMAT_OFFSET))();
		}
	};
}
