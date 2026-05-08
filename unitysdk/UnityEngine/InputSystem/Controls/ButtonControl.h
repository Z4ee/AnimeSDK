#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/Controls/AxisControl.h"

#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_ISPRESSED_OFFSET UNITYSDK_OFFSET(0x1C086CC0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_PRESSPOINTORDEFAULT_OFFSET UNITYSDK_OFFSET(0x1C086B40)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_WASPRESSEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1C086D00)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_WASRELEASEDTHISFRAME_OFFSET UNITYSDK_OFFSET(0x1C086DB0)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_ISVALUECONSIDEREDPRESSED_OFFSET UNITYSDK_OFFSET(0x1C086C90)
#define UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1C086B70)

namespace UnityEngine::InputSystem::Controls
{
	inline static constexpr unsigned int ButtonControl_TypeDefinitionIndex = 29353;

	class ButtonControl : public ::UnityEngine::InputSystem::Controls::AxisControl
	{
	public:
		static ::System::Single* StaticGet_s_GlobalDefaultButtonPressPoint()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ButtonControl_TypeDefinitionIndex)->GetStaticField(0x4BF0);
		}
		static ::System::Single* StaticGet_s_GlobalDefaultButtonReleaseThreshold()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(ButtonControl_TypeDefinitionIndex)->GetStaticField(0x4BF4);
		}
		// static const ::System::Single kMinButtonPressPoint; // 0x0
		::System::Single pressPoint; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL__CTOR_OFFSET))(this);
		}

		::System::Single get_pressPointOrDefault()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_PRESSPOINTORDEFAULT_OFFSET))(this);
		}

		::System::Boolean IsValueConsideredPressed(::System::Single value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_ISVALUECONSIDEREDPRESSED_OFFSET))(this, value);
		}

		::System::Boolean get_isPressed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_ISPRESSED_OFFSET))(this);
		}

		::System::Boolean get_wasPressedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_WASPRESSEDTHISFRAME_OFFSET))(this);
		}

		::System::Boolean get_wasReleasedThisFrame()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_CONTROLS_BUTTONCONTROL_GET_WASRELEASEDTHISFRAME_OFFSET))(this);
		}
	};
}
