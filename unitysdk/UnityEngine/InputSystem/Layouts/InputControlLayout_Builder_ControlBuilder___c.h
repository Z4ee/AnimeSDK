#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/InternedString.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A921510)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A921550)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__WITHUSAGES_B__14_0_OFFSET UNITYSDK_OFFSET(0x1A921560)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_Builder_ControlBuilder___c_TypeDefinitionIndex = 29325;

	class InputControlLayout_Builder_ControlBuilder___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::Layouts::InputControlLayout_Builder_ControlBuilder___c**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_Builder_ControlBuilder___c_TypeDefinitionIndex)->GetStaticField(0x22800);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::InputSystem::Utilities::InternedString>**)Il2CppClass::FromTypeDefinitionIndex(InputControlLayout_Builder_ControlBuilder___c_TypeDefinitionIndex)->GetStaticField(0x22808);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Utilities::InternedString _WithUsages_b__14_0(::System::String* x)
		{
			return ((::UnityEngine::InputSystem::Utilities::InternedString(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_BUILDER_CONTROLBUILDER___C__WITHUSAGES_B__14_0_OFFSET))(this, x);
		}
	};
}
