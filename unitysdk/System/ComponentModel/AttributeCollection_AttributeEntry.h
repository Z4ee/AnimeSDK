#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Type; }

namespace System::ComponentModel
{
	inline static constexpr unsigned int AttributeCollection_AttributeEntry_TypeDefinitionIndex = 2556;

	struct alignas(8) AttributeCollection_AttributeEntry
	{
		::System::Type* type; // 0x10
		::System::Int32 index; // 0x18
	};
}
