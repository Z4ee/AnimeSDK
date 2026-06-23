#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/EnhancedTouch/Touch_GlobalState.h"

namespace System { class Action; }
namespace UnityEngine::InputSystem::Utilities { template <typename T> class SavedStructState_1_TypedRestore; }

#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39C8C0)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E39C900)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__SAVEANDRESETSTATE_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E39C910)
#define UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__SAVEANDRESETSTATE_B__78_1_OFFSET UNITYSDK_OFFSET(0x1E39C990)

namespace UnityEngine::InputSystem::EnhancedTouch
{
	inline static constexpr unsigned int Touch___c_TypeDefinitionIndex = 31814;

	class Touch___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>** StaticGet___9__78_0()
		{
			return (::UnityEngine::InputSystem::Utilities::SavedStructState_1_TypedRestore<::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState>**)Il2CppClass::FromTypeDefinitionIndex(Touch___c_TypeDefinitionIndex)->GetStaticField(0x25DE0);
		}
		static ::UnityEngine::InputSystem::EnhancedTouch::Touch___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::EnhancedTouch::Touch___c**)Il2CppClass::FromTypeDefinitionIndex(Touch___c_TypeDefinitionIndex)->GetStaticField(0x25DE8);
		}
		static ::System::Action** StaticGet___9__78_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(Touch___c_TypeDefinitionIndex)->GetStaticField(0x25DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__CTOR_OFFSET))(this);
		}

		::System::Void _SaveAndResetState_b__78_0(::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState& state)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::EnhancedTouch::Touch_GlobalState&))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__SAVEANDRESETSTATE_B__78_0_OFFSET))(this, state);
		}

		::System::Void _SaveAndResetState_b__78_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_ENHANCEDTOUCH_TOUCH___C__SAVEANDRESETSTATE_B__78_1_OFFSET))(this);
		}
	};
}
