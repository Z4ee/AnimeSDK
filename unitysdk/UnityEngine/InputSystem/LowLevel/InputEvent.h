#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngineInternal/Input/NativeInputEvent.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_EQUALS_OFFSET UNITYSDK_OFFSET(0x1CE5C680)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GETNEXTINMEMORYCHECKED_OFFSET UNITYSDK_OFFSET(0x1CE5C5A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GETNEXTINMEMORY_OFFSET UNITYSDK_OFFSET(0x1CE5C580)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x979FE0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_EVENTID_OFFSET UNITYSDK_OFFSET(0x979FC0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_HANDLED_OFFSET UNITYSDK_OFFSET(0x979190)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x4262F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x42A140)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x97A000)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_TYPE_OFFSET UNITYSDK_OFFSET(0x325570)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_DEVICEID_OFFSET UNITYSDK_OFFSET(0x979FF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_EVENTID_OFFSET UNITYSDK_OFFSET(0x979FD0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_HANDLED_OFFSET UNITYSDK_OFFSET(0x97A0C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_INTERNALTIME_OFFSET UNITYSDK_OFFSET(0x669760)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x979FB0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x97A010)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_TYPE_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x97A0E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x97A020)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEvent_TypeDefinitionIndex = 32530;

	struct alignas(1) InputEvent
	{
		// static const ::System::UInt32 kHandledMask = 0x80000000; // 0x0
		// static const ::System::UInt32 kIdMask = 0x7FFFFFFF; // 0x0
		// static const ::System::Int32 kBaseEventSize = 0x14; // 0x0
		// static const ::System::Int32 InvalidEventId = 0x0; // 0x0
		// static const ::System::Int32 kAlignment = 0x4; // 0x0
		::UnityEngineInternal::Input::NativeInputEvent m_Event; // 0x10

		/*
		::System::Void _ctor(::UnityEngine::InputSystem::Utilities::FourCC type, ::System::Int32 sizeInBytes, ::System::Int32 deviceId, ::System::Double time)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC, ::System::Int32, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT__CTOR_OFFSET))(this, type, sizeInBytes, deviceId, time);
		}
		*/

		/*
		::UnityEngine::InputSystem::Utilities::FourCC get_type()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_TYPE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_type(::UnityEngine::InputSystem::Utilities::FourCC value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_TYPE_OFFSET))(this, value);
		}
		*/

		::System::UInt32 get_sizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Void set_sizeInBytes(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_SIZEINBYTES_OFFSET))(this, value);
		}

		::System::Int32 get_eventId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_EVENTID_OFFSET))(this);
		}

		::System::Void set_eventId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_EVENTID_OFFSET))(this, value);
		}

		::System::Int32 get_deviceId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_DEVICEID_OFFSET))(this);
		}

		::System::Void set_deviceId(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_DEVICEID_OFFSET))(this, value);
		}

		::System::Double get_time()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_TIME_OFFSET))(this);
		}

		::System::Void set_time(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_TIME_OFFSET))(this, value);
		}

		::System::Double get_internalTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_INTERNALTIME_OFFSET))(this);
		}

		::System::Void set_internalTime(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_INTERNALTIME_OFFSET))(this, value);
		}

		::System::Boolean get_handled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GET_HANDLED_OFFSET))(this);
		}

		::System::Void set_handled(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_SET_HANDLED_OFFSET))(this, value);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_TOSTRING_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputEvent* GetNextInMemory(::UnityEngine::InputSystem::LowLevel::InputEvent* currentPtr)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GETNEXTINMEMORY_OFFSET))(currentPtr);
		}

		/*
		static ::UnityEngine::InputSystem::LowLevel::InputEvent* GetNextInMemoryChecked(::UnityEngine::InputSystem::LowLevel::InputEvent* currentPtr, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer& buffer)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::UnityEngine::InputSystem::LowLevel::InputEvent*, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_GETNEXTINMEMORYCHECKED_OFFSET))(currentPtr, buffer);
		}
		*/

		static ::System::Boolean Equals(::UnityEngine::InputSystem::LowLevel::InputEvent* first, ::UnityEngine::InputSystem::LowLevel::InputEvent* second)
		{
			return ((::System::Boolean(*)(::UnityEngine::InputSystem::LowLevel::InputEvent*, ::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENT_EQUALS_OFFSET))(first, second);
		}
	};
}
