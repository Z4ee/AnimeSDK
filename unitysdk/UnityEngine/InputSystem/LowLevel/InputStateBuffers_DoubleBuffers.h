#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0xA38A00)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0xA389F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GET_VALID_OFFSET UNITYSDK_OFFSET(0x32EF90)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0xA389D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0xA389C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SWAPBUFFERS_OFFSET UNITYSDK_OFFSET(0xA38A20)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBuffers_DoubleBuffers_TypeDefinitionIndex = 32568;

	struct alignas(8) InputStateBuffers_DoubleBuffers
	{
		::System::Void** deviceToBufferMapping; // 0x10

		::System::Boolean get_valid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GET_VALID_OFFSET))(this);
		}

		::System::Void SetFrontBuffer(::System::Int32 deviceIndex, ::System::Void* ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETFRONTBUFFER_OFFSET))(this, deviceIndex, ptr);
		}

		::System::Void SetBackBuffer(::System::Int32 deviceIndex, ::System::Void* ptr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETBACKBUFFER_OFFSET))(this, deviceIndex, ptr);
		}

		::System::Void* GetFrontBuffer(::System::Int32 deviceIndex)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETFRONTBUFFER_OFFSET))(this, deviceIndex);
		}

		::System::Void* GetBackBuffer(::System::Int32 deviceIndex)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETBACKBUFFER_OFFSET))(this, deviceIndex);
		}

		::System::Void SwapBuffers(::System::Int32 deviceIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SWAPBUFFERS_OFFSET))(this, deviceIndex);
		}
	};
}
