#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputStateBuffers_DoubleBuffers.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputUpdateType.h"

namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_ALLOCATEALL_OFFSET UNITYSDK_OFFSET(0x90D840)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_COMPUTESIZEOFSINGLESTATEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A925F20)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_FREEALL_OFFSET UNITYSDK_OFFSET(0x90D850)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETBACKBUFFERFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1A925D70)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETDOUBLEBUFFERSFOR_OFFSET UNITYSDK_OFFSET(0x90D830)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETFRONTBUFFERFORDEVICE_OFFSET UNITYSDK_OFFSET(0x1A925D30)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEALL_OFFSET UNITYSDK_OFFSET(0x90D950)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEDOUBLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A926200)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATESINGLEBUFFER_OFFSET UNITYSDK_OFFSET(0x1A926340)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_NEXTDEVICEOFFSET_OFFSET UNITYSDK_OFFSET(0x1A9263F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SETUPDEVICETOBUFFERMAPPINGS_OFFSET UNITYSDK_OFFSET(0x1A925F80)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SWITCHTO_OFFSET UNITYSDK_OFFSET(0x1A925DB0)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBuffers_TypeDefinitionIndex = 29291;

	struct alignas(8) InputStateBuffers
	{
		static ::System::Void** StaticGet_s_NoiseMaskBuffer()
		{
			return (::System::Void**)Il2CppClass::FromTypeDefinitionIndex(InputStateBuffers_TypeDefinitionIndex)->GetStaticField(0x4B60);
		}
		static ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers* StaticGet_s_CurrentBuffers()
		{
			return (::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers*)Il2CppClass::FromTypeDefinitionIndex(InputStateBuffers_TypeDefinitionIndex)->GetStaticField(0x4B68);
		}
		static ::System::Void** StaticGet_s_ResetMaskBuffer()
		{
			return (::System::Void**)Il2CppClass::FromTypeDefinitionIndex(InputStateBuffers_TypeDefinitionIndex)->GetStaticField(0x4B70);
		}
		static ::System::Void** StaticGet_s_DefaultStateBuffer()
		{
			return (::System::Void**)Il2CppClass::FromTypeDefinitionIndex(InputStateBuffers_TypeDefinitionIndex)->GetStaticField(0x4B78);
		}
		::System::UInt32 sizePerBuffer; // 0x10
		::System::UInt32 totalSize; // 0x14
		::System::Void* defaultStateBuffer; // 0x18
		::System::Void* noiseMaskBuffer; // 0x20
		::System::Void* resetMaskBuffer; // 0x28
		::System::Void* m_AllBuffers; // 0x30
		::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers m_PlayerStateBuffers; // 0x38

		::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers GetDoubleBuffersFor(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETDOUBLEBUFFERSFOR_OFFSET))(this, updateType);
		}

		static ::System::Void* GetFrontBufferForDevice(::System::Int32 deviceIndex)
		{
			return ((::System::Void*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETFRONTBUFFERFORDEVICE_OFFSET))(deviceIndex);
		}

		static ::System::Void* GetBackBufferForDevice(::System::Int32 deviceIndex)
		{
			return ((::System::Void*(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_GETBACKBUFFERFORDEVICE_OFFSET))(deviceIndex);
		}

		static ::System::Void SwitchTo(::UnityEngine::InputSystem::LowLevel::InputStateBuffers buffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType update)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers, ::UnityEngine::InputSystem::LowLevel::InputUpdateType))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SWITCHTO_OFFSET))(buffers, update);
		}

		::System::Void AllocateAll(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_ALLOCATEALL_OFFSET))(this, devices, deviceCount);
		}

		static ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers SetUpDeviceToBufferMappings(::System::Int32 deviceCount, ::System::Byte*& bufferPtr, ::System::UInt32 sizePerBuffer, ::System::UInt32 mappingTableSizePerBuffer)
		{
			return ((::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers(*)(::System::Int32, ::System::Byte*&, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_SETUPDEVICETOBUFFERMAPPINGS_OFFSET))(deviceCount, bufferPtr, sizePerBuffer, mappingTableSizePerBuffer);
		}

		::System::Void FreeAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_FREEALL_OFFSET))(this);
		}

		::System::Void MigrateAll(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers oldBuffers)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEALL_OFFSET))(this, devices, deviceCount, oldBuffers);
		}

		static ::System::Void MigrateDoubleBuffer(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers newBuffer, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers oldBuffer)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32, ::UnityEngine::InputSystem::LowLevel::InputStateBuffers_DoubleBuffers))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATEDOUBLEBUFFER_OFFSET))(newBuffer, devices, deviceCount, oldBuffer);
		}

		static ::System::Void MigrateSingleBuffer(::System::Void* newBuffer, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount, ::System::Void* oldBuffer)
		{
			return ((::System::Void(*)(::System::Void*, ::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_MIGRATESINGLEBUFFER_OFFSET))(newBuffer, devices, deviceCount, oldBuffer);
		}

		static ::System::UInt32 ComputeSizeOfSingleStateBuffer(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>* devices, ::System::Int32 deviceCount)
		{
			return ((::System::UInt32(*)(::Il2CppArray<::UnityEngine::InputSystem::InputDevice*>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_COMPUTESIZEOFSINGLESTATEBUFFER_OFFSET))(devices, deviceCount);
		}

		static ::System::UInt32 NextDeviceOffset(::System::UInt32 currentOffset, ::UnityEngine::InputSystem::InputDevice* device)
		{
			return ((::System::UInt32(*)(::System::UInt32, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBUFFERS_NEXTDEVICEOFFSET_OFFSET))(currentOffset, device);
		}
	};
}
