#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml
{
	inline static constexpr unsigned int AttributeProperties_TypeDefinitionIndex = 1816;

	enum class AttributeProperties : ::System::UInt32
	{
		DEFAULT = 0x0,
		URI = 0x1,
		BOOLEAN = 0x2,
		NAME = 0x4,
	};
}
