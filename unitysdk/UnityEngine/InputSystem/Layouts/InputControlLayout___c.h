#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B3FE300)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CREATECONTROLITEMFROMMEMBER_B__72_0_OFFSET UNITYSDK_OFFSET(0x1B3FE370)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CREATECONTROLITEMFROMMEMBER_B__72_1_OFFSET UNITYSDK_OFFSET(0x1B3FE390)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3FE340)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT___C__FROMTYPE_B__49_0_OFFSET UNITYSDK_OFFSET(0x1B3FE350)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout___c_TypeDefinitionIndex = 29339;

	class InputControlLayout___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__72_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout___c_TypeDefinitionIndex)->GetStaticField(0x226E0);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__49_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout___c_TypeDefinitionIndex)->GetStaticField(0x226E8);
		}
		static ::UnityEngine::InputSystem::Layouts::InputControlLayout___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Layouts::InputControlLayout___c**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout___c_TypeDefinitionIndex)->GetStaticField(0x226F0);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__72_1()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout___c_TypeDefinitionIndex)->GetStaticField(0x226F8);
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
