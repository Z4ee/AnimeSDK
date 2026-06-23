#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/AxisControl_Clamp.h"
#include "unitysdk/UnityEngine/InputSystem/InputControl_1.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_COMPAREVALUE_OFFSET UNITYSDK_OFFSET(0x1D8A6B40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1D8A6CB0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1D8A69E0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x1D8A6790)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET UNITYSDK_OFFSET(0x1D8A6A50)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_UNPREPROCESS_OFFSET UNITYSDK_OFFSET(0x1D8A68D0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_WRITEVALUEINTOSTATE_OFFSET UNITYSDK_OFFSET(0x1D8A6A80)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8A6970)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int AxisControl_TypeDefinitionIndex = 32007;

	class AxisControl : public ::UnityEngine::InputSystem::InputControl_1<::System::Single>
	{
	public:
		::UnityEngine::InputSystem::Controls::AxisControl_Clamp clamp; // 0xF0
		::System::Boolean invert; // 0xF4
		::System::Boolean normalize; // 0xF5
		::System::Boolean scale; // 0xF6
		::System::Single scaleFactor; // 0xF8
		::System::Single normalizeMax; // 0xFC
		::System::Single clampMin; // 0x100
		::System::Single clampMax; // 0x104
		::System::Single normalizeMin; // 0x108
		::System::Single normalizeZero; // 0x10C
		::System::Single clampConstant; // 0x110

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL__CTOR_OFFSET))(this);
		}

		::System::Single Preprocess(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_PREPROCESS_OFFSET))(this, value);
		}

		::System::Single Unpreprocess(::System::Single value)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_UNPREPROCESS_OFFSET))(this, value);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_FINISHSETUP_OFFSET))(this);
		}

		::System::Single ReadUnprocessedValueFromState(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_READUNPROCESSEDVALUEFROMSTATE_OFFSET))(this, statePtr);
		}

		::System::Void WriteValueIntoState(::System::Single value, ::System::Void* statePtr)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_WRITEVALUEINTOSTATE_OFFSET))(this, value, statePtr);
		}

		::System::Boolean CompareValue(::System::Void* firstStatePtr, ::System::Void* secondStatePtr)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Void*, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_COMPAREVALUE_OFFSET))(this, firstStatePtr, secondStatePtr);
		}

		::System::Single EvaluateMagnitude(::System::Void* statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_AXISCONTROL_EVALUATEMAGNITUDE_OFFSET))(this, statePtr);
		}
	};
}
