#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Sensor.h"

namespace UnityEngine::InputSystem::Controls { class IntegerControl; }

#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1F1F7260)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F1F7210)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_GET_STEPCOUNTER_OFFSET UNITYSDK_OFFSET(0x1F1F71F0)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1F1F7230)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1F1F7240)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F1F7220)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_SET_STEPCOUNTER_OFFSET UNITYSDK_OFFSET(0x1F1F7200)
#define UNITYENGINE_INPUTSYSTEM_STEPCOUNTER__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F72B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int StepCounter_TypeDefinitionIndex = 32296;

	class StepCounter : public ::UnityEngine::InputSystem::Sensor
	{
	public:
		static ::UnityEngine::InputSystem::StepCounter** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::StepCounter**)Il2CppClass::FromTypeDefinitionIndex(StepCounter_TypeDefinitionIndex)->GetStaticField(0x27CA0);
		}
		::UnityEngine::InputSystem::Controls::IntegerControl* _stepCounter_k__BackingField; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::IntegerControl* get_stepCounter()
		{
			return ((::UnityEngine::InputSystem::Controls::IntegerControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_GET_STEPCOUNTER_OFFSET))(this);
		}

		::System::Void set_stepCounter(::UnityEngine::InputSystem::Controls::IntegerControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::IntegerControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_SET_STEPCOUNTER_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::StepCounter* get_current()
		{
			return ((::UnityEngine::InputSystem::StepCounter*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::StepCounter* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::StepCounter*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_SET_CURRENT_OFFSET))(value);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_STEPCOUNTER_FINISHSETUP_OFFSET))(this);
		}
	};
}
