#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Layouts/InputDeviceMatcher_MatcherJson.h"

namespace System { class String; }

namespace UnityEngine::InputSystem::Layouts
{
	inline static constexpr unsigned int InputControlLayout_LayoutJsonNameAndDescriptorOnly_TypeDefinitionIndex = 29327;

	struct alignas(8) InputControlLayout_LayoutJsonNameAndDescriptorOnly
	{
		::System::String* name; // 0x10
		::System::String* extend; // 0x18
		::Il2CppArray<::System::String*>* extendMultiple; // 0x20
		::UnityEngine::InputSystem::Layouts::InputDeviceMatcher_MatcherJson device; // 0x28
	};
}
