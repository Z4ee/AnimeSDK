#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

namespace System::Collections::ObjectModel
{
	inline static constexpr unsigned int ReadOnlyDictionary_2_KeyCollection_TypeDefinitionIndex = 1503;

	template <typename TKey, typename TValue>
	class ReadOnlyDictionary_2_KeyCollection : public ::System::Object
	{
	public:
		::System::Collections::Generic::ICollection_1<TKey>* m_collection; // 0x0
		::System::Object* m_syncRoot; // 0x0
	};
}
