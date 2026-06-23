#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class Vector3Control; }

#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1CD24900)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD248E0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1CD248C0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1CD24950)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1CD24960)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD248F0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x1CD248D0)
#define UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD24980)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int GravitySensor_TypeDefinitionIndex = 31667;

	class GravitySensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::GravitySensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::GravitySensor**)Il2CppClass::FromTypeDefinitionIndex(GravitySensor_TypeDefinitionIndex)->GetStaticField(0x26580);
		}
		::UnityEngine::InputSystem::Controls::Vector3Control* _gravity_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::Vector3Control* get_gravity()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector3Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_GRAVITY_OFFSET))(this);
		}

		::System::Void set_gravity(::UnityEngine::InputSystem::Controls::Vector3Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector3Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_GRAVITY_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::GravitySensor* get_current()
		{
			return ((::UnityEngine::InputSystem::GravitySensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::GravitySensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::GravitySensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_FINISHSETUP_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_GRAVITYSENSOR_ONREMOVED_OFFSET))(this);
		}
	};
}
