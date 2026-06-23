#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/NamedValue.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDEE980)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1DDEE9C0)
#define UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS___C__TOSTRING_B__8_0_OFFSET UNITYSDK_OFFSET(0x1DDEE9D0)

namespace UnityEngine::InputSystem::Utilities
{
	inline static constexpr unsigned int NameAndParameters___c_TypeDefinitionIndex = 32061;

	class NameAndParameters___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::NameAndParameters___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Utilities::NameAndParameters___c**)Il2CppClass::FromTypeDefinitionIndex(NameAndParameters___c_TypeDefinitionIndex)->GetStaticField(0x26530);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::System::String*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NameAndParameters___c_TypeDefinitionIndex)->GetStaticField(0x26538);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS___C__CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__8_0(::UnityEngine::InputSystem::Utilities::NamedValue x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::NamedValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_UTILITIES_NAMEANDPARAMETERS___C__TOSTRING_B__8_0_OFFSET))(this, x);
		}
	};
}
