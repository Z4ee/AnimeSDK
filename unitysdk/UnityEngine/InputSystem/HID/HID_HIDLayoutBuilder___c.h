#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/HID/HID_HIDElementDescriptor.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Predicate_1; }

#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__BUILD_B__4_0_OFFSET UNITYSDK_OFFSET(0x1DF75960)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__BUILD_B__4_1_OFFSET UNITYSDK_OFFSET(0x1DF75970)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__BUILD_B__4_2_OFFSET UNITYSDK_OFFSET(0x1DF75980)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF75910)
#define UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF75950)

namespace UnityEngine::InputSystem::HID
{
	inline static constexpr unsigned int HID_HIDLayoutBuilder___c_TypeDefinitionIndex = 31788;

	class HID_HIDLayoutBuilder___c : public ::System::Object
	{
	public:
		static ::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>** StaticGet___9__4_0()
		{
			return (::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>**)Il2CppClass::FromTypeDefinitionIndex(HID_HIDLayoutBuilder___c_TypeDefinitionIndex)->GetStaticField(0x26220);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::System::String*>** StaticGet___9__4_2()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(HID_HIDLayoutBuilder___c_TypeDefinitionIndex)->GetStaticField(0x26228);
		}
		static ::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>** StaticGet___9__4_1()
		{
			return (::System::Predicate_1<::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor>**)Il2CppClass::FromTypeDefinitionIndex(HID_HIDLayoutBuilder___c_TypeDefinitionIndex)->GetStaticField(0x26230);
		}
		static ::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::HID::HID_HIDLayoutBuilder___c**)Il2CppClass::FromTypeDefinitionIndex(HID_HIDLayoutBuilder___c_TypeDefinitionIndex)->GetStaticField(0x26238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _Build_b__4_0(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__BUILD_B__4_0_OFFSET))(this, element);
		}

		::System::Boolean _Build_b__4_1(::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor element)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::HID::HID_HIDElementDescriptor))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__BUILD_B__4_1_OFFSET))(this, element);
		}

		::System::String* _Build_b__4_2(::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_HID_HID_HIDLAYOUTBUILDER___C__BUILD_B__4_2_OFFSET))(this, x);
		}
	};
}
