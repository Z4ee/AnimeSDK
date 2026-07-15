#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int ElementProperties_TypeDefinitionIndex = 1815;

	enum class ElementProperties : ::System::UInt32
	{
		DEFAULT = 0x0,
		URI_PARENT = 0x1,
		BOOL_PARENT = 0x2,
		NAME_PARENT = 0x4,
		EMPTY = 0x8,
		NO_ENTITIES = 0x10,
		HEAD = 0x20,
		BLOCK_WS = 0x40,
		HAS_NS = 0x80,
	};
}
