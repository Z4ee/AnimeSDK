#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromList_1_TypeDefinitionIndex = 6354;

	template <typename T>
	struct FromList_1
	{
		::System::Collections::Generic::List_1<T>* _source_P; // 0x0
		::System::Int32 index; // 0x0
	};
}
