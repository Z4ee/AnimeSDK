#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1EC32A90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1EC32AA0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC32A20)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int IntegerControl_TypeDefinitionIndex = 32636;

	class IntegerControl : public ::UnityEngine::InputSystem::InputControl_1<::System::Int32>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL__CTOR_OFFSET))(this);
		}

		::System::Int32 ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Int32 value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_INTEGERCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}
	};
}
