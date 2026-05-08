#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/InputActionState_GlobalState.h"

namespace System { class Action; }
namespace UnityEngine::InputSystem::Utilities { template <typename T> class SavedStructState_1_TypedRestore; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B38BCE0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B38BD20)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_0_OFFSET UNITYSDK_OFFSET(0x1B38BD30)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_1_OFFSET UNITYSDK_OFFSET(0x1B38BD50)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionState___c_TypeDefinitionIndex = 28915;

	class InputActionState___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__121_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x220D0);
		}
		static ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>** StaticGet___9__121_0()
		{
			return (::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::InputActionState_GlobalState>**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x220D8);
		}
		static ::UnityEngine::InputSystem::InputActionState___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputActionState___c**)Il2CppClass::FromTypeDefinitionIndex(InputActionState___c_TypeDefinitionIndex)->GetStaticField(0x220E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAndResetState_b__121_0(::UnityEngine::InputSystem::InputActionState_GlobalState& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::InputActionState_GlobalState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_0_OFFSET))(this, state);
		}

		::System::Void _SaveAndResetState_b__121_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONSTATE___C__SAVEANDRESETSTATE_B__121_1_OFFSET))(this);
		}
	};
}
