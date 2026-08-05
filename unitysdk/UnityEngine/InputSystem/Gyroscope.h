#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1EAFFE20)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EAFFDB0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAFFDD0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1EAFFDF0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1EAFFE00)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_ANGULARVELOCITY_OFFSET UNITYSDK_OFFSET(0x1EAFFDC0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1EAFFDE0)
#define UNITYENGINE_INPUTSYSTEM_GYROSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAFFE70)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Gyroscope_TypeDefinitionIndex = 32286;

	class Gyroscope : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::Gyroscope** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Gyroscope**)Il2CppClass::FromTypeDefinitionIndex(Gyroscope_TypeDefinitionIndex)->GetStaticField(0x275B0);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _angularVelocity_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_angularVelocity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_ANGULARVELOCITY_OFFSET))(this);
		}

		::System::Void set_angularVelocity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_ANGULARVELOCITY_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Gyroscope* get_current()
		{
			return ((::UnityEngine::InputSystem::Gyroscope*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Gyroscope* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Gyroscope*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GYROSCOPE_FINISHSETUP_OFFSET))(this);
		}
	};
}
