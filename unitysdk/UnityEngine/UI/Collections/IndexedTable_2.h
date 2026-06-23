#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace UnityEngine::UI::Collections
{
	inline static constexpr unsigned int IndexedTable_2_TypeDefinitionIndex = 18998;

	template <typename K, typename T>
	class IndexedTable_2 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* m_List; // 0x0
		::System::Int32 m_ArrayCount; // 0x0
		::System::Collections::Generic::Dictionary_2<K, ::System::Int32>* m_Dictionary; // 0x0
	};
}
