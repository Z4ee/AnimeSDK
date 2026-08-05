#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB4B0A0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CREATECONTROLITEMFROMMEMBER_B__72_0_OFFSET UNITYSDK_OFFSET(0x1EB4B110)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CREATECONTROLITEMFROMMEMBER_B__72_1_OFFSET UNITYSDK_OFFSET(0x1EB4B130)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB4B0E0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__FROMTYPE_B__49_0_OFFSET UNITYSDK_OFFSET(0x1EB4B0F0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout___c_TypeDefinitionIndex = 32615;

	class InputControlLayout___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__72_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout___c_TypeDefinitionIndex)->GetStaticField(0x27BF0);
		}
		static ::UnityEngine::InputSystem::Layouts::InputControlLayout___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Layouts::InputControlLayout___c**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout___c_TypeDefinitionIndex)->GetStaticField(0x27BF8);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__72_1()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout___c_TypeDefinitionIndex)->GetStaticField(0x27C00);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout___c_TypeDefinitionIndex)->GetStaticField(0x27C08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _FromType_b__49_0(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__FROMTYPE_B__49_0_OFFSET))(this, x);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__72_0(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CREATECONTROLITEMFROMMEMBER_B__72_0_OFFSET))(this, x);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__72_1(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CREATECONTROLITEMFROMMEMBER_B__72_1_OFFSET))(this, x);
		}
	};
}
