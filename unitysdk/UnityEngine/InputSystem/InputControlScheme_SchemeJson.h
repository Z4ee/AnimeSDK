#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/InputControlScheme_SchemeJson_DeviceJson.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_1_OFFSET UNITYSDK_OFFSET(0x1CD250A0)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_OFFSET UNITYSDK_OFFSET(0x1CD24F50)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEMES_OFFSET UNITYSDK_OFFSET(0x1CD25200)
#define UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEME_OFFSET UNITYSDK_OFFSET(0x9B7C50)

namespace UnityEngine::InputSystem
{
	inline static constexpr unsigned int InputControlScheme_SchemeJson_TypeDefinitionIndex = 31593;

	struct alignas(8) InputControlScheme_SchemeJson
	{
		::System::String* name; // 0x10
		::System::String* bindingGroup; // 0x18
		::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_SchemeJson_DeviceJson>* devices; // 0x20

		/*
		::UnityEngine::InputSystem::InputControlScheme ToScheme()
		{
			return ((::UnityEngine::InputSystem::InputControlScheme(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEME_OFFSET))(this);
		}
		*/

		/*
		static ::UnityEngine::InputSystem::InputControlScheme_SchemeJson ToJson(::UnityEngine::InputSystem::InputControlScheme scheme)
		{
			return ((::UnityEngine::InputSystem::InputControlScheme_SchemeJson(*)(::UnityEngine::InputSystem::InputControlScheme))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_OFFSET))(scheme);
		}
		*/

		/*
		static ::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>* ToJson_1(::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>* schemes)
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>*(*)(::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOJSON_1_OFFSET))(schemes);
		}
		*/

		/*
		static ::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>* ToSchemes(::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>* schemes)
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme>*(*)(::Il2CppArray<::UnityEngine::InputSystem::InputControlScheme_SchemeJson>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_INPUTCONTROLSCHEME_SCHEMEJSON_TOSCHEMES_OFFSET))(schemes);
		}
		*/
	};
}
