#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/AxisControl.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DD7D050)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL_GET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1DD7D030)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1DD7D190)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL_SET_COMPONENT_OFFSET UNITYSDK_OFFSET(0x1DD7D040)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD7D270)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int DpadControl_DpadAxisControl_TypeDefinitionIndex = 32014;

	class DpadControl_DpadAxisControl : public ::UnityEngine::InputSystem::Controls::AxisControl
	{
	public:
		::System::Int32 _component_k__BackingField; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL__CTOR_OFFSET))(this);
		}

		::System::Int32 get_component()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL_GET_COMPONENT_OFFSET))(this);
		}

		::System::Void set_component(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL_SET_COMPONENT_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_DPADCONTROL_DPADAXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}
	};
}
