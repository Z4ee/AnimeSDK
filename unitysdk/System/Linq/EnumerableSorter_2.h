#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Linq/EnumerableSorter_1.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IComparer_1; }

namespace System::Linq
{
	inline static constexpr unsigned int EnumerableSorter_2_TypeDefinitionIndex = 3172;

	template <typename TElement, typename TKey>
	class EnumerableSorter_2 : public ::System::Linq::EnumerableSorter_1<TElement>
	{
	public:
		::System::Func_2<TElement, TKey>* keySelector; // 0x0
		::System::Collections::Generic::IComparer_1<TKey>* comparer; // 0x0
		::System::Boolean descending; // 0x0
		::System::Linq::EnumerableSorter_1<TElement>* next; // 0x0
		::Il2CppArray<TKey>* keys; // 0x0
	};
}
