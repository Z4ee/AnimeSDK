#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Component; }
namespace UnityEngine { class RectTransform; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutRebuilder___c__DisplayClass19_0_TypeDefinitionIndex = 19261;

	struct alignas(8) LayoutRebuilder___c__DisplayClass19_0
	{
		::UnityEngine::RectTransform* rect; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Component*>* comps; // 0x18
	};
}
