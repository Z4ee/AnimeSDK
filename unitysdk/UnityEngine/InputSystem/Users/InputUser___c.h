#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Users/InputUser_GlobalState.h"

namespace System { class Action; }
namespace UnityEngine::InputSystem::Utilities { template <typename T> class SavedStructState_1_TypedRestore; }

#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A059EB0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A059EF0)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__SAVEANDRESETSTATE_B__86_0_OFFSET UNITYSDK_OFFSET(0x1A059F00)
#define UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__SAVEANDRESETSTATE_B__86_1_OFFSET UNITYSDK_OFFSET(0x1A059F20)

namespace UnityEngine::InputSystem::Users
{
	inline static constexpr unsigned int InputUser___c_TypeDefinitionIndex = 29101;

	class InputUser___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Users::InputUser___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Users::InputUser___c**)Il2CppClass::FromTypeDefinitionIndex(InputUser___c_TypeDefinitionIndex)->GetStaticField(0x223E0);
		}
		static ::System::Action** StaticGet___9__86_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputUser___c_TypeDefinitionIndex)->GetStaticField(0x223E8);
		}
		static ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>** StaticGet___9__86_0()
		{
			return (::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::Users::InputUser_GlobalState>**)Il2CppClass::FromTypeDefinitionIndex(InputUser___c_TypeDefinitionIndex)->GetStaticField(0x223F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAndResetState_b__86_0(::UnityEngine::InputSystem::Users::InputUser_GlobalState& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Users::InputUser_GlobalState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__SAVEANDRESETSTATE_B__86_0_OFFSET))(this, state);
		}

		::System::Void _SaveAndResetState_b__86_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_USERS_INPUTUSER___C__SAVEANDRESETSTATE_B__86_1_OFFSET))(this);
		}
	};
}
