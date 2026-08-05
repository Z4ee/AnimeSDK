#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F7E7260)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_ATMOSPHERICPRESSURE_OFFSET UNITYSDK_OFFSET(0x1F7E71F0)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7E7210)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1F7E7230)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1F7E7240)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_ATMOSPHERICPRESSURE_OFFSET UNITYSDK_OFFSET(0x1F7E7200)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F7E7220)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E72B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PressureSensor_TypeDefinitionIndex = 32292;

	class PressureSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::PressureSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::PressureSensor**)Il2CppClass::FromTypeDefinitionIndex(PressureSensor_TypeDefinitionIndex)->GetStaticField(0x27CF0);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _atmosphericPressure_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_atmosphericPressure()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_ATMOSPHERICPRESSURE_OFFSET))(this);
		}

		::System::Void set_atmosphericPressure(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_ATMOSPHERICPRESSURE_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::PressureSensor* get_current()
		{
			return ((::UnityEngine::InputSystem::PressureSensor*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::PressureSensor* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::PressureSensor*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_FINISHSETUP_OFFSET))(this);
		}
	};
}
