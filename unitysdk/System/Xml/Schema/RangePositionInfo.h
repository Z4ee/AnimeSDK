#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/System/ValueType.h"

namespace System::Xml::Schema { class BitSet; }

namespace System::Xml::Schema
{
	inline static constexpr unsigned int RangePositionInfo_TypeDefinitionIndex = 1978;

	struct alignas(8) RangePositionInfo
	{
		::System::Xml::Schema::BitSet* curpos; // 0x10
		::Il2CppArray<::System::Decimal>* rangeCounters; // 0x18
	};
}
