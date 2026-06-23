#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }

#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1E39E130)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_ATMOSPHERICPRESSURE_OFFSET UNITYSDK_OFFSET(0x1E39E0C0)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E39E0E0)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1E39E100)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1E39E110)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_ATMOSPHERICPRESSURE_OFFSET UNITYSDK_OFFSET(0x1E39E0D0)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1E39E0F0)
#define UNITYENGINE_INPUTSYSTEM_PRESSURESENSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1E39E180)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int PressureSensor_TypeDefinitionIndex = 31672;

	class PressureSensor : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::PressureSensor** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::PressureSensor**)Il2CppClass::FromTypeDefinitionIndex(PressureSensor_TypeDefinitionIndex)->GetStaticField(0x26570);
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
