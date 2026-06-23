#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UITabButton; }

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UITabButtonGroup___c__DisplayClass40_0_TypeDefinitionIndex = 56166;

	struct alignas(8) UITabButtonGroup___c__DisplayClass40_0
	{
		::System::Action_1<::System::Int32>* onPressedCB; // 0x10
		::UnityEngine::UI::Extension::UITabButton* tabButton; // 0x18
		::System::Int32 lockid; // 0x20
	};
}
