#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Linq
{
	inline static constexpr unsigned int GroupedEnumerable_4_TypeDefinitionIndex = 4383;

	template <typename TSource, typename TKey, typename TElement, typename TResult>
	class GroupedEnumerable_4 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<TSource>* source; // 0x0
		::System::Func_2<TSource, TKey>* keySelector; // 0x0
		::System::Func_2<TSource, TElement>* elementSelector; // 0x0
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::System::Func_3<TKey, ::System::Collections::Generic::IEnumerable_1<TElement>*, TResult>* resultSelector; // 0x0
	};
}
