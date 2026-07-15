#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/Dictionary_2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int SerializedDictionary_2_TypeDefinitionIndex = 34075;

	template <typename K, typename V>
	class SerializedDictionary_2 : public ::System::Collections::Generic::Dictionary_2<K, V>
	{
	public:
		::System::Collections::Generic::List_1<K>* m_Keys; // 0x0
		::System::Collections::Generic::List_1<V>* m_Values; // 0x0
	};
}
