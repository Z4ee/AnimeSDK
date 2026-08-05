#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F1256F0)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_GET_AMBIENTTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1F125680)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F1256A0)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1F1256C0)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1F1256D0)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_SET_AMBIENTTEMPERATURE_OFFSET UNITYSDK_OFFSET(0x1F125690)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F1256B0)
#define UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F125740)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int AmbientTemperatureSensor_TypeDefinitionIndex = 32295;

	class AmbientTemperatureSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::AmbientTemperatureSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::AmbientTemperatureSensor**)Il2CppClass::FromTypeDefinitionIndex(AmbientTemperatureSensor_TypeDefinitionIndex)->GetStaticField(0x27920);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _ambientTemperature_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_ambientTemperature()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_GET_AMBIENTTEMPERATURE_OFFSET))(this);
		}

		::System::Void set_ambientTemperature(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_SET_AMBIENTTEMPERATURE_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::AmbientTemperatureSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::AmbientTemperatureSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::AmbientTemperatureSensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::AmbientTemperatureSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_AMBIENTTEMPERATURESENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
