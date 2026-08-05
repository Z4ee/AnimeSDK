#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/LowLevel/InputEventPtr.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::InputSystem { class InputControl; }

#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB03640)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB03680)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM___C__GET_ONANYBUTTONPRESS_B__79_0_OFFSET UNITYSDK_OFFSET(0x1EB03690)
#define UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM___C__GET_ONANYBUTTONPRESS_B__79_1_OFFSET UNITYSDK_OFFSET(0x1EB036B0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputSystem___c_TypeDefinitionIndex = 32222;

	class InputSystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>** StaticGet___9__79_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>**)Il2CppClass::FromTypeDefinitionIndex(InputSystem___c_TypeDefinitionIndex)->GetStaticField(0x276B0);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::System::Boolean>** StaticGet___9__79_1()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::InputControl*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InputSystem___c_TypeDefinitionIndex)->GetStaticField(0x276B8);
		}
		static ::UnityEngine::InputSystem::InputSystem___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputSystem___c**)Il2CppClass::FromTypeDefinitionIndex(InputSystem___c_TypeDefinitionIndex)->GetStaticField(0x276C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::InputControl* _get_onAnyButtonPress_b__79_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr e)
		{
			return ((::UnityEngine::InputSystem::InputControl*(*)(::PVOID, ::UnityEngine::InputSystem::LowLevel::InputEventPtr))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM___C__GET_ONANYBUTTONPRESS_B__79_0_OFFSET))(this, e);
		}

		::System::Boolean _get_onAnyButtonPress_b__79_1(::UnityEngine::InputSystem::InputControl* c)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::InputSystem::InputControl*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTSYSTEM___C__GET_ONANYBUTTONPRESS_B__79_1_OFFSET))(this, c);
		}
	};
}
