#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/Substring.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC48790)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC487D0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH___C__TRYGETDEVICEUSAGES_B__9_0_OFFSET UNITYSDK_OFFSET(0x1EC487E0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath___c_TypeDefinitionIndex = 32243;

	class InputControlPath___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::System::String*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlPath___c_TypeDefinitionIndex)->GetStaticField(0x27950);
		}
		static ::UnityEngine::InputSystem::InputControlPath___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputControlPath___c**)Il2CppClass::FromTypeDefinitionIndex(InputControlPath___c_TypeDefinitionIndex)->GetStaticField(0x27958);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH___C__CTOR_OFFSET))(this);
		}

		::System::String* _TryGetDeviceUsages_b__9_0(::UnityEngine::InputSystem::Utilities::Substring x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH___C__TRYGETDEVICEUSAGES_B__9_0_OFFSET))(this, x);
		}
	};
}
