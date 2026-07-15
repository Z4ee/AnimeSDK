#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Linq { template <typename T> class EnumerableSorter_1; }
namespace System::Linq { template <typename T> class IOrderedEnumerable_1; }

namespace System::Linq
{
	inline static constexpr unsigned int OrderedEnumerable_1_TypeDefinitionIndex = 3168;

	template <typename TElement>
	class OrderedEnumerable_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IEnumerable_1<TElement>* source; // 0x0
	};
}
