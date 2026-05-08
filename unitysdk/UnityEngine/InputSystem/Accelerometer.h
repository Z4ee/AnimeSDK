#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1B986BF0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1B986B80)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B986BA0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1B986BC0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1B986BD0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_ACCELERATION_OFFSET UNITYSDK_OFFSET(0x1B986B90)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1B986BB0)
#define UNITYENGINE_INPUTSYSTEM_ACCELEROMETER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B986C40)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Accelerometer_TypeDefinitionIndex = 29009;

	class Accelerometer : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::Accelerometer** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Accelerometer**)Il2CppClass::FromTypeDefinitionIndex(Accelerometer_TypeDefinitionIndex)->GetStaticField(0x22400);
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
