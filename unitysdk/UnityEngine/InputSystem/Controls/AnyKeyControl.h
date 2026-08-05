#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/ButtonControl.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_ANYKEYCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1EAD0580)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_ANYKEYCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD0400)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int AnyKeyControl_TypeDefinitionIndex = 32626;

	class AnyKeyControl : public ::UnityEngine::InputSystem::Controls::ButtonControl
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_ANYKEYCONTROL__CTOR_OFFSET))(this);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_ANYKEYCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}
	};
}
