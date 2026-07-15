#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Serialization
{
	inline static constexpr unsigned int SchemaTypes_TypeDefinitionIndex = 1984;

	enum class SchemaTypes : ::System::Int32
	{
		NotSet = 0,
		Primitive = 1,
		Enum = 2,
		Array = 3,
		Class = 4,
		XmlSerializable = 5,
		XmlNode = 6,
		Void = 7,
	};
}
