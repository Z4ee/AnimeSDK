#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/InputSystem/PenButton.h"
#include "unitysdk/UnityEngine/InputSystem/Pointer.h"

namespace UnityEngine::InputSystem::Controls { class AxisControl; }
namespace UnityEngine::InputSystem::Controls { class ButtonControl; }
namespace UnityEngine::InputSystem::Controls { class Vector2Control; }

#define UNITYENGINE_INPUTSYSTEM_PEN_FINISHSETUP_OFFSET UNITYSDK_OFFSET(0x1CD2BE90)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD2BD10)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_ERASER_OFFSET UNITYSDK_OFFSET(0x1CD2BC10)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_FIRSTBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD2BC30)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_FOURTHBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD2BC90)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_INRANGE_OFFSET UNITYSDK_OFFSET(0x1CD2BCB0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1CD2BD30)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_SECONDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD2BC50)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_THIRDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD2BC70)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TILT_OFFSET UNITYSDK_OFFSET(0x1CD2BCD0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TIP_OFFSET UNITYSDK_OFFSET(0x1CD2BBF0)
#define UNITYENGINE_INPUTSYSTEM_PEN_GET_TWIST_OFFSET UNITYSDK_OFFSET(0x1CD2BCF0)
#define UNITYENGINE_INPUTSYSTEM_PEN_MAKECURRENT_OFFSET UNITYSDK_OFFSET(0x1CD2BE30)
#define UNITYENGINE_INPUTSYSTEM_PEN_ONREMOVED_OFFSET UNITYSDK_OFFSET(0x1CD2BE50)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CD2BD20)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_ERASER_OFFSET UNITYSDK_OFFSET(0x1CD2BC20)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_FIRSTBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD2BC40)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_FOURTHBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD2BCA0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_INRANGE_OFFSET UNITYSDK_OFFSET(0x1CD2BCC0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_SECONDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD2BC60)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_THIRDBARRELBUTTON_OFFSET UNITYSDK_OFFSET(0x1CD2BC80)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TILT_OFFSET UNITYSDK_OFFSET(0x1CD2BCE0)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TIP_OFFSET UNITYSDK_OFFSET(0x1CD2BC00)
#define UNITYENGINE_INPUTSYSTEM_PEN_SET_TWIST_OFFSET UNITYSDK_OFFSET(0x1CD2BD00)
#define UNITYENGINE_INPUTSYSTEM_PEN__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD2BFD0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int Pen_TypeDefinitionIndex = 31636;

	class Pen : public ::UnityEngine::InputSystem::Pointer
	{
	public:
		static ::UnityEngine::InputSystem::Pen** StaticGet__current_k__BackingField()
		{
			return (::UnityEngine::InputSystem::Pen**)Il2CppClass::FromTypeDefinitionIndex(Pen_TypeDefinitionIndex)->GetStaticField(0x26610);
		}
		::UnityEngine::InputSystem::Controls::ButtonControl* _thirdBarrelButton_k__BackingField; // 0x180
		::UnityEngine::InputSystem::Controls::ButtonControl* _tip_k__BackingField; // 0x188
		::UnityEngine::InputSystem::Controls::ButtonControl* _inRange_k__BackingField; // 0x190
		::UnityEngine::InputSystem::Controls::ButtonControl* _secondBarrelButton_k__BackingField; // 0x198
		::UnityEngine::InputSystem::Controls::AxisControl* _twist_k__BackingField; // 0x1A0
		::UnityEngine::InputSystem::Controls::ButtonControl* _eraser_k__BackingField; // 0x1A8
		::UnityEngine::InputSystem::Controls::ButtonControl* _firstBarrelButton_k__BackingField; // 0x1B0
		::UnityEngine::InputSystem::Controls::Vector2Control* _tilt_k__BackingField; // 0x1B8
		::UnityEngine::InputSystem::Controls::ButtonControl* _fourthBarrelButton_k__BackingField; // 0x1C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_tip()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TIP_OFFSET))(this);
		}

		::System::Void set_tip(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TIP_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_eraser()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_ERASER_OFFSET))(this);
		}

		::System::Void set_eraser(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_ERASER_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_firstBarrelButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_FIRSTBARRELBUTTON_OFFSET))(this);
		}

		::System::Void set_firstBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_FIRSTBARRELBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_secondBarrelButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_SECONDBARRELBUTTON_OFFSET))(this);
		}

		::System::Void set_secondBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_SECONDBARRELBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_thirdBarrelButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_THIRDBARRELBUTTON_OFFSET))(this);
		}

		::System::Void set_thirdBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_THIRDBARRELBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_fourthBarrelButton()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_FOURTHBARRELBUTTON_OFFSET))(this);
		}

		::System::Void set_fourthBarrelButton(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_FOURTHBARRELBUTTON_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_inRange()
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_INRANGE_OFFSET))(this);
		}

		::System::Void set_inRange(::UnityEngine::InputSystem::Controls::ButtonControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::ButtonControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_INRANGE_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::Vector2Control* get_tilt()
		{
			return ((::UnityEngine::InputSystem::Controls::Vector2Control*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TILT_OFFSET))(this);
		}

		::System::Void set_tilt(::UnityEngine::InputSystem::Controls::Vector2Control* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::Vector2Control*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TILT_OFFSET))(this, value);
		}

		::UnityEngine::InputSystem::Controls::AxisControl* get_twist()
		{
			return ((::UnityEngine::InputSystem::Controls::AxisControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_TWIST_OFFSET))(this);
		}

		::System::Void set_twist(::UnityEngine::InputSystem::Controls::AxisControl* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Controls::AxisControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_TWIST_OFFSET))(this, value);
		}

		static ::UnityEngine::InputSystem::Pen* get_current()
		{
			return ((::UnityEngine::InputSystem::Pen*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_CURRENT_OFFSET))();
		}

		static ::System::Void set_current(::UnityEngine::InputSystem::Pen* value)
		{
			return ((::System::Void(*)(::UnityEngine::InputSystem::Pen*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_SET_CURRENT_OFFSET))(value);
		}

		::UnityEngine::InputSystem::Controls::ButtonControl* get_Item(::UnityEngine::InputSystem::PenButton button)
		{
			return ((::UnityEngine::InputSystem::Controls::ButtonControl*(*)(::PVOID, ::UnityEngine::InputSystem::PenButton))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_GET_ITEM_OFFSET))(this, button);
		}

		::System::Void MakeCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_MAKECURRENT_OFFSET))(this);
		}

		::System::Void OnRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_ONREMOVED_OFFSET))(this);
		}

		::System::Void FinishSetup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_PEN_FINISHSETUP_OFFSET))(this);
		}
	};
}
