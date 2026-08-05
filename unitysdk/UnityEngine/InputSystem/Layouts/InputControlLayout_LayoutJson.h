#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout; }
namespace UnityEngine::InputSystem::Layouts { class InputControlLayout_ControlItemJson; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON_FROMLAYOUT_OFFSET UNITYSDK_OFFSET(0x1E0E0070)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON_TOLAYOUT_OFFSET UNITYSDK_OFFSET(0xA01810)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_LayoutJson_TypeDefinitionIndex = 32604;

	struct alignas(8) InputControlLayout_LayoutJson
	{
		::System::String* name; // 0x10
		::System::String* extend; // 0x18
		::Il2CppArray<::System::String*>* extendMultiple; // 0x20
		::System::String* format; // 0x28
		::System::String* beforeRender; // 0x30
		::System::String* runInBackground; // 0x38
		::Il2CppArray<::System::String*>* commonUsages; // 0x40
		::System::String* displayName; // 0x48
		::System::String* description; // 0x50
		::System::String* type; // 0x58
		::System::String* variant; // 0x60
		::System::Boolean isGenericTypeOfDevice; // 0x68
		::System::Boolean hideInUI; // 0x69
		::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>* controls; // 0x70

		::UnityEngine::InputSystem::Layouts::InputControlLayout* ToLayout()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON_TOLAYOUT_OFFSET))(this);
		}

		static ::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson FromLayout(::UnityEngine::InputSystem::Layouts::InputControlLayout* layout)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_LayoutJson(*)(::UnityEngine::InputSystem::Layouts::InputControlLayout*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_LAYOUTJSON_FROMLAYOUT_OFFSET))(layout);
		}
	};
}
