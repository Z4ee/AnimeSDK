#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ADVANCETONEXTEVENT_OFFSET UNITYSDK_OFFSET(0xA38700)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ALLOCATEEVENT_OFFSET UNITYSDK_OFFSET(0xA386A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_APPENDEVENT_OFFSET UNITYSDK_OFFSET(0xA385F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CLONE_OFFSET UNITYSDK_OFFSET(0xA38850)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA386B0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_DISPOSE_OFFSET UNITYSDK_OFFSET(0xA38800)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA387A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_BUFFERPTR_OFFSET UNITYSDK_OFFSET(0x259D70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_CAPACITYINBYTES_OFFSET UNITYSDK_OFFSET(0xA385A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_DATA_OFFSET UNITYSDK_OFFSET(0x31EA80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_EVENTCOUNT_OFFSET UNITYSDK_OFFSET(0x352810)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_SIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x3C9DA0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_RESET_OFFSET UNITYSDK_OFFSET(0xA386E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xA387A0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM_ICLONEABLE_CLONE_OFFSET UNITYSDK_OFFSET(0xA388F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA385C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER__CTOR_OFFSET UNITYSDK_OFFSET(0xA385B0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputEventBuffer_TypeDefinitionIndex = 32531;

	struct alignas(8) InputEventBuffer
	{
		// static const ::System::Int64 BufferSizeUnknown = 0xFFFFFFFFFFFFFFFF; // 0x0
		::Unity::Collections::NativeArray_1<::System::Byte> m_Buffer; // 0x10
		::System::Int64 m_SizeInBytes; // 0x20
		::System::Int32 m_EventCount; // 0x28
		::System::Boolean m_WeOwnTheBuffer; // 0x2C

		/*
		::System::Void _ctor(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr, ::System::Int32 eventCount, ::System::Int32 sizeInBytes, ::System::Int32 capacityInBytes)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEvent*, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER__CTOR_OFFSET))(this, eventPtr, eventCount, sizeInBytes, capacityInBytes);
		}
		*/

		::System::Void _ctor_1(::Unity::Collections::NativeArray_1<::System::Byte> buffer, ::System::Int32 eventCount, ::System::Int32 sizeInBytes, ::System::Boolean transferNativeArrayOwnership)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::NativeArray_1<::System::Byte>, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER__CTOR_1_OFFSET))(this, buffer, eventCount, sizeInBytes, transferNativeArrayOwnership);
		}

		::System::Int32 get_eventCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_EVENTCOUNT_OFFSET))(this);
		}

		::System::Int64 get_sizeInBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_SIZEINBYTES_OFFSET))(this);
		}

		::System::Int64 get_capacityInBytes()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_CAPACITYINBYTES_OFFSET))(this);
		}

		::Unity::Collections::NativeArray_1<::System::Byte> get_data()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Byte>(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_DATA_OFFSET))(this);
		}

		/*
		::UnityEngine::InputSystem::LowLevel::InputEventPtr get_bufferPtr()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventPtr(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GET_BUFFERPTR_OFFSET))(this);
		}
		*/

		/*
		::System::Void AppendEvent(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr, ::System::Int32 capacityIncrementInBytes, ::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEvent*, ::System::Int32, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_APPENDEVENT_OFFSET))(this, eventPtr, capacityIncrementInBytes, allocator);
		}
		*/

		/*
		::UnityEngine::InputSystem::LowLevel::InputEvent* AllocateEvent(::System::Int32 sizeInBytes, ::System::Int32 capacityIncrementInBytes, ::Unity::Collections::Allocator allocator)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEvent*(*)(::PVOID, ::System::Int32, ::System::Int32, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ALLOCATEEVENT_OFFSET))(this, sizeInBytes, capacityIncrementInBytes, allocator);
		}
		*/

		/*
		::System::Boolean Contains(::UnityEngine::InputSystem::LowLevel::InputEvent* eventPtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEvent*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CONTAINS_OFFSET))(this, eventPtr);
		}
		*/

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_RESET_OFFSET))(this);
		}

		/*
		::System::Void AdvanceToNextEvent(::UnityEngine::InputSystem::LowLevel::InputEvent*& currentReadPos, ::UnityEngine::InputSystem::LowLevel::InputEvent*& currentWritePos, ::System::Int32& numEventsRetainedInBuffer, ::System::Int32& numRemainingEvents, ::System::Boolean leaveEventInBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEvent*&, ::UnityEngine::InputSystem::LowLevel::InputEvent*&, ::System::Int32&, ::System::Int32&, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_ADVANCETONEXTEVENT_OFFSET))(this, currentReadPos, currentWritePos, numEventsRetainedInBuffer, numRemainingEvents, leaveEventInBuffer);
		}
		*/

		/*
		::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_GETENUMERATOR_OFFSET))(this);
		}
		*/

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::InputSystem::LowLevel::InputEventBuffer Clone()
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputEventBuffer(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_CLONE_OFFSET))(this);
		}

		::System::Object* System_ICloneable_Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTEVENTBUFFER_SYSTEM_ICLONEABLE_CLONE_OFFSET))(this);
		}
	};
}
