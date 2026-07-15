#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Linq { template <typename T1, typename T2> class Lookup_2_Grouping; }

namespace System::Linq
{
	inline static constexpr unsigned int Lookup_2_Grouping_TypeDefinitionIndex = 3162;

	template <typename TKey, typename TElement>
	class Lookup_2_Grouping : public ::System::Object
	{
	public:
		TKey key; // 0x0
		::System::Int32 hashCode; // 0x0
		::Il2CppArray<TElement>* elements; // 0x0
		::System::Int32 count; // 0x0
		::System::Linq::Lookup_2_Grouping<TKey, TElement>* hashNext; // 0x0
		::System::Linq::Lookup_2_Grouping<TKey, TElement>* next; // 0x0
	};
}
