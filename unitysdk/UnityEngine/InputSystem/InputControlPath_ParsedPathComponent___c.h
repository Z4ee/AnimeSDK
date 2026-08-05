#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/Substring.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB41CB0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1EB41CF0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT___C__GET_USAGES_B__7_0_OFFSET UNITYSDK_OFFSET(0x1EB41D00)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlPath_ParsedPathComponent___c_TypeDefinitionIndex = 32241;

	class InputControlPath_ParsedPathComponent___c : public ::System::Object
	{
	public:
		static ::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent___c** StaticGet___9()
		{
			return (::UnityEngine::InputSystem::InputControlPath_ParsedPathComponent___c**)Il2CppClass::FromTypeDefinitionIndex(InputControlPath_ParsedPathComponent___c_TypeDefinitionIndex)->GetStaticField(0x27350);
		}
		static ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::System::String*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(InputControlPath_ParsedPathComponent___c_TypeDefinitionIndex)->GetStaticField(0x27358);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT___C__CTOR_OFFSET))(this);
		}

		::System::String* _get_usages_b__7_0(::UnityEngine::InputSystem::Utilities::Substring x)
		{
			return ((::System::String*(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::Substring))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLPATH_PARSEDPATHCOMPONENT___C__GET_USAGES_B__7_0_OFFSET))(this, x);
		}
	};
}
