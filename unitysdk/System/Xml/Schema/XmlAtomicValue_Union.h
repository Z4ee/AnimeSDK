#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueType.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlAtomicValue_Union_TypeDefinitionIndex = 2174;

	struct alignas(8) XmlAtomicValue_Union
	{
		::System::Boolean boolVal; // 0x10
		::System::Double dblVal; // 0x10
		::System::Int64 i64Val; // 0x10
		::System::Int32 i32Val; // 0x10
		::System::DateTime dtVal; // 0x10
	};
}
