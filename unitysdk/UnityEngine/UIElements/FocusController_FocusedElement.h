#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::UIElements { class Focusable; }
namespace UnityEngine::UIElements { class VisualElement; }

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int FocusController_FocusedElement_TypeDefinitionIndex = 6138;

	struct alignas(8) FocusController_FocusedElement
	{
		::UnityEngine::UIElements::VisualElement* m_SubTreeRoot; // 0x10
		::UnityEngine::UIElements::Focusable* m_FocusedElement; // 0x18
	};
}
