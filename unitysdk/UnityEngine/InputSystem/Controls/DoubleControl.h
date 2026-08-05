#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1F7E58E0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1F7E58F0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7E5870)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DoubleControl_TypeDefinitionIndex = 32632;

	class DoubleControl : public ::UnityEngine::InputSystem::InputControl_1<::System::Double>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL__CTOR_OFFSET))(this);
		}

		::System::Double ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::System::Double(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Double value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DOUBLECONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
