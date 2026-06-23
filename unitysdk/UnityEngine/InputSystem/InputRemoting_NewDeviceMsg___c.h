#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B978230)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG___C__CREATE_B__1_0_OFFSET UNITYSDK_OFFSET(0x1B978280)
#define UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1B978270)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputRemoting_NewDeviceMsg___c_TypeDefinitionIndex = 31656;

	class InputRemoting_NewDeviceMsg___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::InternedString, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputRemoting_NewDeviceMsg___c_TypeDefinitionIndex)->GetStaticField(0x261F0);
		}
		static ::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputRemoting_NewDeviceMsg___c**)Il2CppClass::FromTypeDefinitionIndex(InputRemoting_NewDeviceMsg___c_TypeDefinitionIndex)->GetStaticField(0x261F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG___C__CTOR_OFFSET))(this);
		}

		::System::String* _Create_b__1_0(::UnityEngine::InputSystem::Utilities::InternedString x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::InternedString))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTREMOTING_NEWDEVICEMSG___C__CREATE_B__1_0_OFFSET))(this, x);
		}
	};
}
