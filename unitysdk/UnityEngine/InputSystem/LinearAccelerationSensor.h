#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DF77D70)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1DF77D00)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF77D20)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1DF77D40)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1DF77D50)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1DF77D10)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DF77D30)
#define UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF77DC0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int LinearAccelerationSensor_TypeDefinitionIndex = 31669;

	class LinearAccelerationSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::LinearAccelerationSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::LinearAccelerationSensor**)Il2CppClass::FromTypeDefinitionIndex(LinearAccelerationSensor_TypeDefinitionIndex)->GetStaticField(0x26240);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _acceleration_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_acceleration()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_ACCELERATION_OFFSET))(this);
		}

		::System::Void set_acceleration(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_ACCELERATION_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::LinearAccelerationSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::LinearAccelerationSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::LinearAccelerationSensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LinearAccelerationSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LINEARACCELERATIONSENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
