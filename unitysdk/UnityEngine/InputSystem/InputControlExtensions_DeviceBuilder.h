#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputControl; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_FINISH_OFFSET UNITYSDK_OFFSET(0x964E30)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_GET_DEVICE_OFFSET UNITYSDK_OFFSET(0x228FE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_ISNOISY_OFFSET UNITYSDK_OFFSET(0x964D40)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_SET_DEVICE_OFFSET UNITYSDK_OFFSET(0x2E5940)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHCHILDREN_OFFSET UNITYSDK_OFFSET(0x964CE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHCONTROLALIAS_OFFSET UNITYSDK_OFFSET(0x964DA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHCONTROLUSAGE_OFFSET UNITYSDK_OFFSET(0x964D70)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x964C10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHLAYOUT_OFFSET UNITYSDK_OFFSET(0x964CB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHNAME_OFFSET UNITYSDK_OFFSET(0x964BD0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHSHORTDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x964C60)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHSTATEBLOCK_OFFSET UNITYSDK_OFFSET(0x964D10)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHSTATEOFFSETTOCONTROLINDEXMAP_OFFSET UNITYSDK_OFFSET(0x964E00)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlExtensions_DeviceBuilder_TypeDefinitionIndex = 28956;

	struct alignas(8) InputControlExtensions_DeviceBuilder
	{
		::UnityEngine::InputSystem::InputDevice* _device_k__BackingField; // 0x10

		::UnityEngine::InputSystem::InputDevice* get_device()
		{
			return ((::UnityEngine::InputSystem::InputDevice*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_GET_DEVICE_OFFSET))(this);
		}

		::System::Void set_device(::UnityEngine::InputSystem::InputDevice* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_SET_DEVICE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithName(::System::String* name)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHNAME_OFFSET))(this, name);
		}

		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithDisplayName(::System::String* displayName)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHDISPLAYNAME_OFFSET))(this, displayName);
		}

		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithShortDisplayName(::System::String* shortDisplayName)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHSHORTDISPLAYNAME_OFFSET))(this, shortDisplayName);
		}

		/*
		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithLayout(::UnityEngine::InputSystem::Utilities::InternedString layout)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHLAYOUT_OFFSET))(this, layout);
		}
		*/

		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithChildren(::System::Int32 startIndex, ::System::Int32 count)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHCHILDREN_OFFSET))(this, startIndex, count);
		}

		/*
		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithStateBlock(::UnityEngine::InputSystem::LowLevel::InputStateBlock stateBlock)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputStateBlock))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHSTATEBLOCK_OFFSET))(this, stateBlock);
		}
		*/

		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder IsNoisy(::System::Boolean value)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_ISNOISY_OFFSET))(this, value);
		}

		/*
		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithControlUsage(::System::Int32 controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString usage, ::UnityEngine::InputSystem::InputControl* control)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::Utilities::InternedString, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHCONTROLUSAGE_OFFSET))(this, controlIndex, usage, control);
		}
		*/

		/*
		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithControlAlias(::System::Int32 controlIndex, ::UnityEngine::InputSystem::Utilities::InternedString alias)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::System::Int32, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHCONTROLALIAS_OFFSET))(this, controlIndex, alias);
		}
		*/

		::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder WithStateOffsetToControlIndexMap(::Il2CppArray<::System::UInt32>* map)
		{
			return ((::UnityEngine::InputSystem::InputControlExtensions_DeviceBuilder(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_WITHSTATEOFFSETTOCONTROLINDEXMAP_OFFSET))(this, map);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLEXTENSIONS_DEVICEBUILDER_FINISH_OFFSET))(this);
		}
	};
}
