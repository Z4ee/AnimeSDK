#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"

#define UNITYENGINE_INPUTSYSTEM_SENSOR_GET_SAMPLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1B523450)
#define UNITYENGINE_INPUTSYSTEM_SENSOR_SET_SAMPLINGFREQUENCY_OFFSET UNITYSDK_OFFSET(0x1B5234F0)
#define UNITYENGINE_INPUTSYSTEM_SENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B522FB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Sensor_TypeDefinitionIndex = 29008;

	class Sensor : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR__CTOR_OFFSET))(this);
		}

		::System::Single get_samplingFrequency()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR_GET_SAMPLINGFREQUENCY_OFFSET))(this);
		}

		::System::Void set_samplingFrequency(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_SENSOR_SET_SAMPLINGFREQUENCY_OFFSET))(this, value);
		}
	};
}
