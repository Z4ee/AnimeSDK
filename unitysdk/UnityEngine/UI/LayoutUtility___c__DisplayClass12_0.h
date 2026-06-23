#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueType.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::UI { class ILayoutElement; }
namespace UnityEngine::UI { class ILayoutLimiter; }

namespace UnityEngine::UI
{
	inline static constexpr unsigned int LayoutUtility___c__DisplayClass12_0_TypeDefinitionIndex = 18922;

	struct alignas(8) LayoutUtility___c__DisplayClass12_0
	{
		::System::Int32 maxPriorityForLimiter; // 0x10
		::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>* propertyMinLimiter; // 0x18
		::System::Func_2<::UnityEngine::UI::ILayoutLimiter*, ::System::Single>* propertyMaxLimiter; // 0x20
		::System::Nullable_1<::System::Single> minLimiter; // 0x28
		::System::Nullable_1<::System::Single> maxLimiter; // 0x30
		::UnityEngine::UI::ILayoutLimiter* sourceMinLimiter; // 0x38
		::UnityEngine::UI::ILayoutLimiter* sourceMaxLimiter; // 0x40
		::System::Int32 maxPriority; // 0x48
		::System::Func_2<::UnityEngine::UI::ILayoutElement*, ::System::Single>* property; // 0x50
		::System::Single min; // 0x58
	};
}
