#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D741E30)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1D741E70)
#define UNITYENGINE_INPUTSYSTEM_INPUTBINDING___C__MASKBYGROUPS_B__45_0_OFFSET UNITYSDK_OFFSET(0x1D741E80)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputBinding___c_TypeDefinitionIndex = 31577;

	class InputBinding___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputBinding___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputBinding___c**)Il2CppClass::FromTypeDefinitionIndex(InputBinding___c_TypeDefinitionIndex)->GetStaticField(0x25FA0);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__45_0()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(InputBinding___c_TypeDefinitionIndex)->GetStaticField(0x25FA8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _MaskByGroups_b__45_0(::System::String* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTBINDING___C__MASKBYGROUPS_B__45_0_OFFSET))(this, x);
		}
	};
}
