#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEvent.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventBuffer.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_ADVANCE_OFFSET UNITYSDK_OFFSET(0x99D240)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLEANUPAFTEREXCEPTION_OFFSET UNITYSDK_OFFSET(0x99D1C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLOSE_OFFSET UNITYSDK_OFFSET(0x99D0F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_CURRENTEVENTPTR_OFFSET UNITYSDK_OFFSET(0x99D070)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_ISOPEN_OFFSET UNITYSDK_OFFSET(0x99D040)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMBYTESRETAINEDINBUFFER_OFFSET UNITYSDK_OFFSET(0x99D090)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMEVENTSRETAINEDINBUFFER_OFFSET UNITYSDK_OFFSET(0x99D060)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_REMAININGEVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x99D050)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_PEEK_OFFSET UNITYSDK_OFFSET(0x99D310)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_WRITE_OFFSET UNITYSDK_OFFSET(0x99D230)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM__CTOR_OFFSET UNITYSDK_OFFSET(0x99D0A0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventStream_TypeDefinitionIndex = 29261;

	struct alignas(8) InputEventStream
	{
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_NativeBuffer; // 0x10
		::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentNativeEventReadPtr; // 0x30
		::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentNativeEventWritePtr; // 0x38
		::System::Int32 m_RemainingNativeEventCount; // 0x40
		::System::Int32 m_MaxAppendedEvents; // 0x44
		::UnityEngine::InputSystem::LowLevel::InputEventBuffer m_AppendBuffer; // 0x48
		::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentAppendEventReadPtr; // 0x68
		::UnityEngine::InputSystem::LowLevel::InputEvent* m_CurrentAppendEventWritePtr; // 0x70
		::System::Int32 m_RemainingAppendEventCount; // 0x78
		::System::Int32 m_NumEventsRetainedInBuffer; // 0x7C
		::System::Boolean m_IsOpen; // 0x80

		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEventBuffer& eventBuffer, ::System::Int32 maxAppendedEvents)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM__CTOR_OFFSET))(this, eventBuffer, maxAppendedEvents);
		}

		::System::Boolean get_isOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_ISOPEN_OFFSET))(this);
		}

		::System::Int32 get_remainingEventCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_REMAININGEVENTCOUNT_OFFSET))(this);
		}

		::System::Int32 get_numEventsRetainedInBuffer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMEVENTSRETAINEDINBUFFER_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEvent* get_currentEventPtr()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_CURRENTEVENTPTR_OFFSET))(this);
		}

		::System::UInt32 get_numBytesRetainedInBuffer()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_GET_NUMBYTESRETAINEDINBUFFER_OFFSET))(this);
		}

		::System::Void Close(::UnityEngine::InputSystem::LowLevel::InputEventBuffer& eventBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventBuffer&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLOSE_OFFSET))(this, eventBuffer);
		}

		::System::Void CleanUpAfterException()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_CLEANUPAFTEREXCEPTION_OFFSET))(this);
		}

		::System::Void Write(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_WRITE_OFFSET))(this, eventPtr);
		}

		::UnityEngine::InputSystem::LowLevel::InputEvent* Advance(::System::Boolean leaveEventInBuffer)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_ADVANCE_OFFSET))(this, leaveEventInBuffer);
		}

		::UnityEngine::InputSystem::LowLevel::InputEvent* Peek()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTSTREAM_PEEK_OFFSET))(this);
		}
	};
}
