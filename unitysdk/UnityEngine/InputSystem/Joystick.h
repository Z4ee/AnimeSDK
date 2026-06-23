#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/InputDevice.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/ReadOnlyArray_1.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class StickControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1DD80760)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_ALL_OFFSET UNITYSDK_OFFSET(0x1DD80730)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DD80710)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_HATSWITCH_OFFSET UNITYSDK_OFFSET(0x1DD806F0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_STICK_OFFSET UNITYSDK_OFFSET(0x1DD806B0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1DD80690)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x1DD806D0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1DD80810)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONADDED_OFFSET UNITYSDK_OFFSET(0x1DD80820)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1DD80880)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1DD80720)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_HATSWITCH_OFFSET UNITYSDK_OFFSET(0x1DD80700)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_STICK_OFFSET UNITYSDK_OFFSET(0x1DD806C0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TRIGGER_OFFSET UNITYSDK_OFFSET(0x1DD806A0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x1DD806E0)
#define UNITYENGINE_INPUTSYSTEM_JOYSTICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD809E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Joystick_TypeDefinitionIndex = 31631;

	class Joystick : public ::UnityEngine::InputSystem::InputDevice
	{
	public:
		static ::UnityEngine::InputSystem::Joystick** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Joystick**)Il2CppClass::FromTypeDefinitionIndex(Joystick_TypeDefinitionIndex)->GetStaticField(0x25C40);
		}
		static ::Il2CppArray<::UnityEngine::InputSystem::Joystick*>** StaticGet_s_Joysticks()
		{
			return (::Il2CppArray<::UnityEngine::InputSystem::Joystick*>**)Il2CppClass::FromTypeDefinitionIndex(Joystick_TypeDefinitionIndex)->GetStaticField(0x25C48);
		}
		static ::System::Int32* StaticGet_s_JoystickCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Joystick_TypeDefinitionIndex)->GetStaticField(0x7C50);
		}
		::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField; // 0x158
		::UnityEngine::InputSystem::Controls::Vector2Control* _hatswitch_k__BackingField; // 0x160
		::UnityEngine::InputSystem::Controls::ButtonControl* _trigger_k__BackingField; // 0x168
		::UnityEngine::InputSystem::Controls::StickControl* _stick_k__BackingField; // 0x170

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_trigger()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TRIGGER_OFFSET))(this);
		}

		::System::Void set_trigger(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TRIGGER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::StickControl* get_stick()
		{
			return ((::UnityEngine::InputSystem::Controls::StickControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_STICK_OFFSET))(this);
		}

		::System::Void set_stick(::UnityEngine::InputSystem::Controls::StickControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::StickControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_STICK_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_twist()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_TWIST_OFFSET))(this);
		}

		::System::Void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_TWIST_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_hatswitch()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_HATSWITCH_OFFSET))(this);
		}

		::System::Void set_hatswitch(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_HATSWITCH_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Joystick* get_current()
		{
			return ((::UnityEngine::InputSystem::Joystick*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Joystick* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Joystick*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_SET_CURRENT_OFFSET))(value);
		}

		static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*> get_all()
		{
			return ((::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Joystick*>(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_GET_ALL_OFFSET))();
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_FINISHSETUP_OFFSET))(this);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnAdded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONADDED_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_JOYSTICK_ONREMOVED_OFFSET))(this);
		}
	};
}
