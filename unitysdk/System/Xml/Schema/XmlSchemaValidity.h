#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Xml::Schema
{
	inline static constexpr unsigned int XmlSchemaValidity_TypeDefinitionIndex = 2211;

	enum class XmlSchemaValidity : ::System::Int32
	{
		NotKnown = 0,
		Valid = 1,
		Invalid = 2,
	};
}
