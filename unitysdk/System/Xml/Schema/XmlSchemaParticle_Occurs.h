#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaParticle_Occurs_TypeDefinitionIndex = 2200;

	enum class XmlSchemaParticle_Occurs : ::System::Int32
	{
		None = 0,
		Min = 1,
		Max = 2,
	};
}
