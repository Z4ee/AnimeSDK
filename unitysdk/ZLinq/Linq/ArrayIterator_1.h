#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Index.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/ZLinq/Linq/CollectionIterator_1.h"
#include "unitysdk/ZLinq/Linq/FromEnumerableContent.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZLinq::Linq { template <typename T> class ArrayIterator_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int ArrayIterator_1_TypeDefinitionIndex = 6346;

	template <typename T>
	class ArrayIterator_1 : public ::ZLinq::Linq::CollectionIterator_1<T>
	{
	public:
		static ::ZLinq::Linq::ArrayIterator_1<T>** StaticGet_Instance()
		{
			return (::ZLinq::Linq::ArrayIterator_1<T>**)Il2CppClass::FromTypeDefinitionIndex(ArrayIterator_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
