#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/ButtonControl.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1AF8E0B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1AF8E1B0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1AF8E200)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF8E250)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int TouchPressControl_TypeDefinitionIndex = 29366;

	class TouchPressControl : public ::UnityEngine::InputSystem::Controls::ButtonControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL__CTOR_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Single value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_TOUCHPRESSCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
