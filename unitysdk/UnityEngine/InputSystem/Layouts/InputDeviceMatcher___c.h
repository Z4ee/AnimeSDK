#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CD277B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD277F0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER___C__WITH_B__11_0_OFFSET UNITYSDK_OFFSET(0x1CD27800)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceMatcher___c_TypeDefinitionIndex = 32005;

	class InputDeviceMatcher___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Char, ::System::Boolean>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::System::Char, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InputDeviceMatcher___c_TypeDefinitionIndex)->GetStaticField(0x26510);
		}
		static ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Layouts::InputDeviceMatcher___c**)Il2CppClass::FromTypeDefinitionIndex(InputDeviceMatcher___c_TypeDefinitionIndex)->GetStaticField(0x26518);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _With_b__11_0(::System::Char ch)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Char))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER___C__WITH_B__11_0_OFFSET))(this, ch);
		}
	};
}
