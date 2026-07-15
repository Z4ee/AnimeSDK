#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ZLinq/Linq/CollectionIterator_1.h"
#include "unitysdk/ZLinq/Linq/FromEnumerableContent.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace ZLinq::Linq { template <typename T> class IListIterator_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int IListIterator_1_TypeDefinitionIndex = 6348;

	template <typename T>
	class IListIterator_1 : public ::ZLinq::Linq::CollectionIterator_1<T>
	{
	public:
		static ::ZLinq::Linq::IListIterator_1<T>** StaticGet_Instance()
		{
			return (::ZLinq::Linq::IListIterator_1<T>**)Il2CppClass::FromTypeDefinitionIndex(IListIterator_1_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
