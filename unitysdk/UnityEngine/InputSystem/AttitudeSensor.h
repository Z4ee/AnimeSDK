#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class QuaternionControl; }

#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1CE2BE80)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x1CE2BE10)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CE2BE30)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1CE2BE50)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1CE2BE60)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x1CE2BE20)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CE2BE40)
#define UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE2BED0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int AttitudeSensor_TypeDefinitionIndex = 32288;

	class AttitudeSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::AttitudeSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::AttitudeSensor**)Il2CppClass::FromTypeDefinitionIndex(AttitudeSensor_TypeDefinitionIndex)->GetStaticField(0x27BB0);
		}
		::UnityEngine::InputSystem::Controls::QuaternionControl* _attitude_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::QuaternionControl* get_attitude()
		{
			return ((::UnityEngine::InputSystem::Controls::QuaternionControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_ATTITUDE_OFFSET))(this);
		}

		::System::Void set_attitude(::UnityEngine::InputSystem::Controls::QuaternionControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::QuaternionControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_ATTITUDE_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::AttitudeSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::AttitudeSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::AttitudeSensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::AttitudeSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ATTITUDESENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
