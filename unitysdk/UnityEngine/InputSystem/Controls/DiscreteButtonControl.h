#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/ButtonControl.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/DiscreteButtonControl_WriteMode.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DDE5490)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1DDE5590)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1DDE5630)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE5700)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DiscreteButtonControl_TypeDefinitionIndex = 32010;

	class DiscreteButtonControl : public ::UnityEngine::InputSystem::Controls::ButtonControl
	{
	public:
		::System::Int32 maxValue; // 0x120
		::System::Int32 minValue; // 0x124
		::System::Int32 wrapAtValue; // 0x128
		::System::Int32 nullValue; // 0x12C
		::UnityEngine::InputSystem::Controls::DiscreteButtonControl_WriteMode writeMode; // 0x130

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Single value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DISCRETEBUTTONCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
