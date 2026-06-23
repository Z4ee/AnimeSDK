#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1CD27910)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD278C0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_LIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x1CD278A0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1CD278E0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1CD278F0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD278D0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_LIGHTLEVEL_OFFSET UNITYSDK_OFFSET(0x1CD278B0)
#define UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD27960)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int LightSensor_TypeDefinitionIndex = 31671;

	class LightSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::LightSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::LightSensor**)Il2CppClass::FromTypeDefinitionIndex(LightSensor_TypeDefinitionIndex)->GetStaticField(0x265C0);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _lightLevel_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_lightLevel()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_LIGHTLEVEL_OFFSET))(this);
		}

		::System::Void set_lightLevel(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_LIGHTLEVEL_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::LightSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::LightSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::LightSensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::LightSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LIGHTSENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
