#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading { template <typename T> class SparselyPopulatedArrayFragment_1; }

namespace System::Threading
{
	inline static constexpr unsigned int SparselyPopulatedArrayFragment_1_TypeDefinitionIndex = 802;

	template <typename T>
	class SparselyPopulatedArrayFragment_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* m_elements; // 0x0
		::System::Int32 m_freeCount; // 0x0
		::System::Threading::SparselyPopulatedArrayFragment_1<T>* m_next; // 0x0
		::System::Threading::SparselyPopulatedArrayFragment_1<T>* m_prev; // 0x0
	};
}
