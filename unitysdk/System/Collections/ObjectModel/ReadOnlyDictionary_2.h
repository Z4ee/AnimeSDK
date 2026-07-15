#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IDictionaryEnumerator; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class IDictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2_KeyCollection; }
namespace System::Collections::ObjectModel { template <typename T1, typename T2> class ReadOnlyDictionary_2_ValueCollection; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyDictionary_2_TypeDefinitionIndex = 1501;

	template <typename TKey, typename TValue>
	class ReadOnlyDictionary_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::IDictionary_2<TKey, TValue>* m_dictionary; // 0x0
		::System::Object* m_syncRoot; // 0x0
		::System::Collections::ObjectModel::ReadOnlyDictionary_2_KeyCollection<TKey, TValue>* m_keys; // 0x0
		::System::Collections::ObjectModel::ReadOnlyDictionary_2_ValueCollection<TKey, TValue>* m_values; // 0x0
	};
}
