#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E020C50)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E020C90)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE___C__GET_NAMES_B__2_0_OFFSET UNITYSDK_OFFSET(0x1E020CA0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int TypeTable___c_TypeDefinitionIndex = 32090;

	class TypeTable___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::TypeTable___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Utilities::TypeTable___c**)Il2CppClass::FromTypeDefinitionIndex(TypeTable___c_TypeDefinitionIndex)->GetStaticField(0x26560);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(TypeTable___c_TypeDefinitionIndex)->GetStaticField(0x26568);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE___C__CTOR_OFFSET))(this);
		}

		::System::String* _get_names_b__2_0(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_TYPETABLE___C__GET_NAMES_B__2_0_OFFSET))(this, x);
		}
	};
}
