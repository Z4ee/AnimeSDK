#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/System/ValueType.h"

namespace System
{
	inline static constexpr unsigned int Span_1_Enumerator_TypeDefinitionIndex = 6562;

	template <typename T>
	struct Span_1_Enumerator
	{
		::System::Span_1<T> _span; // 0x0
		::System::Int32 _index; // 0x0
	};
}
