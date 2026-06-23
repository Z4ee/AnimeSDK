#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceMatcher_MatcherJson_Capability.h"

namespace System { class String; }

#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHERJSON_FROMMATCHER_OFFSET UNITYSDK_OFFSET(0x1D7A6B60)
#define UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHERJSON_TOMATCHER_OFFSET UNITYSDK_OFFSET(0xA0C7E0)

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputDeviceMatcher_MatcherJson_TypeDefinitionIndex = 32002;

	struct alignas(8) InputDeviceMatcher_MatcherJson
	{
		::System::String* interface; // 0x10
		::Il2CppArray<::System::String*>* interfaces; // 0x18
		::System::String* deviceClass; // 0x20
		::Il2CppArray<::System::String*>* deviceClasses; // 0x28
		::System::String* manufacturer; // 0x30
		::Il2CppArray<::System::String*>* manufacturers; // 0x38
		::System::String* product; // 0x40
		::Il2CppArray<::System::String*>* products; // 0x48
		::System::String* version; // 0x50
		::Il2CppArray<::System::String*>* versions; // 0x58
		::Il2CppArray<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson_Capability>* capabilities; // 0x60

		/*
		static ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher)
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson(*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHERJSON_FROMMATCHER_OFFSET))(matcher);
		}
		*/

		/*
		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher ToMatcher()
		{
			return ((::UnityEngine::InputSystem::Layouts::InputDeviceMatcher(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LAYOUTS_INPUTDEVICEMATCHER_MATCHERJSON_TOMATCHER_OFFSET))(this);
		}
		*/
	};
}
