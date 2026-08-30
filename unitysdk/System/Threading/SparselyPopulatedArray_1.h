#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/SparselyPopulatedArrayAddInfo_1.h"

namespace System::Threading { template <typename T> class SparselyPopulatedArrayFragment_1; }

namespace System::Threading
{
	inline static constexpr unsigned int SparselyPopulatedArray_1_TypeDefinitionIndex = 803;

	template <typename T>
	class SparselyPopulatedArray_1 : public ::System::Object
	{
	public:
		::System::Threading::SparselyPopulatedArrayFragment_1<T>* m_tail; // 0x0
	};
}
