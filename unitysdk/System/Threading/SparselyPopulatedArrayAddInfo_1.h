#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading { template <typename T> class SparselyPopulatedArrayFragment_1; }

namespace System::Threading
{
	inline static constexpr unsigned int SparselyPopulatedArrayAddInfo_1_TypeDefinitionIndex = 804;

	template <typename T>
	struct SparselyPopulatedArrayAddInfo_1
	{
		::System::Threading::SparselyPopulatedArrayFragment_1<T>* m_source; // 0x0
		::System::Int32 m_index; // 0x0
	};
}
