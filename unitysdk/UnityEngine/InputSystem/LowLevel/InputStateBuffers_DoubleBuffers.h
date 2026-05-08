#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x94A250)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0x94A240)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_GET_VALID_OFFSET UNITYSDK_OFFSET(0x2F0450)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETBACKBUFFER_OFFSET UNITYSDK_OFFSET(0x94A220)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SETFRONTBUFFER_OFFSET UNITYSDK_OFFSET(0x94A210)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_DOUBLEBUFFERS_SWAPBUFFERS_OFFSET UNITYSDK_OFFSET(0x94A270)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBuffers_DoubleBuffers_TypeDefinitionIndex = 29292;

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
