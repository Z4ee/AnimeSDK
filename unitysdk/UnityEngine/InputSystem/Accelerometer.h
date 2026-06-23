#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DCFD8E0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1DCFD870)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DCFD890)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1DCFD8B0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1DCFD8C0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1DCFD880)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DCFD8A0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DCFD930)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Accelerometer_TypeDefinitionIndex = 31665;

	class Accelerometer : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::Accelerometer** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Accelerometer**)Il2CppClass::FromTypeDefinitionIndex(Accelerometer_TypeDefinitionIndex)->GetStaticField(0x26190);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_ACCELERATION_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Accelerometer* get_current()
		{
			return ((::UnityEngine::InputSystem::Accelerometer*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Accelerometer* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Accelerometer*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_FINISHSETUP_OFFSET))(this);
		}
	};
}
