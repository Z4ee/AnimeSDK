#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Xml::Linq
{
	inline static constexpr unsigned int XHashtable_1_XHashtableState_Entry_TypeDefinitionIndex = 3872;

	template <typename TValue>
	struct XHashtable_1_XHashtableState_Entry
	{
		TValue Value; // 0x0
		::System::Int32 HashCode; // 0x0
		::System::Int32 Next; // 0x0
	};
}
