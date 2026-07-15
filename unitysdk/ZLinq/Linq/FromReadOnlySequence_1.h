#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1.h"
#include "unitysdk/System/Buffers/ReadOnlySequence_1_Enumerator.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/ZLinq/Linq/FromMemory_1.h"

namespace ZLinq::Linq
{
	inline static constexpr unsigned int FromReadOnlySequence_1_TypeDefinitionIndex = 6356;

	template <typename T>
	struct FromReadOnlySequence_1
	{
		::System::Buffers::ReadOnlySequence_1<T> _source_P; // 0x0
		::System::Boolean isInit; // 0x0
		::System::Buffers::ReadOnlySequence_1_Enumerator<T> sequenceEnumerator; // 0x0
		::ZLinq::Linq::FromMemory_1<T> enumerator; // 0x0
	};
}
