#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"
#include "unitysdk/UnityEngine/InputSystem/TouchPhase.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1F7E5980)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1F7E59A0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E5910)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int TouchPhaseControl_TypeDefinitionIndex = 32641;

	class TouchPhaseControl : public ::UnityEngine::InputSystem::InputControl_1<::UnityEngine::InputSystem::TouchPhase>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::TouchPhase ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::UnityEngine::InputSystem::TouchPhase(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::UnityEngine::InputSystem::TouchPhase value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::TouchPhase, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPHASECONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
