#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine::InputSystem { class InputActionRebindingExtensions___c__DisplayClass8_0; }

#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS___C__DISPLAYCLASS8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD7DEA0)
#define UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS___C__DISPLAYCLASS8_1__GETBINDINGDISPLAYSTRING_B__0_OFFSET UNITYSDK_OFFSET(0x1DD7DEB0)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputActionRebindingExtensions___c__DisplayClass8_1_TypeDefinitionIndex = 31554;

	class InputActionRebindingExtensions___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::UnityEngine::InputSystem::InputActionRebindingExtensions___c__DisplayClass8_0* CS___8__locals1; // 0x10
		::Il2CppArray<::System::String*>* partStrings; // 0x18
		::System::Int32 firstPartIndex; // 0x20
		::System::Int32 partCount; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS___C__DISPLAYCLASS8_1__CTOR_OFFSET))(this);
		}

		::System::String* _GetBindingDisplayString_b__0(::System::String* fragment)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTACTIONREBINDINGEXTENSIONS___C__DISPLAYCLASS8_1__GETBINDINGDISPLAYSTRING_B__0_OFFSET))(this, fragment);
		}
	};
}
