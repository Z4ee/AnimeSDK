#pragma once
#include "unitysdk/unitysdk.h"

namespace UnrealTypes
{
	inline static constexpr unsigned int PropertyBagPropertyType_TypeDefinitionIndex = 27797;

	enum class PropertyBagPropertyType : ::System::Byte
	{
		None = 0x0,
		Bool = 0x1,
		Byte = 0x2,
		Int32 = 0x3,
		Int64 = 0x4,
		Float = 0x5,
		Double = 0x6,
		Name = 0x7,
		String = 0x8,
		Text = 0x9,
		Enum = 0xA,
		Struct = 0xB,
		Object = 0xC,
		SoftObject = 0xD,
		Class = 0xE,
		SoftClass = 0xF,
		UInt32 = 0x10,
		UInt64 = 0x11,
	};
}
