#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace ZLinq::Linq { template <typename T1, typename T2> class Grouping_2; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int Grouping_2_TypeDefinitionIndex = 6387;

	template <typename TKey, typename TElement>
	class Grouping_2 : public ::System::Object
	{
	public:
		TKey key; // 0x0
		::System::UInt32 hashCode; // 0x0
		::Il2CppArray<TElement>* elements; // 0x0
		::System::Int32 count; // 0x0
		::ZLinq::Linq::Grouping_2<TKey, TElement>* NextGroupInAddOrder; // 0x0
		::ZLinq::Linq::Grouping_2<TKey, TElement>* NextGroupInSameHashCode; // 0x0
	};
}
