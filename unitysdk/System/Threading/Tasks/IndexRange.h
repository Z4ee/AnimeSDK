#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Threading::Tasks { template <typename T> class Shared_1; }

namespace System::Threading::Tasks
{
	inline static constexpr unsigned int IndexRange_TypeDefinitionIndex = 895;

	struct alignas(8) IndexRange
	{
		::System::Threading::Tasks::Shared_1<::System::Int64>* m_nSharedCurrentIndexOffset; // 0x10
		::System::Int32 m_bRangeFinished; // 0x18
		::System::Int64 m_nFromInclusive; // 0x20
		::System::Int64 m_nToExclusive; // 0x28
	};
}
