#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ObjectModel/Collection_1.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEqualityComparer_1; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int KeyedCollection_2_TypeDefinitionIndex = 1499;

	template <typename TKey, typename TItem>
	class KeyedCollection_2 : public ::System::Collections::ObjectModel::Collection_1<TItem>
	{
	public:
		::System::Collections::Generic::IEqualityComparer_1<TKey>* comparer; // 0x0
		::System::Collections::Generic::Dictionary_2<TKey, TItem>* dict; // 0x0
		::System::Int32 keyCount; // 0x0
		::System::Int32 threshold; // 0x0
	};
}
