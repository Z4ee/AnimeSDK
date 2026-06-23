#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputControlLayout_ControlItem.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON_FROMCONTROLITEMS_OFFSET UNITYSDK_OFFSET(0x1C3767B0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON_TOLAYOUT_OFFSET UNITYSDK_OFFSET(0x1C375FD0)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1C375FC0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_ControlItemJson_TypeDefinitionIndex = 31986;

	class InputControlLayout_ControlItemJson : public ::System::Object
	{
	public:
		::System::String* name; // 0x10
		::System::String* layout; // 0x18
		::System::String* variants; // 0x20
		::System::String* usage; // 0x28
		::System::String* alias; // 0x30
		::System::String* useStateFrom; // 0x38
		::System::UInt32 offset; // 0x40
		::System::UInt32 bit; // 0x44
		::System::UInt32 sizeInBits; // 0x48
		::System::String* format; // 0x50
		::System::Int32 arraySize; // 0x58
		::Il2CppArray<::System::String*>* usages; // 0x60
		::Il2CppArray<::System::String*>* aliases; // 0x68
		::System::String* parameters; // 0x70
		::System::String* processors; // 0x78
		::System::String* displayName; // 0x80
		::System::String* shortDisplayName; // 0x88
		::System::Boolean noisy; // 0x90
		::System::Boolean dontReset; // 0x91
		::System::Boolean synthetic; // 0x92
		::System::String* defaultState; // 0x98
		::System::String* minValue; // 0xA0
		::System::String* maxValue; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON__CTOR_OFFSET))(this);
		}

		::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem ToLayout()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON_TOLAYOUT_OFFSET))(this);
		}

		static ::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>* FromControlItems(::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>* items)
		{
			return ((::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItemJson*>*(*)(::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputControlLayout_ControlItem>*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTCONTROLLAYOUT_CONTROLITEMJSON_FROMCONTROLITEMS_OFFSET))(items);
		}
	};
}
