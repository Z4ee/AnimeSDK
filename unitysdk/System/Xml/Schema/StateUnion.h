#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int StateUnion_TypeDefinitionIndex = 2096;

	struct alignas(4) StateUnion
	{
		::System::Int32 State; // 0x10
		::System::Int32 AllElementsRequired; // 0x10
		::System::Int32 CurPosIndex; // 0x10
		::System::Int32 NumberOfRunningPos; // 0x10
	};
}
