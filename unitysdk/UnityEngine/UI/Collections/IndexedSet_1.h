#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Predicate_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::UI::Collections
{
	inline static constexpr unsigned int IndexedSet_1_TypeDefinitionIndex = 6055;

	template <typename T>
	class IndexedSet_1 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<T>* m_List; // 0x0
		::System::Collections::Generic::Dictionary_2<T, ::System::Int32>* m_Dictionary; // 0x0
	};
}
