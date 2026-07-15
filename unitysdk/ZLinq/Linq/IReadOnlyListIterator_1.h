#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZLinq/Linq/CollectionIterator_1.h"
#include "unitysdk/ZLinq/Linq/FromEnumerableContent.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZLinq::Linq { template <typename T> class IReadOnlyListIterator_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int IReadOnlyListIterator_1_TypeDefinitionIndex = 6349;

	template <typename T>
	class IReadOnlyListIterator_1 : public ::ZLinq::Linq::CollectionIterator_1<T>
	{
	public:
		static ::ZLinq::Linq::IReadOnlyListIterator_1<T>** StaticGet_Instance()
		{
			return (::ZLinq::Linq::IReadOnlyListIterator_1<T>**)Il2CppClass::FromTypeDefinitionIndex(IReadOnlyListIterator_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
