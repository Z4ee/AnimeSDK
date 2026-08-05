#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::InputSystem { class InputDevice; }

#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3DDD60)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F3DDDA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTMANAGER___C__MAKEDEVICENAMEUNIQUE_B__155_0_OFFSET UNITYSDK_OFFSET(0x1F3DDDB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputManager___c_TypeDefinitionIndex = 32310;

	class InputManager___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputManager___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputManager___c**)Il2CppClass::FromTypeDefinitionIndex(InputManager___c_TypeDefinitionIndex)->GetStaticField(0x27CC0);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::System::String*>** StaticGet___9__155_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::InputDevice*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputManager___c_TypeDefinitionIndex)->GetStaticField(0x27CC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER___C__CTOR_OFFSET))(this);
		}

		::System::String* _MakeDeviceNameUnique_b__155_0(::UnityEngine::InputSystem::InputDevice* x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::InputDevice*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTMANAGER___C__MAKEDEVICENAMEUNIQUE_B__155_0_OFFSET))(this, x);
		}
	};
}
