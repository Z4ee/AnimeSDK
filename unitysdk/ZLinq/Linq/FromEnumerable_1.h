#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZLinq/Linq/FromEnumerableContent.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZLinq::Linq { template <typename T> class CollectionIterator_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromEnumerable_1_TypeDefinitionIndex = 6344;

	template <typename T>
	struct FromEnumerable_1
	{
		::ZLinq::Linq::CollectionIterator_1<T>* iterator; // 0x0
		::ZLinq::Linq::FromEnumerableContent content; // 0x0
	};
}
