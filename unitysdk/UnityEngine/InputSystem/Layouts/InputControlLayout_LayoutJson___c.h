#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AF98320)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF98360)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__FROMLAYOUT_B__15_0_OFFSET UNITYSDK_OFFSET(0x1AF98390)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__FROMLAYOUT_B__15_1_OFFSET UNITYSDK_OFFSET(0x1AF983B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__TOLAYOUT_B__14_0_OFFSET UNITYSDK_OFFSET(0x1AF98370)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_LayoutJson___c_TypeDefinitionIndex = 29329;

	class InputControlLayout_LayoutJson___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_LayoutJson___c_TypeDefinitionIndex)->GetStaticField(0x22810);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_LayoutJson___c_TypeDefinitionIndex)->GetStaticField(0x22818);
		}
		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson___c**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_LayoutJson___c_TypeDefinitionIndex)->GetStaticField(0x22820);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_LayoutJson___c_TypeDefinitionIndex)->GetStaticField(0x22828);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__14_0(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__TOLAYOUT_B__14_0_OFFSET))(this, x);
		}

		::System::String* _FromLayout_b__15_0(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__FROMLAYOUT_B__15_0_OFFSET))(this, x);
		}

		::System::String* _FromLayout_b__15_1(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON___C__FROMLAYOUT_B__15_1_OFFSET))(this, x);
		}
	};
}
