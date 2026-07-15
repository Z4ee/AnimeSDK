#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }
namespace System::Linq { template <typename T1, typename T2> class IGrouping_2; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2_Grouping; }

namespace System::Linq
{
	inline static constexpr unsigned int Lookup_2_TypeDefinitionIndex = 3161;

	template <typename TKey, typename TElement>
	class Lookup_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::Il2CppArray<::System::Linq::Lookup_2_Grouping<TKey, TElement>*>* groupings; // 0x0
		::System::Linq::Lookup_2_Grouping<TKey, TElement>* lastGrouping; // 0x0
		::System::Int32 count; // 0x0
	};
}
