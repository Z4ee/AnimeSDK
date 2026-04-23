#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Threading
{
	inline static constexpr unsigned int ThreadPoolWorkQueue_SparseArray_1_TypeDefinitionIndex = 856;

	template <typename T>
	class ThreadPoolWorkQueue_SparseArray_1 : public ::System::Object
	{
	public:
		::Il2CppArray<T>* m_array; // 0x0
	};
}
